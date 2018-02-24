//
// Created by 屠昊天 on 2018/2/24.
//

#include "Iterator.h"


template<class T>
Iterator<T>::Iterator(Node<T> *node) {
    this->node = node;
}

template<class T>
bool Iterator<T>::hasNext() {
    return node != nullptr;
}

template<class T>
T Iterator<T>::next() {
    T data = node->data;
    node = node->next;
    return data;
}
