import math

END = 250000
primes = [2]

for num in range(3, END, 2):
    prime = True

    for div in primes:
        if div <= math.sqrt(num):
            if num % div == 0:
                prime = False
                break
        else:
            break

    if prime:
        primes.append(num)

print(primes)

