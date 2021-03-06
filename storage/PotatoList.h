//
// Created by 屠昊天 on 2018/2/24.
//

#ifndef POTATOSQL_POTATOLIST_H
#define POTATOSQL_POTATOLIST_H

#include "Iterator.h"

template<class T>
class PotatoList {
private:
    Node<T> *top;
public:
    void add(T *obj);

    void insert(int index, T *obj);

    void remove(int index);

    T get(int index);

    bool empty();

    int size();

    void set(int index, T *obj);

    Iterator<T> iterator();
};

#endif //POTATOSQL_POTATOLIST_H
