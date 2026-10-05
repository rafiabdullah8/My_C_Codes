#include<stdio.h>
int main(){
    int x=10;
    printf("%d\n",x);

    int* ptr=&x;
    printf("%p",ptr);
}
