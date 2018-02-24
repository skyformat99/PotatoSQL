//
// Created by 屠昊天 on 2018/2/24.
//

#ifndef POTATOSQL_CHEMAUNIT_H
#define POTATOSQL_CHEMAUNIT_H

#include <string>
#include "KeyUnit.h"
#include "../storage/PotatoList.h"
#include "TableUnit.h"

class SchemaUnit {
public:
    string name;
    PotatoList<KeyUnit> keys;
    PotatoList<TableUnit> tables;

public:
    void setKey(int index, KeyUnit *key) {
        keys.set(index, key);
    }

    void addKey(KeyUnit *key) {
        keys.add(key);
    }

    void addTable(TableUnit *table) {
        tables.add(table);
    }
};


#endif //POTATOSQL_CHEMAUNIT_H
