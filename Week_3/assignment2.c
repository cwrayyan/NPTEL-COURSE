//To find the largest of the 3 numbers from the user
#include <stdio.h>

int main(){
    int n1, n2, n3;

    printf("Enter the 3 numbers: ");

    scanf("%d \n %d \n %d", &n1, &n2, &n3);

    if (n1 >= n2 && n1 >= n3){
        printf("%d is the largest number", n1);
    }
    else if(n2 >= n1 && n2 >= n3){
        printf("%d is the largest number", n2);
    }
    else{
        printf("%d is the largest number", n3);
    }
    return 0;
}