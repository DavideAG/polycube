//
// Created by root on 09/03/20.
//

#ifndef POLYCUBE_ENDPOINTSTREE_H
#define POLYCUBE_ENDPOINTSTREE_H

#include <string>
#include <functional>
#include <pistache/router.h>

struct node{

    //node name. Is the chunk of the endpoint
    std::string nodeName;

    //function pointers to all hendlers
    //the schema is <method_type> -> <func_pointer> (e.g. "GET" -> pointer_to_get)
    std::unordered_map<std::string,
    std::function<void(const Pistache::Rest::Request &request,
                       Pistache::Http::ResponseWriter response)>> funcpointers;

    //the node type. E.g. "Container" or "Leaf"
    std::string nodeType;

    //metadata that can be stored inside the node
    std::vector<std::string> metadata;
};


class EndpointsTree {

    EndpointsTree(){}

public:

    static EndpointsTree& getInstance() {
        static EndpointsTree instance;
        return instance;
    }

    EndpointsTree(EndpointsTree const&)     = delete;
    void operator=(EndpointsTree const&)    = delete;

    /* TODO: parametri da passare alla nuova funzione per aggiunta di un nodo:
     * - stringa -> pezzo di endpoint (o nome nodo)
     */
    //static void addNode(std::string nodeName, std::string nodeType, std::vector<std::string> metadata, )

};


#endif //POLYCUBE_ENDPOINTSTREE_H
