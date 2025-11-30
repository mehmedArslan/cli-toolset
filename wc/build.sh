#!/bin/bash

read -p "Enter config [Release (Default) or Debug]: " config
config=${config:-Release} 

if [ "$config" != "Release" ] && [ "$config" != "Debug" ]; then
    echo "invalid choice"
    exit 1
fi

echo "$config Build and Run"

BUILD_DIR="build"

if [ ! -d "$BUILD_DIR" ]; then
    mkdir "$BUILD_DIR"
    echo "Directory $BUILD_DIR created."
fi

cd "$BUILD_DIR"
cmake ..
cmake --build . --config "$config" 
cd Release

./wc.exe test.txt

# cat ../../data/test.txt | ./wc.exe

read