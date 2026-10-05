#include<stdio.h>
void print(int i){
    if(i==1){
        return;
    }
    print(i-1);
    printf("%d",i);
}
int main(){
    print(5);
    return 0;
}
