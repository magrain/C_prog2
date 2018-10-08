# include <stdio.h>
# include <stddef.h>

int password(char name[]){
    int a, b, c;
    a = (int)name[0] + (int)name[2] + (int)name[4];
    b = a * (int)name[1];
    c = b - (int)name[3];
    printf("%d\n", );
    return (int)(c / (int)name[5]);
}

int main(int argc, char *argv[]){
    int pw;
//    char name[6] = "abcdef";

//    printf("password = %d\n", password(name));
    printf("password = %d\n", password(argv[1]));
    printf("password:");
    scanf("%d", &pw);

    if(password(argv[1])==pw){
        printf("you are logged in\n");
    }else{
        printf("goodbye\n");
    }

    return 0;
}