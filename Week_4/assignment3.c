//sum of numbers from 1 to N
#include <stdio.h>

int main(){
    int sum, n, i;
    i = 1;
    sum = 0;
    printf("Enter your number");
    scanf("%d", &n);
    while(i<=n){
        if(i % 2 == 0){
            sum = sum + i;
        }
        i++;
    }
    printf("sum = %d", sum);

}