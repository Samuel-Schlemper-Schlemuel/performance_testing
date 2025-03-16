#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argv, char **argc){
    int end_see_primes = atoi(argc[1]);

    int primes[1000000] = {2};
    int primes_quantity = 1;

    for (int num = 3; num < end_see_primes; num += 2){
        int prime = 1;

        for (int i = 0; i < primes_quantity; i++){
            if (primes[i] <= sqrt(num)){
              if (num % primes[i] == 0){
                  prime = 0;
                  break;
              }
            } else {
                break;
            }
        }

        if (prime){
            primes[primes_quantity] = num;
            primes_quantity++;
        }
    }

    printf("%d\n", primes[primes_quantity - 1]);

    return 0;
}

