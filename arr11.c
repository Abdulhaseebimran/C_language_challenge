#include<stdio.h>

void reverse (int arr[], int n);
void printVal (int arr[], int n);

int main () {
    int arr[] = {1,2,3,4,5};
    reverse(arr,5);
    printVal(arr,5);
    return 0;
}

void printVal (int arr[], int n){
    for(int i = 0; i<n; i++){
        printf("%d \t", arr[i]);
    }
    printf("\n");
}

void reverse(int arr[], int n){
     for(int i = 0; i<n/2; i++){
         int firstval = arr[i];
         int secondval = arr[n-i-1];
         arr[i] = secondval;
         arr[n-i-1] = firstval;
     }
}