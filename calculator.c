#include<stdio.h>
int main()
{
    int operand1, operand2;
    char operation;
    printf("Choose your operation: \n");
    scanf("%c", &operation);
    int choice;

    switch(operation)
    {
        case '+':
        {
            int result;
            result = operand1 + operand2;
            printf("Enter operand1: \n");
            scanf("%d", &operand1);
            printf("Enter operand2: \n");
            scanf("%d", &operand2);
            printf("The result is %d", result);
            break;
        }

        case '-':
        {
            int result;
            printf("Enter operand1: \n");
            scanf("%d", &operand1);
            printf("Enter operand2: \n");
            scanf("%d", &operand2);
            if(operand1>operand2)
            {
                result = operand1 - operand2;
                printf("The result is %d", result);
            }
            else
            {
                result = operand2 - operand1;
                printf("The result is %d", result);
            }
            break;
        }

        case '*':
        {
            int result;
            printf("Enter operand1: \n");
            scanf("%d", &operand1);
            printf("Enter operand2: \n");
            scanf("%d", &operand2);
            result = operand1 * operand2;
            printf("The result is %d", &result);
            break;
        }

        case '/':
        {
            int result;
            printf("Enter operand1: \n");
            scanf("%d", &operand1);
            printf("Enter operand2: \n");
            scanf("%d", &operand2);
            if(operand2!=0)
            {
                result = operand1/operand2;
                printf("The result is %d", &result);
            }
            else
            {
                printf("Invalid operation");
            }
            break;
        }
        default:
        printf("Invalid operation");
    }
    return 0;
}