//
// Created by 屠昊天 on 2018/2/24.
//

#include "PotatoList.h"

template<class T>
void PotatoList<T>::add(T *obj) {
    auto *node = new Node<T>();
    node->data = obj;
    if (top == nullptr) {
        top = node;
    } else {
        Node<T> *tmp = top;
        while (tmp->next != nullptr) {
            tmp = tmp->next;
        }
        tmp->next = node;
    }
}

template<class T>
void PotatoList<T>::remove(int index) {
    int count = 0;
    Node<T> *tmp = top;
    while (tmp) {
        if (index == count) {

        }
        tmp = tmp->next;
        count++;
    }
}

template<class T>
bool PotatoList<T>::empty() {
    return top != nullptr;
}

template<class T>
T PotatoList<T>::get(int index) {
    int count = 0;
    Node<T> *tmp = top;
    while (tmp) {
        if (index == count) {
            return tmp->data;
        }
        tmp = tmp->next;
        count++;
    }
    return nullptr;
}

template<class T>
void PotatoList<T>::insert(int index, T *obj) {

}



