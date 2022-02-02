#include <stdio.h>
#include <math.h>

int f1(int);
int f2(int);
void f3(int,int*,int*);

int main(){
    printf("Please enter a number b/n 10 and 99. ");
    int a, quotient,remainder;
    while(1){
        scanf("%d",&a);
        if(a>=10 && a<=99){
            break;
        }
        printf("Invalid. Please enter another number. ");
    }
    f3(a,&quotient,&remainder);
    printf("Quotient: %d", quotient);
    printf("\nRemainder: %d", remainder);
    return 0;
}

int f1(int x){
    return x/10;
}
int f2(int x){
    return x %(f1(x)*10);
}
void f3(int a,int *x,int *y){
    *x = f1(a);
    *y = f2(a);
}
