const END = 5000000
var primes = [2]

for (let num = 3; num < END; num += 2){
    let prime = true

    for (let i in primes){
        let div = primes[i]

        if (div <= Math.sqrt(num)){
            if (num % div == 0){
                prime = false
                break
            }
        } else {
            break
        }
    }

    if (prime){
        primes.push(num)
    }
}

console.log(primes[primes.length - 1])

