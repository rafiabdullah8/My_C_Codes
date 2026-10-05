//1
#include<stdio.h>
 void fun(int x){
  x=20;
 }
 int main(){
     int x=10;
     fun(x);
     printf("%d\n",x);
     printf("%p",&x);
 }


//2
#include<stdio.h>
int main(){
    int ary[4]={1,2,3,4};
    int *p;
    p=ary+3;
    *p=5;
    printf("%d\n",ary[3]);
}
