/ * 
* Program:Divide two numbers 
* Description: Displays Remainder on the screen.
* Concepts: printf(), main(), basic C syntax 
* /
#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter a and b");
    scanf("%d%d" &a , &b);
    c=a%b;
    printf("Remainder-%d",c); 
    return 0;
}