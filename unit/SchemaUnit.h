//
// Created by 屠昊天 on 2018/2/24.
//

#ifndef POTATOSQL_CHEMAUNIT_H
#define POTATOSQL_CHEMAUNIT_H

#include <string>
#include "KeyUnit.h"
#include "../storage/PotatoList.h"

class SchemaUnit {
public:
    string name;
    PotatoList<KeyUnit> keys;

public:
    void setKey(int index, KeyUnit *key);
};


#endif //POTATOSQL_CHEMAUNIT_H
