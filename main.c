#include <stdio.h>
#include <math.h>
void pythagoras_hypotenuse(double AB,double AC){
    double hypotenuse;
    hypotenuse = sqrt(pow(AB,2)+pow(AC,2));
    printf("\nThe length of the hypotenuse BC is %lf cm\n",hypotenuse);
}
void pythagoras_side(double BC,double AC,double AB,int mode){
    
    switch (mode)
    {
    case 1:
        AB = sqrt(pow(BC,2)-pow(AC,2));
        printf("\nThe length of AB is %lf cm\n",AB);
        break;
    
    case 2:
        AC = sqrt(pow(BC,2)-pow(AB,2));
        printf("\nThe length of AC is %lf cm\n",AC);
        break;
    }
}
void reciprocal_pythagoras(double BC,double AC,double AB){
    if(pow(AB,2) + pow(AC,2) == pow(BC,2)){
        printf("\nThe triange ABC is right-angled");
    }else{
        printf("\nThe triangle ABC isn't right-angled");
    }
}
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
    
    int mode;
    char operand;
    printf("Welcome,\nSelect mode:\n-1 for theorem of pythagoras\n-2 for basic calculator\n-3 for theorem of thales\n\nMode:");
    scanf("%d",&mode);

    switch (mode)
    {
    case 1:

        double AB = 0;
        double AC = 0;
        double BC = 0;
        mode = 0;
        printf("B");
        for(int i = 0;i<=5;i++){
            for(int d = 0;d<i;d++){
                printf("*");
            }
            printf("\n");
        }
        printf("A    C\n");
        printf("\n");
        printf("Do you want to calculate:\n-1 for the theorem of pythagoras\n-2 for the theorem of pythagoras to calculate AC or AB\n-3 for the reciprocal pythagoras\n\nMode:");
        scanf("%d",&mode);
        switch (mode)
        {
        case 1:
            printf("\nEnter the value of AB:");
            scanf("%lf",&AB);
            printf("Enter the value of AC:");
            scanf("%lf",&AC);
            pythagoras_hypotenuse(AB,AC);
            break;
        
        case 2:
            mode = 0;
            printf("Do you want to calculate:\n-1 for the length of AB\n-2 for length of AC\n\nMode:");
            scanf("%d",&mode);
            switch (mode)
            {
            case 1:
                printf("\nEnter the value of BC:");
                scanf("%lf",&BC);
                printf("\nEnter the value of AC:");
                scanf("%lf",&AC);
                break;
            
            case 2:
                printf("\nEnter the value of BC:");
                scanf("%lf",&BC);
                printf("\nEnter the value of AB:");
                scanf("%lf",&AB);
                break;
            }
            pythagoras_side(BC,AC,AB,mode);
            break;
        
        case 3:
            printf("\nEnter the value of BC:");
            scanf("%lf",&BC);
            printf("\nEnter the value of AC:");
            scanf("%lf",&AC);
            printf("\nEnter the value of AB:");
            scanf("%lf",&AB);
            reciprocal_pythagoras(AB,AC,BC);
        }
        
        break;
    case 2:
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
        break;
    }
}
