#include <stdio.h>
//printing the largest number
int main(){
    int n,largest, temp;
    int arr[100];
    printf("enter the amount of numbers in the array");
    scanf("%d", &n);
    printf("Enter the number: \n"); 
    for (int i = 0; i < n; i++ ){
        scanf("%d", &arr[i]);
    }
    largest = arr[0];
    for(int j = 0; j< n; j++){
        if(largest < arr[j]){
            largest = arr[j];
        }
    }
    printf("%d", largest);

    

}