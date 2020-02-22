//
// Created by root on 21/02/20.
//

#include <spdlog/spdlog.h>
#include "Hateoas.h"

//TODO: debugger->  spdlog::get("polycubed")->info("loading {0} shared object", name_);

std::unordered_map<std::string, std::list<std::string>> Hateoas::endpoints_for_all_services;

bool Hateoas::is_valid_cube_root(const std::string source, const std::string cube_name) {
    return true;
}


void Hateoas::add_href() {
    //TODO: qui bisogna aggiungere gli href al jason.
    //TODO: cambiare i parametri e val di ritorno di questa funzione in modo da modificare opportunamente il json
    /*
    nlohmann::json val = errors[0].message;

    //char * c = strdup("ciao");
    char * links = strdup("ciao");

    char * c ;
    if ((c = static_cast<char *>(malloc(strlen(errors[0].message) + strlen(links) + 1))) != NULL){
         c[0] = '\0';
        strcat(c,errors[0].message);
        strcat(c,links);
    } else {
        logger->info("error at malloc");
        // exit?
    }

    errors[0].message = c;

    logger->info(val);
    */
}


void Hateoas::add_service_root_rest_endpoint(std::string root_rest_endpoint) {
    auto itr = Hateoas::endpoints_for_all_services.find(root_rest_endpoint);
    auto end = Hateoas::endpoints_for_all_services.end();

    if (itr == end) {
        Hateoas::endpoints_for_all_services.insert(
                std::pair(root_rest_endpoint, std::list<std::string>())
        );
    }

    //TODO: ricorda di rimuovere questa parte in basso, è solo per debug
    spdlog::get("polycubed")->info("\n\n");
    for (auto it = Hateoas::endpoints_for_all_services.begin(); it != Hateoas::endpoints_for_all_services.end(); ++it)
        spdlog::get("polycubed")->info("{0}", it->first);
    spdlog::get("polycubed")->info("\n");

}

