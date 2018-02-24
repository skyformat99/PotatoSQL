//
// Created by 屠昊天 on 2018/2/24.
//

#ifndef POTATOSQL_TABLEUNIT_H
#define POTATOSQL_TABLEUNIT_H

#include "KeyUnit.h"
#include "../storage/PotatoList.h"
#include "SchemaUnit.h"
#include "RecordUnit.h"

class TableUnit {
public:
    PotatoList<int> keys;
    PotatoList<RecordUnit> recoard;
    SchemaUnit schema;
    string name;
};


#endif //POTATOSQL_TABLEUNIT_H
