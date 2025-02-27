#include <stdio.h>
#include <math.h>

int main(){
    const int END = 250000;

    // The size is always END / 10
    int primes[25000] = {2};
    int primes_quantity = 1;

    for (int num = 3; num < END; num += 2){
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

    printf("[%d", primes[0]);
    for(int i = 1; i < primes_quantity; i++) {
          printf(", %d", primes[i]);
    }
    printf("] \n");

    return 0;
}

