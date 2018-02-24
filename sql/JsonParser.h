//
// Created by 屠昊天 on 2018/2/24.
//

#ifndef POTATOSQL_JSONPARSER_H
#define POTATOSQL_JSONPARSER_H

#include <string>
#include "../lib/cJson/cJSON.h"

using namespace std;

class JsonParser {
    void execute(string command);

    void forCreateTable(cJSON *json);

};


#endif //POTATOSQL_JSONPARSER_H
