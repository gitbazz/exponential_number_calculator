/* 
* Program to calculate value of exponential numbers 
* Author: Bazillah Zargar
*/
#include <stdio.h>

/* Recursive function
* @base takes positive float value as the base 
* @exponent takes a non-negative integer value as the exponent
* @return a calculated float value for the exponential number */
float calculate(float base, int exponent){
    /* Base case - if exponent is 0 */
    if (exponent == 0){
        return 1;
    }
    /* Base case - if exponent is 1 */
    else if (exponent == 1){
        return base;
    }
    /* If exponent is even */
    else if (exponent % 2 == 0){
        float result = calculate(base, exponent/2);
        return result * result;
    }
    /* If exponent is odd */
    else if (exponent % 2 == 1){
        float result = calculate(base, exponent/2);
        return result * result * base;
    }
}

/* Main method - prompts user to enter a positive float base value and a non-negative ineteger exponent value then displays the result of the exponent calculation */
int main(){
    float base, answer;
    int exponent; 
    
    /* Prompts user to enter a positive float value for the base */
    do {
    printf("Enter a base value that is a positive float number:");
    scanf("%f", &base);
    } while (base <= 0);
    /* Prompts user to enter a non-negative int value for the exponent */
    do {
    printf("Enter an exponent value that is a non-negative integer:");
    scanf("%d", &exponent);
    } while (exponent < 0);

    /* Calculate and display result */
    answer = calculate(base, exponent);
    printf("The result is %f \r\n", answer);
    
    return 0;
}
