#include<stdio.h>//some patterns

int main(){
    char nepal[5]="NEPAL", kathmandu[9]="KATHMANDU";
    int i,m,j,k,space=2;
   

    for(i=0;i<5;i++){
        for(j=0;j<=i;j++){
            printf("%c",nepal[j]);
        }
        printf("\n");
    }
    printf("\n\n");

    for(i=2,m=2;i>=0;i--,m++){
        for(k=1;k<=space;k++){
            printf(" ");
        }
        for(j=i;j<=m;j++){
            printf("%c",nepal[j]);
        }
      
        printf("\n");
        space--;

        
    }
    printf("\n\n");
    space=0;

    for(i=8;i>=0;i-=2){
        for(k=1;k<=space;k++){
            printf(" ");
        }
        for(j=0;j<=i;j++){
            printf("%c",kathmandu[j]);
        }
        printf("\n");
        space++;
    }


   return 0;
   
}
