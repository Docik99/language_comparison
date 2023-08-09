#include <time.h>
#include <printf.h>
#include <stdlib.h>

unsigned long long fibonacci(unsigned long long int n) {
    if (n <= 1) {
        return n;
    } 
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(int argc, char *argv[]) {
    time_t starttime=time(NULL);	
    printf("%llu\n", fibonacci(atoi(argv[1])));
    printf("%dsec\n",time(NULL)-starttime);
}
