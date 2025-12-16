#include<stdio.h>
#include <conio.h>

int biconditional (int a, int b){
    if(a==b)
        return 1;    
    else 
    return 0;
}
int main(){
    printf("Biconditional truth table\n\n");
    printf("A\tB\tA<-->B\n");

    for(int a = 0; a <=1; a++){
        for (int b = 0 ; b <=1 ; b++){
            printf("%d\t%d\t   %d\n",a,b,biconditional(a,b));
        }
    }      
    
    
printf("\n\nPrinted by Sabal Sigdel");
getch();
    return 0;
}

