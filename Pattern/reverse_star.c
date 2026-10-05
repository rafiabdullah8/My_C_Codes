#include<stdio.h>
int main(){
    int i,n;
    scanf("%d",&n);
    int star=n;
    for(i=1;i<=n;i++){
        for(int j=1;j<=star;j++){
            printf("*");
        }
        printf("\n");
        star--;
    }
}
