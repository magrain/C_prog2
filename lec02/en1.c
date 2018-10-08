#include <stdio.h>
#include <unistd.h>
//https://qiita.com/smicle/items/cf48853177e5ffdc574b
int main(void){
    int i;
    for (i=1; i<=50; i++){
        if(i%3==0 && i%5==0){
            printf("aho wan\n");
            sleep(1);
        }else if(i%3==0){
            printf("aho\n");
        }else if(i%5==0){
            printf("wan\n");
        }else{
            printf("%d\n",i);
        }
    }    
    return 0;
}