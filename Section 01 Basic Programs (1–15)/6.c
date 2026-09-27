/ * 
* Program:Multiplication Numbers 
* Description: Displays Multiplication on the screen.
* Concepts: printf(), main(), basic C syntax 
* /
#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter a and b");
    scanf("%d%d" &a , &b);
    c=a*b;
    printf("Multiplication-%d",c); 
    return 0;
}