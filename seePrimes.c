#include <time.h>
#include <stdio.h>
#include <math.h>

int main(){
    struct timespec date_init;
    clock_gettime(CLOCK_REALTIME, &date_init);

    const int END = 10000000;

    // The size is always END / 10
    int primes[1000000] = {2};
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

    struct timespec date_end;
    clock_gettime(CLOCK_REALTIME, &date_end);

    long seconds_interval = date_end.tv_sec - date_init.tv_sec;
    long nseconds_interval = date_end.tv_nsec - date_init.tv_nsec;

    if (nseconds_interval < 0) {
      seconds_interval--;
      nseconds_interval += 1000000000;
    }

    printf("Code end after %ld.%03ld seconds\n",
           seconds_interval, nseconds_interval / 1000000);

    return 0;
}

