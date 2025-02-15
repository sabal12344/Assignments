#include<stdio.h>//sorting countries name in alphabetical order
#include<string.h>
#include<ctype.h>

int main(){
    unsigned int i,j,k;
    char temp[25],country[5][40];
    printf("Enter any 5 countries :\n");
    for(i=0;i<5;i++){
    fgets(country[i],sizeof(country[i]),stdin);//includes countries with more than one word
    country[i][strcspn(country[i], "\n")] = '\0';  // Removes newline
    for(j=0;j<strlen(country[i]);j++)
        country[i][j]=tolower(country[i][j]);   
    
}


    for(i=0;i<5;i++){
        for(j=i+1;j<4;j++){
            for(k=0;k<=40;k++){
            
            if(country[i][k]>country[j][k]){//lets avoid using strcmp for no reason
                strcpy(temp,country[j]);
                strcpy(country[j],country[i]);
                strcpy(country[i],temp);

                

            }
            if(country[i][k]!=country[j][k]){
                break;
            }
        }
           
        }
    }

    printf("\n\n\nArranging the countries in alphabetical order :\n\n\n");
    for(i=0;i<5;i++){
        printf("%s\n",country[i]);
    }
    return 0;
}
