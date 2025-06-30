# Comparison between different languages ​​in performance

## Test with END == 5,000,000
| Language                     | Seconds running | Comparison x |
|------------------------------|-----------------|--------------|
| Lua                          | 6.90            | 31.36 x      |
| Python                       | 14.51           | 65.95 x      |
| C                            | 0.37            | 1.68 x       |
| Rust (rustc)                 | 1.05            | 4.77 x       |
| Rust (cargo build --release) | 0.22            | x            |
| JavaScript (bun)             | 218.88          | 994.91 x     |

The C compilation time was 0.04

The Rust (rustc) compilation time was 0.16

The Rust (cargo) compilation time was 0.04

## Compillation versions
Lua --> Lua 5.4.4  Copyright (C) 1994-2022 Lua.org, PUC-Rio


Python --> Python 3.11.2


C --> gcc (Debian 12.2.0-14+deb12u1) 12.2.0


Rust (rustc) --> rustc 1.87.0 (17067e9ac 2025-05-09)


Rust (cargo) --> cargo 1.87.0 (99624be96 2025-05-06)


JavaScript (bun) --> 1.2.17


## System Details Report

### Report details
- **Date generated:**                              2025-06-29 16:40:44

### Hardware Information:
- **Hardware Model:**                              Acer Aspire A315-56
- **Memory:**                                      8.0 GiB
- **Processor:**                                   Intel® Core™ i3-1005G1 × 4
- **Graphics:**                                    Intel® UHD Graphics (ICL GT1)
- **Disk Capacity:**                               512.1 GB

### Software Information:
- **Firmware Version:**                            V1.27
- **OS Name:**                                     GNOME OS Nightly
- **OS Build:**                                    (null)
- **OS Type:**                                     64-bit
- **GNOME Version:**                               49
- **Windowing System:**                            Wayland
- **Kernel Version:**                              Linux 6.15.2


IMPORTANT NOTE: The run.sh script ran in a Debian GNU/Linux 12 environment 
inside the Ditrobox app.


Note: Power mode was set to balanced

## FAQ
### This is the best form of make different languages comparison?
Definitely not, but it is interesting for practical purposes and easy viewing.

### How time is calculated?
The word time at the beginning of the command tells the Linux kernel to measure 
the execution time and return it in the following format:

real 14.51

user 14.44

sys 0.02

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
