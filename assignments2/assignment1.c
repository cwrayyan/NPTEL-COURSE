//Check which type of triangle it is
#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter the 3 values");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if (a+b > c){
        if(a == b && b == c){
            printf("Equalateral Triangle");    
        }
        else if(a == b || b ==c || a==c){
            printf("Isoceles Triangle");
        }
        else if(a*a + b*b == c*c || a*a + c*c == b*b || b*b+ c*c == a*a){
            printf("Right angle triangle");
        }
        else{
            printf("Scalene Triangle");
        }    
        }
    
    return 0;
}