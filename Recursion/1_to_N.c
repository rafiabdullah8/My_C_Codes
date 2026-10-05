#include<stdio.h>
void print(int i){
    printf("%d\n",i);
   
   if(i==6){
        return;
    } print(i+1);
    
}
int main(){
    int i=1;
    print(i);
}
