# Navi
![navi-image](https://i.imgur.com/MweGQHK.png)
A collection of convenience functions to make sparse bits of development and testing easier. Not necessarily for use in production code.

## Building

Building is fairly simple:
```bash
#!/bin/sh

if [ ! -d build ]; then
        mkdir build
fi

# Navigate to build
cd build

# Run CMake
cmake ..

# Make
make
```
which should make `libnavi.so` available to you within the `build` folder. `BUILD` in the root directory also contains this script.

## Usage

