#include<stdio.h>
#include<math.h>
void main()
{
    float weight,height,BMI;
    printf("enter your weight");
    scanf("%f", &weight);
    printf("enter your height");
    scanf("%f", &height);

    if(weight<=0 || height<=0);
    {
        printf("invalid input");
    }
    else
    {
        BMI=weight/pow(height,2);
        printf("your index is = %.2f ", BMI);
        if(BMI<18.5);
        {
            printf("you are underweight");
        }
        else if (BMI >= 18.5 &&  BMI  < 24.9);
        {
            printf("you are healthy");
        }
        else if (BMI >=25 && BMI < 29.9);
        {
            printf("you are overweight");
        }
    }





}
