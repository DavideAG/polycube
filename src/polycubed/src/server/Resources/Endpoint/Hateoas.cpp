/*
 * Copyright 2020 The Polycube Authors
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <spdlog/spdlog.h>
#include "Hateoas.h"


std::unordered_map<std::string, std::list<std::string>> Hateoas::endpoints_for_all_services;


bool Hateoas::is_valid_cube_root(
        const std::string &source, const std::string &cube_name) {

    std::string root = source.substr(0, source.find(cube_name));
    auto service_pos_it = Hateoas::endpoints_for_all_services.find(root);

    return service_pos_it != Hateoas::endpoints_for_all_services.end();

}


std::list<std::string> Hateoas::endpoints_to_attach(
        const std::string &service_root_endpoint,
        const std::string &service_name) {

    std::string root = service_root_endpoint.substr(0, service_root_endpoint.find(service_name));
    auto service_pair = Hateoas::endpoints_for_all_services.find(root);

    return service_pair->second;

}


char * Hateoas::add_links(
        char *old_response_body, const std::string &service_endpoint,
        const std::string &service_name) {

    auto hateoas_endpoints = Hateoas::endpoints_to_attach(service_endpoint, service_name);

    json js = json::parse(old_response_body);
    js.push_back({"links", hateoas_endpoints});
    std::string json_dump(std::move(js.dump()));

    char * new_response_body = new char[json_dump.size() + 1];
    std::copy(json_dump.begin(), json_dump.end(), new_response_body);
    new_response_body[json_dump.size()] = '\0';

    ::free(old_response_body);

    return new_response_body;

}


void Hateoas::add_service_root_rest_endpoint(
        const std::string &root_rest_endpoint) {

    auto itr = Hateoas::endpoints_for_all_services.find(root_rest_endpoint);
    auto end = Hateoas::endpoints_for_all_services.end();

    if (itr == end) {
        Hateoas::endpoints_for_all_services.insert(
                std::pair(root_rest_endpoint, std::list<std::string>())
        );
    }

}

void Hateoas::add_leaf_endpoint(
        const std::string &root_endpoint, std::string &leaf_endpoint) {

    std::string root = root_endpoint.substr(0, root_endpoint.find(":name"));
    auto service_pos_it = Hateoas::endpoints_for_all_services.find(root);
    auto end_it = Hateoas::endpoints_for_all_services.end();

    if (service_pos_it != end_it) {
        service_pos_it->second.push_back(
                std::move(leaf_endpoint)
                );
    } else {
        spdlog::get("polycubed")->trace(
                "Hateoas - add_leaf_endpoint - root_endpoint not found!"
                );
    }

}