echo 'Release build and run'
cd "build"
cmake ".."
cmake --build . --config Debug 
cd Debug 
wc.exe test.txt
pause