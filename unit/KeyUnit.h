//
// Created by 屠昊天 on 2018/2/24.
//

#ifndef POTATOSQL_KEYUNIT_H
#define POTATOSQL_KEYUNIT_H

#include <string>

class KeyUnit {
    enum Type {
        INT, BOOLEAN
    };

public:
    string name;
    Type type;

public:
    KeyUnit(string name, enum Type type);
};


#endif //POTATOSQL_KEYUNIT_H
