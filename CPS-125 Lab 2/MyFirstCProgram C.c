#include <stdio.h>;
#include <math.h>;

double roundToHundredths(double);
double roundToThousandths(double);

int main(){
    //Exercise 1
    printf("scanf is inferior to cin>>.\n");
    printf("\nThis isn't my first C Program.\n");
    printf("\nThis\nisn't\nmy\nfirst\nC\nprogram\n");
    //Exercise 2
    printf("\nX O X\nX X O\nO O X\n");
    //Exercise 4
    double a;
    printf("\nPlease enter a real number. ");
    scanf("%lf",&a);
    printf("\nThis is your number rounded to the nearest hundredth: %.0lf",roundToHundredths(a));
    printf("\nThis is your number rounded to the nearest thousandth: %.0lf",roundToThousandths(a));
    printf("\nThis is your number rounded to 1 decimal place: %.1lf\n",a);
    //Exercise 5
    printf("\nLet's calculate the circumference of an ellipse.");
    double longRad,shortRad,circumference;
    printf("\nPlease enter a Long Radius: "); scanf("%lf",&longRad);
    printf("\nPlease enter a Short Radius: "); scanf("%lf",&shortRad);
    circumference= ((M_PI*(3*(longRad+shortRad)-(sqrt((3*longRad+shortRad)*(longRad+shortRad*3))))));
    printf("The circumference of your ellipse is: %.2lf\n",circumference);

    return 0;

}
double roundToHundredths(double u){
    return (((int)((u/=100)+0.5))*100);
}
double roundToThousandths(double u){
    return (((int)((u/=1000)+0.5))*1000);
}
