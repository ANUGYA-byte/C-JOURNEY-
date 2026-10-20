
#include <stdio.h>

int main()

{   
    int length,breath, area;

    printf("Enter length and breath: ");
    scanf("%d %d", &length,&breath);

    area=length*breath;

    printf("Area of rectangle-%d\n",area);

    return 0;
}
