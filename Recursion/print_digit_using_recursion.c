#include<stdio.h>
void recursion(int n){
int last=n%10;
if(n==0){
    return;
}
recursion(n/10);
printf("%d ",last);

}
int main(){
    int t,n;      
    scanf("%d",&t);               //taking input for test cases,
    for(int i=0;i<t;i++){      
       
        scanf("%d",&n);
       recursion(n);
       if(n==0){
        printf("0");
       }
    printf("\n");
    }
     
    return 0;
}
