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

#ifndef POLYCUBE_HATEOAS_H
#define POLYCUBE_HATEOAS_H

#include <string>
#include <map>
#include <list>
#include <iterator>


/*
 * Hateoas is a singleton class that allow to export all enpoints
 * of a service in Polycube.
 * This class can be used to support HATEOAS standard.
 */

class Hateoas {

    /* this map contains all anonymous endpoints for a determinate service
     * the structure is:
     * root_service_endpoint -> list_of_unlabelled_endpoints */
    static std::unordered_map<std::string, std::list<std::string>> endpoints_for_all_services;

    Hateoas(){}

    static std::list<std::string> endpoints_to_attach(const std::string &service_root_endpoint, const std::string &service_name);

    static unsigned int endpoints_to_attach_size(const std::list<std::string> &list_of_endpoints);

public:

    static Hateoas& getInstance() {
        static Hateoas instance;
        return instance;
    }

    Hateoas(Hateoas const&)         = delete;
    void operator=(Hateoas const&)  = delete;

    /* add an entry for the new service in endpoints_for_all_services */
    static void add_service_root_rest_endpoint(const std::string &root_rest_endpoint);

    /* add a leaf endpoint for a service */
    static void add_leaf_endpoint(const std::string &root_endpoint, std::string &leaf_endpoint);

    /* add endpoints of a service to the http response */
    static char * add_href(char *response_body, const std::string &service_endpoint, const std::string &service_name);

    /* check if http GET is for a registered root endpoint of a service */
    static bool is_valid_cube_root(const std::string &source, const std::string &cube_name);

};


#endif //POLYCUBE_HATEOAS_H
