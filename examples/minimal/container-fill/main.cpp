#include <iostream>
#include <vector>
#include <string>
#include "../../../include/navi/container.h"

using std::cout;
using std::vector;
using std::string;

int main() {

    //Initialize vector with 10 elements
    vector<int> v(10);

    //Fill a vector with random integers (using type-hinting)
    Navi::fill(v.begin(), v.end(), 0);

    //Print the vector to console
    Navi::write(v.begin(), v.end(), cout);

    //Fill vector with random integers (explicit function calling)
    Navi::fillInt(v.begin(), v.end());
    Navi::write(v.begin(), v.end(), cout);



    //Initialize string vector with 10 elements
    vector<string> s(10);

    //Fill a vector with junk data (using type-hinting)
    Navi::fill(s.begin(), s.end(), string(""));

    //Print the vector to console
    Navi::write(s.begin(), s.end(), cout);

    //Fill vector with random integers (explicit function calling)
    Navi::fillString(s.begin(), s.end());
    Navi::write(s.begin(), s.end(), cout);

}
