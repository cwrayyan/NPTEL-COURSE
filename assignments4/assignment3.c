/*Write a C program to read Two One Dimensional Arrays of same data 
type (integer type) and merge them into another One Dimensional 
 Array of same type.*/

#include <stdio.h>
int main(){
    int n1, n2;
    printf("Enter the number of elements in array 1: \n");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter n elements for the array: \n");
    for(int i = 0; i < n1; i++){
        scanf("%d", &arr1[i]);
    }

    printf("Enter the number of elements in array 2: \n");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter n elements for the array: \n");
    for(int j = 0; j < n2; j++){
        scanf("%d", &arr2[j]);
    }

    int n = n1+n2;
    int merged[n];

    for(int k = 0; k < n1; k++){
        merged[k] = arr1[k];
    }

    for(int k = 0; k < n2; k++){
        merged[k+n1] = arr2[k];
    }
    
    printf("The final merged array: \n");
    for(int l = 0; l < n; l++){
        printf("%d \n", merged[l]);
    }


}


