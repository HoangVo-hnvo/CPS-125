#include <stdio.h>
#include <math.h>
struct Shape{
        double line;
        double radius;
        double areacircle;
        double areacylinder;
        double volumecylinder;
}alpha; //instead of using struct Shape alpha to create the object, I'll just call it here to make it quicker
void bn(struct Shape *a,double x,double y){
    (*a).line = x;
    (*a).radius = y;
    (*a).areacircle = M_PI*(*a).radius*(*a).radius;
    (*a).areacylinder = 2.00*M_PI*(*a).line*(*a).radius +2.00*(*a).areacircle;
    (*a).volumecylinder = (*a).areacircle*(*a).line;
}
void cn(struct Shape *a){
    printf("Height/axis of cylinder: %.3lf", (*a).line);
    printf("\nRadius of cylinder: %.3lf", (*a).radius);
    printf("\nArea of circular cross-section: %.3lf", (*a).areacircle);
    printf("\nSurface Area of cylinder: %.3lf", (*a).areacylinder);
    printf("\nVolume of cylinder: %.3lf", (*a).volumecylinder);
}
int main(){
    double a,b;
    printf("Enter the height and radius of your cylinder: ");
    scanf("%lf %lf", &a,&b);
    bn(&alpha,a,b);
    cn(&alpha);
    return 6969;
}
