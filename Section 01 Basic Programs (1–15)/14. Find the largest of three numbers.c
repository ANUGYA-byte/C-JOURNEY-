
#include <stdio.h>

int main()

{   
    int a,b,c;

    printf("Enter numbers: ");
    scanf(" %d %d", &a, &b);
    if(a>b & a>c){
        printf("%d is largest",a);
    }
    else if(a<b & c<b){
        printf("%d is largest",b);

    }
    else if(a<c & b<c){
        printf("%d is largest",c);

    }
    else {
        printf("all numbers are same");
    }  

    return 0;
}
