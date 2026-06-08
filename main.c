#include <stdio.h>
#include <stdlib.h>

int main()
{
    float m1, m2, m3, Average, Total;

    printf("Enter The marks of Mathematics(100>=marks>=0)\n:");
    scanf("%f", &m1);
    printf("Enter The marks of Science(100>=marks>=0)\n:");
    scanf("%f", &m2);
    printf("Enter The marks of English(100>=marks>=0)\n:");
    scanf("%f", &m3);

       Total = m1 +  m2 + m3;
       Average = Total / 3.0;

    printf("Your Total is %.2f\n", Total);
    printf("Your Average is %.2f\n", Average);

    if (Average>=80) {
        printf("Your Grade is A\n");

    } else if (Average>=70) {
        printf("Your Grade is B\n");

    } else if (Average>=60) {
        printf("Your Grade is C\n");

    } else if (Average>=50) {
        printf("Your Grade is D\n");

    } else if (Average<=50) {
        printf("Your Grade is F\n");

    }

      if (m1<=40) {
        printf("Result: Fail\n");
      } else if (m2<=40) {
        printf("Result: Fail\n");
      }  else if (m3<=40) {
        printf("Result: Fail\n");
      }
      else {
        printf("Result: Pass\n");
      }

    return 0;
}
