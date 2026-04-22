//print an array in reverse order
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

    int temp;
  
    for(int j = 0; j < n/2; j++) {
        temp = arr[j];
        arr[j] = arr[n-j-1];
        arr[n-j-1] = temp;

    }

    printf("The new printed array: \n");
    for(int i = 0; i < n; i++){
        printf("%d\n", arr[i]);
    }


}