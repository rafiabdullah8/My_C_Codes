#include<stdio.h>
int sum(){
    int a,b;
    scanf("%d %d",&a,&b);
    int val=a+b;
    return val;
}
int main(){
int total=sum();
printf("%d",total);
}
