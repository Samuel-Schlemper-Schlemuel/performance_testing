date_init = performance.now()
const END = 100000
var primes = [2]


for (let num = 3; num < END; num += 2){
    let prime = true


    for (i in primes){
        div = primes[i]


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

process.stdout.write('[' + primes[0])
for (let i = 1; i < primes.length; i++) {
  process.stdout.write(', ' + primes[i])
}
console.log(']')

date_end = performance.now()
console.log(`Code end after ${Math.round((date_end - date_init))/1000} seconds`)
