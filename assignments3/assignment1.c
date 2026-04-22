//Count the number of number in number

#include <stdio.h>
int main(){
    int n, count = 0, temp;
    printf("Enter the number: ");
    scanf("%d", &n);
    temp = n;
    while (temp != 0){
        count++;
        temp /= 10;
    }
    printf("the number of digits is %d", count);