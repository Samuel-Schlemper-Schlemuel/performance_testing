import time

date_init = time.time()
END = 10000000
primes = [2]

for num in range(3, END, 2):
    prime = True

    for div in primes:
        if div <= num**0.5:
            if num % div == 0:
                prime = False
                break
        else:
            break

    if prime:
        primes.append(num)

date_end = time.time()
print(primes)
print(f'Code end after {round(date_end - date_init)} seconds')

