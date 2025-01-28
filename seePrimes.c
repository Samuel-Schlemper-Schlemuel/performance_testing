#include <time.h>
#include <stdio.h>

int main(){
    time_t date_init = time(NULL);

    const int END = 1000000;
    int primes[80000] = {2};
    int primes_quantity = 1;

    for (int num = 3; num < END; num += 2){
        int prime = 1;

        for (int i = 0; i < primes_quantity; i++){
            if (num % primes[i] == 0){
                prime = 0;
                break;
            }
        }

        if (prime){
            primes[primes_quantity] = num;
            primes_quantity++;
        }
    }

    time_t date_end = time(NULL);

    printf("[%d", primes[0]);
    for(int i = 1; i < primes_quantity; i++) {
          printf(", %d", primes[i]);
    }
    printf("] \n");

    printf("Code end after %ld seconds\n", date_end - date_init);
    return 0;
}

