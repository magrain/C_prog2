# include <stdio.h>
# include <stddef.h>

int main(void){
    char c;
    int i;
    double d;

    printf("char:%p - %lx\n", &c, ((long int)(&c+1)-1));
    printf("int:%p - %lx\n", &i, ((long int)(&i+1)-1));
    printf("double:%p - 0x%lx\n", &d, ((long int)(&d+1)-1));

    printf("char:%p - %lx\n", &c, ((long int)&c+sizeof(c)-1));
    printf("int:%p - %lx\n", &i, ((long int)&i+sizeof(i)-1));
    printf("double:%p - %lx\n", &d, ((long int)&d+sizeof(d)-1));

    printf("char:%p - %p\n", &c, ((void *)&c+sizeof(c)-1));
    printf("int:%p - %p\n", &i, ((void *)&i+sizeof(i)-1));
    printf("double:%p - %p\n", &d, ((void *)&d+sizeof(d)-1));

    return 0;
}