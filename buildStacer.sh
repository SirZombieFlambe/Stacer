#!/bin/bash

cd ..

rmdir Stacer/build

mkdir Stacer/build

cp -r Stacer/* Stacer/build

cd Stacer/build

cmake -DCMAKE_BUILD_TYPE=Release -DCMAKE_PREFIX_PATH=/home/ubuntu/Qt5.10.0/5.10.0/gcc_64/lib/cmake

make -j $(nproc)

cd output
stacer
