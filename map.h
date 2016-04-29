#ifndef __MAP_H__
#define __MAP_H__

#include "tree.h"

//template for key and val
template <class K, class V>
struct Pair {
    K key;
    V val;
    Pair() { }
    Pair(K key) : key(key) { }
    Pair(K key, V val) : key(key), val(val) { }
    //Comparison operations for Pairs so we can make a tree of them
    bool operator==(const Pair<K, V> &rhs) { /* What should we do here? */ }
    bool operator>(const Pair<K, V> &rhs) { /* What about here? */ }
    bool operator<(const Pair<K, V> &rhs) { /* Ooh ooh this one too! */ }
};

//template for key and val
template <class K, class V>
class Map : public Tree<Pair<K, V>> {
    public:
        Map() { } //begin with an empty tree
        V& operator[](const K& key);
};


#include "map.cpp"

#endif //__MAP_H__