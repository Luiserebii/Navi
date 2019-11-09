#ifndef GUARD_LUISEREBII_Navi_vector_h
#define GUARD_LUISEREBII_Navi_vector_h

#include <string>
#include <sstream>
#include <cstdlib>
#include <iostream>
#include <vector>

namespace Navi {

//Vector-specific:
template <class T>
std::istream& read(std::vector<T>&v, std::istream& in) {
    T element;
    while(in >> element) {
        v.push_back(element);
    }

    //Clear any flags/errors post-EOF/other error
    in.clear();
    return in;
}

inline void fill(std::vector<int>& v, std::vector<int>::size_type size = 10, int lim = 100) {
    for(std::vector<int>::size_type i = 0; i < size; ++i) {
        v.push_back(std::rand() % lim);
    }
}

#endif
