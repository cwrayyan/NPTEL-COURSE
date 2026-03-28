//Find the factorial of the given number
#include <stdio.h>

int main(){
    int num, fact;
    int i, temp;
    printf("Enter the number: ");
    scanf("%d", &num);
    fact = 1;
    for(i = 1; i <= num; i++){
        temp = fact * i;
        fact = temp;
        
    }
    printf("%d", fact);
}