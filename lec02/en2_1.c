# include <stdio.h>
# include <time.h>

int fib(int n){
    switch(n){
        case 0: return 0;
        case 1: return 1;
        default: return fib(n-2)+fib(n-1);
    }
}

int main(void){
    clock_t c_start, c_end;
    int n = 10;
    c_start = clock();
    printf("F(%d)=%d\n", n, fib(n));
    c_end = clock();
    printf("time:%f\n", (double)(c_end-c_start));
    return 0;
}