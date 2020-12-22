#include<stdio.h>
int main(){
int a[2][3];
int *p;

for(int i=0;i<2;i++){
    printf("enter the elements of the array:\n");
    for(int j=0;j<3;j++){

        scanf("%d",&a[i][j]);
    }
}
for(p=&a[0][0];p<=&a[1][2];p++){
    printf("%d\n",*p);
}

}
