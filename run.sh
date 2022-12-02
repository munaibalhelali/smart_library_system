#!/bin/sh
echo "Creating build directory"
mkdir build
cd build 

echo "Running cmake"
cmake ..

echo "Building the system"
make

echo "Executing the system"
./smart_library_system