#include<stdio.h>
int main(){
printf("[");
int n=6;
int arr[]={10, 20, 30, 40, 50, 60};
for(int j=0; j<3; j++){

    int f=0;
    int s=f+1;
    for (int i=0;i<n; i++){
        arr [f]=arr[s];
        f=f+1%n;
        s=f+1%n;
    }
arr[n-1]=0;

}
for(int i=0; i<n; i++){

    printf("%d\t",arr[i]);}
printf("]");
}
