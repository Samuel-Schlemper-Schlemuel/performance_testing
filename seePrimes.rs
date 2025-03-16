use std::env;

fn main() {
    let args: Vec<String> = env::args().collect();
    let end_see_primes = args[1].parse().unwrap();

    let mut primes: [i32; 1000000] = [0; 1000000];
    primes[0] = 2;
    let mut primes_quantity = 1;

    let mut num = 3;

    while num < end_see_primes {
        let mut prime = true;

        for i in 0..primes_quantity {
            if primes[i] as f32 <= f32::sqrt(num as f32) {
                if num % primes[i] == 0 {
                    prime = false;
                    break;
                }
            } else {
                break;
            }
        }

        if prime {
            primes[primes_quantity] = num;
            primes_quantity += 1;
        }

        num += 2;
    }

    print!("{}\n", primes[primes_quantity - 1]);
}

