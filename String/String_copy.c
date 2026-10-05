#include<stdio.h>
#include<string.h>
int main(){
    char c[101];
    char d[101];
    scanf("%s %s",&c, &d);

   int length=strlen(c);
   for(int i=0;i<=length;i++){
    c[i]=d[i];
   }
   printf("%s %s ",c,d);
}
