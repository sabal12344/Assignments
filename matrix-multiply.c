#include<stdio.h>//4.5
int main(){
    int r1,c1,r2,c2,i,j;
   printf("Enter number of rows and columns of the 1st matrix : ");
   scanf("%d%d",&r1,&c1);
   r2=c1;
   printf("Number of columns of 2nd matrix : ");
//rows of 2nd matrix must be = column of 1st matrix to multiply
scanf("%d",&c2);
   int m1[r1][c1],m2[r2][c2],p[r1][c2];
   printf("Enter the elements of the 1st matrix:\n");
   for(i=0;i<r1;i++){
      for(j=0;j<c1;j++){
         scanf("%d",&m1[i][j]);
      }
   }
   printf("\nNow enter the elements of the 2nd matrix:\n");
   for(i=0;i<r2;i++){
      for(j=0;j<c2;j++){
         scanf("%d",&m2[i][j]);
         
      }
   }
   for(i=0;i<r1;i++){
      for(j=0;j<c2;j++){
        p[i][j]=0;
         for(int k=0;k<c1;k++){
            p[i][j]=p[i][j]+m1[i][k]*m2[k][j];

         }
         
      }
   }
   printf("\n\n\nTheProduct is:\n");
   for(i=0;i<r1;i++){
      for(j=0;j<c2;j++){
         printf("%d ",p[i][j]);
         
      }
     printf("\n");
   }
   return 0;

}
