#include <stdio.h>
int main(){
    char name, branch, college;
    printf("Enter your name, branch and college");
    scanf("%c %c %c",&name, &branch , &college);
    printf("name-%c, branch-%c , college-%c",name, branch, college);
    return 0;
}