#include <stdio.h>
#include <math.h>
void PPCM(double valeur1,double valeur2){
    double valeur1a = valeur1;
    double valeur2a = valeur2;
    double rst = fmod(valeur1,valeur2);
    while (rst != 0){
    
        valeur1 = valeur2;
        valeur2 = rst;
        rst = fmod(valeur1,valeur2);
        }
    double multiple = valeur1a * valeur2a / valeur2;
    printf("%lf\n", multiple);

}
void PGCD(double valeur1,double valeur2){
    double rt = fmod(valeur1,valeur2);
    while (rt != 0){
    
        valeur1 = valeur2;
        valeur2 = rt;
        rt = fmod(valeur1,valeur2);
        }
    printf("%lf\n",valeur2);
}
void factorielle(double valeur1){
    double fact = 1;

    for(int i = 1;i <= valeur1; i++){
        fact *= i;
    }
    printf("%lf\n",fact);

}

int main(void){
    double valeur1;
    double valeur2;
    char operande;

    scanf("%lf %c %lf", &valeur1,&operande, &valeur2);
    

    switch (operande)
    {
    case '+':
        printf("%lf\n",valeur1 + valeur2);
        break;
    case '-':
        printf("%lf\n",valeur1 - valeur2);
        break;
    case '*':
        printf("%lf\n",valeur1 * valeur2);
        break;
    case '/':
        printf("%lf\n",valeur1 / valeur2);
        break;
    case '%':
        printf("%lf\n",fmod(valeur1,valeur2));
        break;
    case '^':
        printf("%lf\n",pow(valeur1,valeur2));
        break;
    case '!':
        factorielle(valeur1);
        break;
    case 'g':
        PGCD(valeur1, valeur2);
        break;
    case 'p':
        PPCM(valeur1, valeur2);
        break;
    
    }
    
}