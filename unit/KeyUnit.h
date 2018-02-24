//
// Created by 屠昊天 on 2018/2/24.
//

#ifndef POTATOSQL_KEYUNIT_H
#define POTATOSQL_KEYUNIT_H

#include <string>

using std::string;

enum KeyType {
    INT = 1,
    BOOLEAN = 2
};

class KeyUnit {
public:
    string name;
    KeyType type;

public:
    KeyUnit(string name, enum KeyType type);
};


#endif //POTATOSQL_KEYUNIT_H
