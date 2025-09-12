/*Q17: Write a program to find the roots of a quadratic equation and categorize them.
*/

#include <stdio.h>
#include <math.h> 

int main() {
    float a, b, c, D, root1, root2, realPart, imagPart;

    printf("Enter coefficients a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    D = b*b - 4*a*c;

    if (D > 0) {
        root1 = (-b + sqrt(D)) / (2*a);
        root2 = (-b - sqrt(D)) / (2*a);
        printf("Roots are real and distinct:\n");
        printf("Root1 = %f , Root2 = %f\n", root1, root2);
    }
    else if (D == 0) {
        root1 = root2 = -b / (2*a);
        printf("Roots are real and equal:\n");
        printf("Root1 = Root2 = %f\n", root1);
    }
    else {
        realPart = -b / (2*a);
        imagPart = sqrt(-D) / (2*a);
        printf("Roots are imaginary :\n");
        printf("Root1 = %f + %fi\n", realPart, imagPart);
        printf("Root2 = %f - %fi\n", realPart, imagPart);
    }

    return 0;
}
