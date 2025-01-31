#include<stdio.h>//4.5
int main(){
    int r,c,i,j;
   printf("Enter number of rows and columns : ");
   scanf("%d%d",&r,&c);
   int m1[r][c],m2[r][c],p[r][c];
   printf("Enter the elements of the 1st matrix:\n");
   for(i=0;i<r;i++){
      for(j=0;j<c;j++){
         scanf("%d",&m1[i][j]);
      }
   }
   printf("\nNow enter the elements of the 2nd matrix:\n");
   for(i=0;i<r;i++){
      for(j=0;j<c;j++){
         scanf("%d",&m2[i][j]);
         
      }
   }
   for(i=0;i<r;i++){
      for(j=0;j<c;j++){
        p[i][j]=0;
         for(int k=0;k<c;k++){
            p[i][j]=p[i][j]+m1[i][k]*m2[k][j];

         }
         
      }
   }
   printf("\n\n\nTheProduct is:\n");
   for(i=0;i<r;i++){
      for(j=0;j<c;j++){
         printf("%d ",p[i][j]);
         
      }
     printf("\n");
   }
   return 0;

}
