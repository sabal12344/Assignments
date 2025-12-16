#include<stdio.h>

int biconditional (int a, int b){
    if(a==b)
        return 1;
    
    else 

    return 0;
}
int main(){
    printf("A\tB\tA<-->B\n");
    int a = 1, b = 1, count =1;
    while (count<5){
        
        
        if(count%2==1){
            a = (a==1)? 0 : 1;
        }
        b = (b==1) ? 0 : 1;

        printf("%d\t%d\t%d\n",a,b,biconditional(a,b));
        count++;
    }
    

    return 0;
}
