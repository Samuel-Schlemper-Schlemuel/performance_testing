# Comparison between different languages ​​in performance

| Language | Seconds running | % Compared to the biggest | Comparison x |
|----------|-----------------|---------------------------|--------------|
| Python   | 47              | 100.0%                    | 23.5 x       |
| C        | 5               | 10.6%                     | 2.5 x        |
| Rust     | 2               | 4.3%                      | x            |

## Compillation commands
Python --> python3 seePrimes.py
Version --> Python 3.11.11

C --> gcc -o seePrimes seePrimes.c -lm && ./seePrimes
Version --> gcc (SUSE Linux) 14.2.1 20241007 
[revision 4af44f2cf7d281f3e4f3957efce10e8b2ccb2ad3]

Rust --> rustc seePrimes.rs && ./seePrimes
Version --> rustc 1.84.0 (9fc6b4312 2025-01-07)

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

Out of curiosity, the first version of the code, which worked a little 
differently, had C running in half the time of Rust instead of the other way 
around.

### The results can change?
Yes, the results definitely change depending on the system and hardware used to 
run them, and even other circumstances, such as using the device for other tasks 
and simple randomness.

### Do you plan to do more testings?
Yes, I want to add more languages in this page with the time
