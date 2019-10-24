#include <string>
#include <sstream>

namespace Navi {


/**
 * In the spirit of std::accumulate using type-hinting via
 * the third parameter to determine what to call, we
 * will be doing something similar for fill by taking
 * advantage of this piece of templating.
 *
 * Alternate solution in mind was to use enums; have the
 * user pass a particular one, representing a type, to
 * figure out how to process the rest, for example:
 *
 * fill(v.begin(), v.end(), Navi::INT)
 *
 * Actually, I think I will use the enum solution, and
 * simply keep this for filling a container up with a value
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
 * toString function for all containers
 */
template <class In>
string toString(In begin, In end) {
    stringstream ss;
    while(begin != end) {
        ss << *begin++ << " ";
    }
    ss << endl;
    return ss.str();
}

}
