# Navi
![navi-image](https://i.imgur.com/MweGQHK.png)

A collection of convenience functions to make sparse bits of development and testing easier. Much like a certain fairy, Navi is intended to make quick things simple. Still in development, and untested. Not necessarily for use in production code.

## Building

Building is fairly straightforward:
```bash
#!/bin/sh

if [ ! -d build ]; then
    mkdir build
fi

cd build
cmake ..
make
```
which should make `libnavi.so` available to you within the `build` folder. `BUILD` in the root directory also contains this script.

## Usage
Using Navi should be fairly simple. A quick example:
```cpp
#include <iostream>
#include <vector>
#include "navi/include/container.h"

using std::cout;
using std::vector;

int main() {

    vector<int> v;

    //Fill a vector with random integers
    Navi::fill(v.begin(), v.end(), Navi::Type::INT);

    //Print the vector to console
    Navi::write(v.begin(), v.end(), cout);
}

```
