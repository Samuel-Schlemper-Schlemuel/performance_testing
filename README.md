# Comparison between different languages ​​in performance

## Test with END == 5,000,000
| Language         | Seconds running | Comparison x |
|------------------|-----------------|--------------|
| Lua              | 7.112           | 17.692 x     |
| Python           | 15.444          | 38.418 x     |
| C                | 0.402           | x            |
| Rust             | 1.044           | 2.597 x      |
| JavaScript (bun) | 216.368         | 538.229 x    |

The C compilation time was 0.052


The Rust compilation time was 0.151


## Compillation versions
Lua --> Lua 5.4.7  Copyright (C) 1994-2024 Lua.org, PUC-Rio


Python --> Python 3.11.11


C --> gcc (SUSE Linux) 14.2.1 20250220 
[revision 9ffecde121af883b60bbe60d00425036bc873048]


Rust --> rustc 1.84.0 (9fc6b4312 2025-01-07)


JavaScript (bun) --> 1.2.4


## System Details
### Report details
- **Date generated:**                              2025-03-15 21:40:23

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
- **Kernel Version:**                              Linux 6.13.5-1-default


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

### Why bun instead of node to run JS?
Because node was taking a LONG time to run. See past commits to have an idea
