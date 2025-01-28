use std::time::Instant;

fn main() {
    let init = Instant::now();
    const END: i32 = 1000000;
    let mut primes: [i32; 80000] = [0; 80000];
    primes[0] = 2;
    let mut primes_quantity = 1;

    let mut num = 3;

    while num < END {
        let mut prime = true;

        for i in 0..primes_quantity {
            if num % primes[i] == 0 {
                prime = false;
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

    print!("Code end after {:?} seconds\n", init.elapsed().as_secs());
}

