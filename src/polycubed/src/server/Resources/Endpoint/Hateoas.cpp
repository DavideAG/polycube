//
// Created by root on 21/02/20.
//

#include "Hateoas.h"


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

