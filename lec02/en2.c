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
    int n = 30;
    c_start = clock();
    printf("再帰関数\n");
    printf("F(%d)=%d\n", n, fib(n));
    c_end = clock();
    printf("time:%f\n", (double)(c_end-c_start));

    int num = 1;
    int f;

    printf("while\n");

    c_start = clock();
    int f0 = 0;
    int f1 = 1;
    while(num<n){
        num++;
        f = f0 + f1;
        f0 = f1;
        f1 = f;
    }
    printf("F%d=%d\n",num,f);
    c_end = clock();
    printf("time:%f\n", (double)(c_end-c_start));

    return 0;
}