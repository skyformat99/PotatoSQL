//
// Created by 屠昊天 on 2018/2/24.
//

#include "JsonParser.h"
#include "../unit/KeyUnit.h"

void JsonParser::execute(string command) {
    cJSON *json = cJSON_Parse(command.data());
    string type = cJSON_GetObjectItem(json, "type")->valuestring;
    if (type == "create_table") {
        forCreateTable(json);
    }
}

void JsonParser::forCreateTable(cJSON *json) {
    string name = cJSON_GetObjectItem(json, "name")->string;
    cJSON *slots = cJSON_GetObjectItem(json, "slots");
    int column = cJSON_GetArraySize(slots);
    while (column--) {
        cJSON *slot = cJSON_GetArrayItem(slots, column);
        KeyType type = static_cast<KeyType>(cJSON_GetObjectItem(slot, "type")->valueint);
        string slot_name = cJSON_GetObjectItem(slot, "name")->string;
        KeyUnit *ku = new KeyUnit(slot_name, type);
    }
}
