echo 'Release build and run'
cd build
cmake ..
cmake --build . --config Release
cd Release
wc.exe -w test.txt