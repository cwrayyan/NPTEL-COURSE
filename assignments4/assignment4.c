//Write a C Program to delete duplicate elements from an array of integers

#include <stdio.h>
int main(){
    printf("Enter the number of elements in the array: \n");
    int n;
    scanf("%d", &n);
    int arr[n];
    printf("Enter n elements for the array: \n");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for(int j = 0; j < n; j++){
        for(int k = 1; k < n; k++){
            if(arr[j] == arr[j + k]){
                arr[] = arr[] - arr[j+k];
            }
        }
    }
}