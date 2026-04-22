//FIND THE SUM OF THE SERIES
#include <stdio.h>
int main(){
    int N;
    float sum = 0;
    int i = 1;
    scanf("%d", &N);
    while (i <= N ){
        sum = sum + 1.0/i;
        i++;
    }
    printf("%.2f", sum);
}