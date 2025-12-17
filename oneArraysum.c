#include<stdio.h>
int main(){
    int a[3][4]={{100,200,150,120},{300,250,400,320},{90,80,70,60}};
    int i,j;
    int product =0;
    int day=0;
    for(i=0;i<3;i++){
         int product =0;
        for(j=0;j<4;j++){
            product+=a[i][j];
           
        }
        printf("\nproduct%d:%d\n",i+1,product);
    }
    for(i=0;i<3;i++){
         int day=0;
        for(j=0;j<4;j++){
            day+=a[i][j];
           
        }
         printf("\nday%d:%d\n",j+1,day);
    }
    return 0;

}

