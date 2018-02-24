//
// Created by 屠昊天 on 2018/2/24.
//

#ifndef POTATOSQL_ITERATION_H
#define POTATOSQL_ITERATION_H

template<class T>
struct Node {
    T *data;
    Node *next;
};

template<class T>
class Iterator {
private:
    Node<T> *node;
public:

    explicit Iterator(Node<T> *node);

    bool hasNext();

    T next();

};


#endif //POTATOSQL_ITERATION_H
