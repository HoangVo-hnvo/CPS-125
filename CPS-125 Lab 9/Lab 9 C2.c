#include <stdio.h>
#include <math.h>
struct strength{
    double p;
    double d;
    double stress;
    double strain;
}a;
void bn(struct strength *b,double p,double d){
    (*b).p = p;
    (*b).d = d;
    (*b).stress = p/((M_PI*d*d)/4.00);
    (*b).strain = (*b).stress/(30.00*pow(10.00,6));
}
void cn(struct strength *b){
    printf("Load: %.2lf",(*b).p);
    printf("\nDiameter: %.2lf",(*b).d);
    printf("\nStress: %.2lf",(*b).stress);
    printf("\nStrain: %.8lf",(*b).strain);
}
int main(){
    double b,c;
    printf("Compression Load? ");
    scanf("%lf",&b);
    printf("\nDiameter? ");
    scanf("%lf",&c);
    bn(&a,b,c);
    cn(&a);
}
