
#include <stdio.h>

int main()

{   
    int a,b;

    printf("Enter numbers: ");
    scanf(" %d %d", &a, &b);
    if(a>b){
        printf("%d is largest",a);
    }
    else if(a<b){
        printf("%d is largest",b);

    }
    else {
        printf("both numbers are same");
    }  

    return 0;
}
