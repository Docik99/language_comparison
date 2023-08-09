#include <time.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } 
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(void) {
    time_t starttime=time(NULL);	
    printf("%i\n", fibonacci(45));
    printf("%dsec\n",time(NULL)-starttime);
}
