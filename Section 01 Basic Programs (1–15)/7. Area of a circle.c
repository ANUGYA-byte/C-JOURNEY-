
#include <stdio.h>

int main()

{   const float pi =3.141;
    int radius, area;

    printf("Enter radius: ");
    scanf("%d ", &radius);

    area=pi*radius*radius;

    printf("Area of circle%d\n",area);

    return 0;
}
