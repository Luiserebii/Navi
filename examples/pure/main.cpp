#include <iostream>
#include <vector>
#include "../../include/navi/container.h"

using std::cout;
using std::vector;

int main() {

    vector<int> v;

    //Fill a vector with random integers
    Navi::fill(v.begin(), v.end(), Navi::Type::INT);

    //Print the vector to console
    Navi::write(v.begin(), v.end(), cout);
}
