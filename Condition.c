#include <stdio.h>

int main()
{

    float num1, num2, num3;
    float bigger1, bigger2, bigger3;

    printf("Please enter num1: "); scanf("%f", &num1);
    printf("Please enter num2: "); scanf("%f", &num2);
    printf("Please enter num3: "); scanf("%f", &num3);

    if ((num1 > num2) && (num1 > num3))
    {

        bigger1 = num1;

        if (num2 > num3)
        {
            bigger2 = num2;
            bigger3 = num3;
        }
        else
        {
            bigger2 = num3;
            bigger3 = num2;
        }

    }
   else if ((num2 > num1) && (num2 > num3))
   {

       bigger1 = num2;

       if (num1 > num3)
        {
            bigger2 = num1;
            bigger3 = num3;
        }
        else
        {
            bigger2 = num3;
            bigger3 = num1;
        }

   }
   else if ((num3 > num1) && (num3 > num2))
   {

       bigger1 = num3;

       if (num2 > num1)
        {
            bigger2 = num2;
            bigger3 = num1;
        }
        else
        {
            bigger2 = num1;
            bigger3 = num2;
        }

   }

    printf ("Result: %.2f, %.2f, %.2f\n", bigger3, bigger2, bigger1);

    return 0;
    
}
