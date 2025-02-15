#include<stdio.h>//6.3

#include<string.h>

int main(){
    int i=0;
   char word[45],rev[45];//45 is the largest size possible for a english word

   printf("Enter a word :\n");
   scanf("%45s",word);//only 45 characters can be inputted.
   int l = strlen(word)-1;
   while(l>=0){
    rev[i]=word[l];
    l--;
    i++;
   }
   rev[i]='\0';
   l=strlen(word);
   for(i=0;i<l;i++){
    if(word[i]!=rev[i]){
        break;
    }
   }
   if(i!=l) //variable i is the mvp
   printf("%s is not a palindrome.", word);
   else
   printf("%s is a palindrome.",word);

   return 0;
   
}
