//
// Created by 屠昊天 on 2018/2/24.
//

#ifndef POTATOSQL_TABLEUNIT_H
#define POTATOSQL_TABLEUNIT_H

#include "KeyUnit.h"
#include "../storage/PotatoList.h"

class TableUnit {
public:
    PotatoList<KeyUnit> keys;
};


#endif //POTATOSQL_TABLEUNIT_H
