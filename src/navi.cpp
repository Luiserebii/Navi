#include <string>
#include <sstream>

namespace Navi {


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
