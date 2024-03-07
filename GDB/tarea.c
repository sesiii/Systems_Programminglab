// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int x1, y1, x2, y2, x3, y3;
//     double area;

//     printf("Program to calculate the area of a triangle with integer coordinates\n");

//     printf("Enter the coordinates of the first corner: 3 8 ");
//     // scanf("%d%d", &x1, &y1);
//     x1= 3;
//     y1=8;

//     printf("Enter the coordinates of the second corner: 6 -7");
//     // scanf("%d%d", &x2, &y2);
//     x2=6;
//     y2=-7;

//     printf("Enter the coordinates of the third corner: -1 5");
//     // scanf("%d%d", &x3, &y3);
//     x3=-1;
//     y3=5;

//     int a=9;
//     int b=8;
//     int c=7;
//     int d=6;

//     area = x1 * (y2 - y3);
//     area += x2 * (y1 - y3);
//     area += x3 * (y1 - y2);
//     if (area < 0)
//         area = -area;
//     area /= 2;

//     int e=5;

//     printf("Area of the triangle is %lf\n", area);

//     exit(0);
// }

#include <stdio.h>
#include <stdlib.h>
double tarea(int x1, int y1, int x2, int y2, int x3, int y3)
{
    double area;
    area = x1 * (y2 - y3);
    area += x2 * (y1 - y3);
    area += x3 * (y1 - y2);
    if (area < 0)
        area = -area;
    area /= 2;
    return area;
}
int main()
{
    int x1, y1, x2, y2, x3, y3;
    double area;
    // printf("Program to calculate the area of a triangle with integer coordinates\n");
    // printf("Enter the coordinates of the first corner: 3 8");
    // scanf("%d%d", &x1, &y1);
    x1= 3;
    y1=8;

    // printf("Enter the coordinates of the second corner: 6 -7");
    // scanf("%d%d", &x2, &y2);
    x2=6;
    y2=-7;
    // printf("Enter the coordinates of the third corner: -1 5");
    // scanf("%d%d", &x3, &y3);
    x3=-1;
    y3=5;

    area = tarea(x1, y1, x2, y2, x3, y3);
    printf("Area of the triangle is %lf\n", area);
    exit(0);
}