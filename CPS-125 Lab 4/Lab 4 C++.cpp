#include <stdio.h>
#include <math.h>

#include <iostream>
using namespace std;

int main(){
    //Exercise 1 & 2
    int a1,a2,avg,t1,t2;
    char grade;
    cout << "Enter Assignment Grades: ";
    cin >> a1 >> a2;
    cout << "Enter Test marks: ";
    cin >> t1 >> t2;

    avg = (a1+a2+t1+t2)/4;
    printf("The Average is: %d%", avg);
    grade = (avg>=80) ? 'A':grade;
    grade = (avg<80 && avg>=70) ? 'B':grade;
    grade = (avg<70 && avg>=60) ? 'C':grade;
    grade = (avg<60 && avg>=50) ? 'D':grade;
    grade = (avg<50 || t1<50 || t2<50) ? 'F':grade;

  /*  if(avg>=80){
        grade='A';
    }
    else if(avg<80 && avg>=70){
        grade='B';
    }
    else if(avg<70 && avg>=60){
        grade='C';
    }
    else if(avg<60 && avg>=50){
        grade='D';
    }
    else{
        grade='F';
    }
    if(t1<50||t2<50){
        grade='F';
    }*/
    printf("\nThe letter grade is: %c",grade);

    //Exercise 3
    char warship;
    cout << "\n\nSelect a Warship. ";
    cin >> warship;

    switch(warship){
        case'S':
            printf("Submarine");
            break;
        case'C':
            printf("Cruiser");
            break;
        case'D':
            printf("Destroyer");
            break;
        case'F':
            printf("Frigate");
            break;
        case'A':
            printf("Aircraft Carrier");
            break;
        default:
            cout <<"Error has occured: Unknown vessel detected.";
            break;
    }

    //Exercise 4
    cout<< "\n\nEarth Quake detected.\nEnter a number above 0: ";
    double richter;
    cin >> richter;
    string result;

    result = (richter>=7.5) ? "\nCatastrophe: Most buildings destroyed":result;
    result = (richter<7.5 && richter >=6.5) ? "\nDisaster: Houses and buildings may collapse":result;
    result = (richter<6.5 && richter >=5.5) ? "\nSerious damage: Walls may crack or fall":result;
    result = (richter<5.5 && richter >=5.0) ? "\nSome damage":result;
    result = (richter<5.0) ? "\nLittle or no damage":result;

    cout <<result;

    //exercise 5

    return 0;
}
