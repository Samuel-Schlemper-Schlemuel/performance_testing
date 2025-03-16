echo Running in Lua
time lua seePrimes.lua $1
sleep 5

echo
echo
echo Running in Python
time python3 seePrimes.py $1
sleep 5

echo
echo
echo Compiling in C
time gcc -o seePrimes seePrimes.c -lm

echo
echo Running in C
time ./seePrimes $1
sleep 3

echo
echo
echo Compiling in Rust
time rustc seePrimes.rs

echo
echo Running in Rust
time ./seePrimes $1
sleep 3

echo
echo
echo Running in JavaScript
time bun run seePrimes.js $1

echo
echo
echo "Lua version"
lua -v

echo
echo
echo "Python version"
python3 --version

echo
echo
echo "gcc (C) version"
gcc --version

echo
echo
echo "rustc (Rust) version"
rustc --version

echo
echo
echo "bun (JavaScript) version"
bun --version