#include <stdio.h>
#include <math.h>
void getDate(int days){
    char a[]="";
    int month,day;
    (1<=days && days<=31)? month=1,day=days:1;
    (32<=days && days<=59)? month=2,day=days-31:1;
    (60<=days && days<=90)? month=3,day=days-59:1;
    (91<=days && days<=120)? month=4,day=days-90:1;
    (121<=days && days<=151)? month=5,day=days-120:1;
    (152<=days && days<=181)? month=6,day=days-151:1;
    (182<=days && days<=212)? month=7,day=days-181:1;
    (213<=days && days<=243)? month=8,day=days-212:1;
    (244<=days && days<=273)? month=9,day=days-243:1;
    (274<=days && days<=304)? month=10,day=days-273:1;
    (301<=days && days<=334)? month=11,day=days-304:1;
    (335<=days && days<=365)? month=12,day=days-334:1;
    printf("%d/%d/2018",day,month); //the date can be changed to 2018 as well
}
int main(){
    int days;
    scanf("%d",&days);
    getDate(days);
    return 0;
}
