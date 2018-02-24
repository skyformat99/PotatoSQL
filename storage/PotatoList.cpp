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
    Node<T> *last = nullptr;
    if (index == 0) {
        top = top->next;
    }
    while (tmp) {
        if (index == count) {
            last->next = tmp->next;
        }
        last = tmp;
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
    Node<T> *tmp = get(index);
    auto *node = new Node<T>();
    node->data = obj;
    node->next = tmp->next;
    tmp->next = node;
}

template<class T>
int PotatoList<T>::size() {
    Node<T> *tmp = top;
    int count = 0;
    while (tmp) {
        count++;
        tmp = tmp->next;
    }
    return count;
}

template<class T>
void PotatoList<T>::set(int index, T *obj) {
    Node<T> *node = get(index);
    if (node != nullptr) {
        node->data = obj;
    }
}

template<class T>
Iterator<T> PotatoList<T>::iterator() {
    return Iterator<T>(top);
}



