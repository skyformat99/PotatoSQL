//
// Created by 屠昊天 on 2018/2/24.
//

#ifndef POTATOSQL_RECORDUNIT_H
#define POTATOSQL_RECORDUNIT_H


#include "../storage/PotatoMap.h"

#define DWORD unsigned long

class RecordUnit {
    PotatoMap<int, DWORD> *data = new PotatoMap<int, DWORD>();

    void set(int index, DWORD *point) {
        data->put(index, *point);
    }
};


#endif //POTATOSQL_RECORDUNIT_H
