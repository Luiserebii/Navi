# Navi
![navi-image](https://i.imgur.com/MweGQHK.png)

A collection of convenience functions to make sparse bits of development and testing easier. Much like a certain fairy, Navi is intended to make quick things simple. Still in development, and untested. Not necessarily for use in production code.

## Including

A `CMakeLists.txt` file has been added for simple linking with CMake. For more on this, check the `examples/` directory.

## Usage
Using Navi should be fairly simple. A quick example:
```cpp
#include <iostream>
#include <vector>
#include <navi/container.h>

using std::cout;
using std::vector;

int main() {

    //Initialize vector with 10 elements
    vector<int> v(10);

    //Fill a vector with random integers (type-hint by passing an integer in the third parameter)
    Navi::fill(v.begin(), v.end(), 0);

    //Print the vector to console
    Navi::write(v.begin(), v.end(), cout);
}

```
