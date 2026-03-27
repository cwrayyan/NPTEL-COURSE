//check if a number is positive, negative or zero
#include <stdio.h>

int main(){
    float num;
    printf("Enter a number to check whether it is positive, negative or zero: ");
    scanf("%f", &num);

    if (num > 0){
        printf("Positive Number.");
    }
    else if(num < 0){
        printf("Negative Number.");
    }
    else{
        printf("The Number is 0.");
    }

    return 0;
}