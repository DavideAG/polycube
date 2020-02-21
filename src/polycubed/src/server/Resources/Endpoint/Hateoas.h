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

#include <iostream>             //TODO: ricorda di rimuovere iostream quando non ti servira' piu'

/*
 * Hateoas is a singleton class that allow to export all enpoints
 * of a service in Polycube.
 * This class can be used to support HATEOAS standard.
 */

class Hateoas {

    Hateoas() {}

public:

    static Hateoas& getInstance() {
        static Hateoas instance;
        return instance;
    }

    Hateoas(Hateoas const&)         = delete;
    void operator=(Hateoas const&)  = delete;

    static bool is_valid_cube_root(const std::string source, const std::string cube_name);

    static void add_href();

};


#endif //POLYCUBE_HATEOAS_H
