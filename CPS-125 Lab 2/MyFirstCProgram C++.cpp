#include <stdio.h>;
#include <iostream>;
#include <cmath>;
using namespace std;

double roundToHundredths(double);
double roundToThousandths(double);

int main(){
    //Exercise 1
    printf("scanf is inferior to cin>>.\n");
    cout <<"\nThis isn't my first C Program.\n";
    cout <<"\nThis\nisn't\nmy\nfirst\nC++\nprogram\n";
    //Exercise 2
    cout << "\nX O X\nX X O\nO O X\n";
    //Exercise 4
    double a;
    cout <<"\nPlease enter a real number. ";
    cin >>a;
    printf("\nThis is your number rounded to the nearest hundredth: %1.f",roundToHundredths(a));
    printf("\nThis is your number rounded to the nearest thousandth: %1.f",roundToThousandths(a));
    printf("\nThis is your number rounded to 1 decimal place: %.1lf\n",a);
    //Exercise 5
    cout <<"\nLet's calculate the circumference of an ellipse.";
    double longRad,shortRad,circumference;
    cout <<"\nPlease enter a Long Radius: "; cin >>longRad;
    cout <<"\nPlease enter a Short Radius: "; cin >>shortRad;
    circumference= ((M_PI*(3*(longRad+shortRad)-(sqrt((3*longRad+shortRad)*(longRad+shortRad*3))))));
    printf("The circumference of your ellipse is: %.2lf\n",circumference);

    return 0;

}
double roundToHundredths(double u){
    u/=100;
    return (((int)(u+0.5))*100);
}
double roundToThousandths(double u){
    u/=1000;
    return (((int)(u+0.5))*1000);
}
