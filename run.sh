echo Running in Lua
time -p lua seePrimes.lua $1
sleep 5

echo
echo
echo Running in Python
time -p python3 seePrimes.py $1
sleep 5

echo
echo
echo Compiling in C
time -p gcc -o seePrimes seePrimes.c -lm

echo
echo Running in C
time -p ./seePrimes $1
sleep 3


echo
echo
echo Compiling in Rust \(cargo\)
cd ./rust_see_primes/
time -p cargo build --release

echo
echo Running in Rust \(cargo\)
time -p ./target/release/rust_see_primes $1
sleep 3


echo
echo
echo Compiling in Rust \(rustc\)
cd ./src
time -p rustc main.rs

echo
echo Running in Rust \(rustc\)
time -p ./main $1
cd ../..
sleep 3


echo
echo
echo Running in JavaScript
time -p bun run seePrimes.js $1

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
echo "Cargo (Rust) version"
cargo --version

echo
echo
echo "bun (JavaScript) version"
bun --version