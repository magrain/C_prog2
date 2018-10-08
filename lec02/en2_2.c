# include <stdio.h>
# include <time.h>

int main(void){
    clock_t c_start, c_end;
    int n = 1;
    int f;

    c_start = clock();

    int f0 = 0;
    int f1 = 1;
    //printf("F0=%d\n",f0);
    //printf("F1=%d\n",f1);

    while(n<10000){
        n++;
        f = f0 + f1;
        f0 = f1;
        f1 = f;
    //    printf("F%d=%d\n",n,f);
    }
    printf("F%d=%d\n",n,f);
    c_end = clock();
    printf("time:%f\n", (double)(c_end-c_start));

    return 0;
}