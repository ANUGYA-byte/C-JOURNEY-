/ * 
* Program:Print Your Name
* Description: Displays Your Name on the screen.
* Concepts: printf(), main(), basic C syntax 
* /
#include <stdio.h>
int main(){
    char name;
    printf("Enter Your Name/n");
    scanf("%c",&name);  
    printf("Your Name-%c",name); 
    return 0;
}
