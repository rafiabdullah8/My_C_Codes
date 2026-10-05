#include<stdio.h>
int main(){
    int i,n,j,k;
    scanf("%d",&n);
   int star=1;
    int space=n-1;
    for(i=1;i<=n;i++)           //for printing line.
    { 
        for(j=1;j<=space;j++)   //for printing spaces
        {
            printf(" ");
        }
        for(k=1;k<=star;k++){   //for printing stars
            printf("* ");
        }
        printf("\n");
        star++;
        space--;
    }
}
