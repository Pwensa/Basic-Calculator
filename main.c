#include <stdio.h>
#include <math.h>

//Least common divisor
void LCM(double value1,double value2){
    double value1a = value1;
    double value2a = value2;
    double rst = fmod(value1,value2);//rest
    while (rst != 0){
    
        value1 = value2;
        value2 = rst;
        rst = fmod(value1,value2);
        }
    double multiple = value1a * value2a / value2;
    printf("%lf\n", multiple);

}
//Greatest common divisor
void GCD(double value1,double value2){
    double rest = fmod(value1,value2);
    while (rest != 0){
    
        value1 = value2;
        value2 = rest;
        rest = fmod(value1,value2);
        }
    printf("%lf\n",value2);
}
void factorial(double value1){
    double fact = 1;//factorial

    for(int i = 1;i <= value1; i++){
        fact *= i;
    }
    printf("%lf\n",fact);

}

int main(void){
    double value1;
    double value2;
    char operand;

    scanf("%lf %c %lf", &value1,&operand, &value2);
    

    switch (operand)
    {
    case '+':
        printf("%lf\n",value1 + value2);
        break;
    case '-':
        printf("%lf\n",value1 - value2);
        break;
    case '*':
        printf("%lf\n",value1 * value2);
        break;
    case '/':
        printf("%lf\n",value1 / value2);
        break;
    case '%':
        printf("%lf\n",fmod(value1,value2));
        break;
    case '^':
        printf("%lf\n",pow(value1,value2));
        break;
    case '!':
        factorial(value1);
        break;
    case 'g':
        GCD(value1,value2);
        break;
    case 'l':
        LCM(value1,value2);
        break;
    }
}
