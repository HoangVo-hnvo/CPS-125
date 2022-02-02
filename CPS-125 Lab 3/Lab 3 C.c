#include <stdio.h>
#include <math.h>

void sort(int[]);
int main(){
    //Exercise 1
    int a,b,c,d;
    printf("Enter 4 numbers (you can enter multiple numbers by separating it with spaces): ");
    scanf("%d %d %d %d",&a,&b,&c,&d); //cin >> a >> b >> c >> d;
    printf("\nThe sum of the 4 values is: %d",(a+b+c+d));
    printf("\nThe sum of the first 2 values minus the sum of the second values: %d",(a+b-c-d));
    printf("\nThe sum of squares of the 4 numbers: %.1lf",(pow(a,2)+pow(b,2)+pow(c,2)+pow(d,2)));
    printf("\nThe square root of the sum of the squares of the numbers, divided by the sum of all the numbers: %2.lf\n", ((sqrt((pow(a,2)+pow(b,2)+pow(c,2)+pow(d,2))))/(a+b+c+d)));

    //Exercise 2
    printf("\nHeres's a chart of meters,miles and yards: \n");
    printf("\n|  Meters  |   Yards  |    Miles    |\n");
    for(int i=1;i<9;i*=2){
        printf("--------------------------------------\n");
        int meters = i*100;
        double yards =(i*100)*1.094;
        double miles =(i*100)*0.0006215;
        printf("|   %d    |    %2.lf   |  %lf   |\n",meters,yards,miles);
    }

    //Exercise 3
    double radius;
    double volume;
    printf("\nLets calculate the volume of a sphere; what is the RADIUS of your sphere in meters? ");
    scanf("%lf",&radius);
    volume =(pow(radius,3))*M_PI*(4.00/3.00);
    printf("The volume of your sphere is %.2lf meters cubed.\n",volume);

    //Exercise 4
    double angle1,angle2,angle3;
    printf("\nWhat are the first 2 angles of your triangle in degrees? ");
    scanf("%lf %lf",&angle1,&angle2);
    printf("The third angle of your triangle is: %.2lf\n",(180-angle1-angle2));

    //Exercise 5
    int first,second;
    printf("\nEnter 2 numbers, and I'll print out the sum. ");
    scanf("%d %d",&first,&second);
    if(first==second){
        printf("Oh baby a Triple Sum: %d\n",(first+second)*3);
    }
    else{
        printf("Sum: %d\n",(first+second));
    }

    //Exercise 6
    int one,two,three;
    printf("\nEnter 3 digits that you want to sort: ");
    scanf("%d %d %d",&one,&two,&three);
    int arr[] ={one,three,two,7,4,324};
    sort(arr);
    return 0;

}
void sort(int x[]){
    for(int i=0;i<(sizeof(x)/sizeof(x[0])-1);i++){
        for(int f=i+1;f<(sizeof(x)/sizeof(x[0])-1);f++){
            if(x[i]<x[f]){
                int higher =x[f];
                int lower =x[i];
                x[i]=higher;
                x[f]=lower;
            }
        }
    }
    for(int z=0;z<(sizeof(x)-1);z++){
        printf("%d ",x[z]);
    }
}
