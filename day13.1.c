/*Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
*/

#include <stdio.h>

int main()
{
    int a, b, result;
    char op;
    printf("enter a, b and operator :");
    scanf("%d %d %c",&a, &b, &op);

    switch(op)
    {
        case '+':
            result = a+b;
            printf("result is %d\n",result);
            break;

        case '-':
            result = a-b;
            printf("result is %d\n",result);
            break;

        case '*':
            result = a*b;
            printf("result is %d\n",result);
            break;

        case '/':
            result = a/b;
            printf("result is %d\n",result);
            break;

        case '%':
            result = a%b;
            printf("result is %d\n",result);
            break;
    }
    return 0;
}