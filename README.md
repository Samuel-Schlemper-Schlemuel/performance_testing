# Comparison between different languages ​​in performance

## Test with END == 10,000,000
| Language   | Seconds running | % Compared to the biggest | Comparison x |
|------------|-----------------|---------------------------|--------------|
| Python     | 43.962          | 100.0                     | 35.37 x      |
| C          | 1.243           | 2.83                      | x            |
| Rust       | 2.344           | 5.33                      | 1.89 x       |

The C compilation time was 0.048
The Rust compilation time was 0.133

## Test with END == 250,000

| Language   | Seconds running | % Compared to the biggest | Comparison x |
|------------|-----------------|---------------------------|--------------|
| Python     | 0.319           | 1.51                      | 9.67 x       |
| C          | 0.033           | 0.17                      | x            |
| Rust       | 0.040           | 0.19                      | 1,21 x       |
| JavaScript | 21.108          | 100.0                     | 639.64 x     |

The C compilation time was 0.047
The Rust compilation time was 0.126

## Compillation commands
Python --> time python3 seePrimes.py

Version --> Python 3.11.11


C --> time gcc -o seePrimes seePrimes.c -lm && time ./seePrimes

Version --> gcc (SUSE Linux) 14.2.1 20241007 
[revision 4af44f2cf7d281f3e4f3957efce10e8b2ccb2ad3]


Rust --> time rustc seePrimes.rs && time ./seePrimes

Version --> rustc 1.84.0 (9fc6b4312 2025-01-07)


JavaScript --> time node seePrimes.js

Version --> v22.13.1


## System Details
### Report details
- **Date generated:**                              2025-02-27 19:25:38

### Hardware Information:
- **Hardware Model:**                              Acer Aspire A315-56
- **Memory:**                                      8.0 GiB
- **Processor:**                                   Intel® Core™ i3-1005G1 × 4
- **Graphics:**                                    Intel® UHD Graphics (ICL GT1)
- **Disk Capacity:**                               512.1 GB

### Software Information:
- **Firmware Version:**                            V1.27
- **OS Name:**                                     openSUSE Tumbleweed
- **OS Build:**                                    (null)
- **OS Type:**                                     64-bit
- **GNOME Version:**                               47
- **Windowing System:**                            Wayland
- **Kernel Version:**                              Linux 6.13.4-1-default


Note: Power mode is set to balanced

## FAQ
### This is the best form of make different languages comparison?
Definitely not, but it is interesting for practical purposes and easy viewing.

### How time is calculated?
The word time at the beginning of the command tells the Linux kernel to measure 
the execution time and return it in the following format:

real	       0m1,178s
user	       0m1,008s
sys	       0m0,026s

I always use the real time. For compiled languages, I include only the running 
process time in the table but note the compilation time below it.

### The results can change?
Yes, the results definitely change depending on the system and hardware used to 
run them, and even other circumstances, such as using the device for other tasks 
and simple randomness. In my tests, the higher the END, the lower the ratio 
between the standard variation and the result.

### Do you plan to do more testings?
Yes, I want to add more languages in this page with the time

### Why JS was not tested in the END == 10,000,000?
Because it takes 4 hours running in my computer and don't finished, so I create
a lower test for it.
