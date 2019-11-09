#include <iostream>
#include <vector>
#include "../../include/navi/container.h"

using std::cout;
using std::vector;

int main() {

    //Initialize vector with 10 elements
    vector<int> v(10);

    //Fill a vector with random integers
    Navi::fill(v.begin(), v.end(), 0);
//    Navi::fillInt(v.begin(), v.end());

    //Print the vector to console
    Navi::write(v.begin(), v.end(), cout);
}
