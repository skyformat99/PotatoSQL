//
// Created by 屠昊天 on 2018/2/24.
//

#ifndef POTATOSQL_POTATOMAP_H
#define POTATOSQL_POTATOMAP_H


#include "PotatoList.h"

template<class K, class V>
class PotatoMap {

    template<class EK, class EV>
    class Entry {
    public:
        EK key;
        EV value;
    };

private:
    PotatoList<Entry<K, V>> *list = new PotatoList<Entry<K, V>>;

public:

    void put(K key, V value);

    void get(K key);
};

template<class K, class V>
void PotatoMap<K, V>::put(K key, V value) {
    auto *entry = new Entry<K, V>();
    entry->key = key;
    entry->value = value;
    list->add(entry);
}

template<class K, class V>
void PotatoMap<K, V>::get(K key) {

}


#endif //POTATOSQL_POTATOMAP_H
