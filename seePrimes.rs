use std::time::SystemTime;

fn main() {
    let date_init = SystemTime::now();
    const END: i32 = 10000000;

    // The size is always END / 10
    let mut primes: [i32; 1000000] = [0; 1000000];
    primes[0] = 2;
    let mut primes_quantity = 1;

    let mut num = 3;

    while num < END {
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

    print!("[{}", primes[0]);
    for i in 1..primes_quantity {
          print!(", {}", primes[i]);
    }
    print!("] \n");

    let date_end = SystemTime::now();

    let interval = date_end.duration_since(date_init).unwrap();

    print!("Code end after {:.3} seconds\n", interval.as_secs_f64());
}

