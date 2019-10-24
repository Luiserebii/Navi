#include <string>
#include <sstream>
#include <cstdlib>
#include <iostream>

namespace Navi {

enum class Type { INT, STRING }

/**
 * In the spirit of std::accumulate using type-hinting via
 * the third parameter to determine what to call, we
 * will be doing something similar for fill by taking
 * advantage of this piece of templating.
 *
 * Simply keep this for filling a container up with a value
 *
 * Ahhhh! An alternate solution could be to have a user pass
 * a function in, maybe... let's keep it simple
 */
template <class Out> 
Out fill(Out begin, Out end, T val) {
    while(begin != end) {
        *begin++ = val;
    }
    return begin;
}
/**
 * Alternate solution in mind was to use enums; have the
 * user pass a particular one, representing a type, to
 * figure out how to process the rest, for example:
 *
 * fill(v.begin(), v.end(), Navi::INT)
 */
template <class Out>
Out fill(Out begin, Out end, Type t) {
    if(t == Type::INT) {
        return fillInt(begin, end);
    } else if(t == Type::STRING) {
        return fillString(begin, end);
    }
}

template <class Out>
Out fillInt(Out begin, Out end, int lim = 100) {
    while(begin != end) {
        *begin++ = std::rand() % lim;
    }
    return begin;
}

template <class Out>
Out fillString(Out begin, Out end) {
    while(begin != end) {
        *begin++ = "abcdefghi";
    }
    return begin;
}

/**
 * I/O for containers
 */
//Returns place where stopped reading into iterator
template <class Out>
Out read(Out begin, Out end, istream& in) {
    while(begin != end) {
        in >> *begin++;
    }
    in.clear();
    return begin;
}


/**
 * toString function for all containers
 */
template <class In>
std::string toString(In begin, In end) {
    std::stringstream ss;
    while(begin != end) {
        ss << *begin++ << " ";
    }
    ss << endl;
    return ss.str();
}

}
