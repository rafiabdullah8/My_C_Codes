#include<stdio.h>
int main(){
    int r,c;
    scanf("%d %d",&r,&c);
   int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }


    int specific_column;
    scanf("%d",&specific_column);
    for(int i=0;i<r;i++){
        printf("%d ",a[i][specific_column]);
    }
    // for(int j=0;j<specfic_c;j++){
    //     printf("%d ",a[specific_c][i])
    // }
    return 0;
}
