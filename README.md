# Comparison between different languages ​​in performance

## Test with END == 10,000,000
| Language   | Seconds running | % Compared to the biggest | Comparison x |
|------------|-----------------|---------------------------|--------------|
| Python     | 42.968          | 100.0                     | 28.974 x     |
| C          | 1.483           | 3.451                     | x            |
| Rust       | 2.482           | 5.776                     | 1.677 x      |


## Test with END == 100,000

| Language   | Seconds running | % Compared to the biggest | Comparison x |
|------------|-----------------|---------------------------|--------------|
| Python     | 0.118           | 4.599                     | 14.75 x      |
| C          | 0.008           | 0.312                     | x            |
| Rust       | 0.011           | 0.429                     | 1.375 x      |
| JavaScript | 2.566           | 100.0                     | 320.75 x     |


## Compillation commands
Python --> python3 seePrimes.py

Version --> Python 3.11.11


C --> gcc -o seePrimes seePrimes.c -lm && ./seePrimes

Version --> gcc (SUSE Linux) 14.2.1 20241007 
[revision 4af44f2cf7d281f3e4f3957efce10e8b2ccb2ad3]


Rust --> rustc seePrimes.rs && ./seePrimes

Version --> rustc 1.84.0 (9fc6b4312 2025-01-07)


JavaScript --> node seePrimes.js

Version --> 22.13.1


## System Details
### Report details
- **Date generated:**                     2025-01-28 13:37:40

### Hardware Information:
- **Hardware Model:**                     Acer Aspire A315-56
- **Memory:**                             8.0 GiB
- **Processor:**                          Intel® Core™ i3-1005G1 × 4
- **Graphics:**                           Intel® UHD Graphics (ICL GT1)
- **Disk Capacity:**                      512.1 GB

### Software Information:
- **Firmware Version:**                   V1.27
- **OS Name:**                            openSUSE Tumbleweed
- **OS Build:**                           (null)
- **OS Type:**                            64-bit
- **GNOME Version:**                      47
- **Windowing System:**                   Wayland
- **Kernel Version:**                     Linux 6.13.0-1-default

## FAQ
### This is the best form of make different languages comparison?
Definitely not, but it is interesting for practical purposes and easy viewing.

### The results can change?
Yes, the results definitely change depending on the system and hardware used to 
run them, and even other circumstances, such as using the device for other tasks 
and simple randomness. In my tests, the higher the END, the lower the ratio 
between the standard variation and the result.


Out of curiosity, as stated below, when I tested the JS with END == 10,000,000 
it ran for 4 hours without returning a result (I stopped the code in the middle 
because of the delay), on the other hand, if we use the END == 100,000 table it 
should have finished in 8 minutes.

### Do you plan to do more testings?
Yes, I want to add more languages in this page with the time

### Why JS was not tested in the END == 10,000,000?
Because it takes 4 hours running in my computer and don't finished, so I create
a lower test for it.
