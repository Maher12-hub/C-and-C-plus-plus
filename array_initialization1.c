#include<stdio.h>
int main(){
int n;
printf("enter the length of the array:");
scanf("%d",&n);
int a[n];
for (int i=0;i<n;i++){
    printf("enter the input for %d index:",i);
    scanf("%d",&a[i]);
}
printf("elements of the array:\n");
for(int i=0;i<n;i++){
        printf("%d\n",a[i]);

}

}
