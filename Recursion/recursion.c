#include<stdio.h>
void hello(){
    printf("hello\n");
    gello();
}
void gello(){
    printf("gello\n");
    mello();
}
void mello(){
    printf("mello\n");
}
int main(){
    printf("Hi\n");
    hello();
}
