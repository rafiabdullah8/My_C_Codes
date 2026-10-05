//String Initialization

#include<stdio.h>
int main(){
    char s[25]="Abdullah R Rafi";
    printf("%s",s);
}

//String input
#include<stdio.h>
int main(){
    char s[20];
    scanf("%c",&s);
    printf("%s",s);
}

//String Gets

#include<stdio.h>
int main(){
    char s[7];
    fgets(s,7,stdin);
    printf("%s",s);
}
