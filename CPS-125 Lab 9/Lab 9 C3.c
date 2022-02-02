#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
struct car{
    char make[20];
    char model[20];
    char color[20];
    int year;
}sample;
int main(){
    int d,capacity=1,used=0;
    char a[20],b[20],c[20];
    struct car *arr=malloc(sizeof(sample)*capacity);
    while(1){
        printf("Please enter the Make, Model, Color and year of your car.(enter 'EXIT' to quit)\n");
        scanf("%s",a);
        if(strcmp("EXIT",a) ==0){
            break;
        }
        scanf("%s %s %d",b,c,&d);
        if(used==capacity){
            capacity++;
            arr=realloc(arr,sizeof(sample)*capacity);
        }
        if((strcmp("yellow",c)==0) && d>2010){
            strcpy(sample.make,a);
            strcpy(sample.model,b);
            strcpy(sample.color,c);
            sample.year =d;
            arr[used]=sample;
            used++;
        }
    }
    printf("\nYellow cars above the year 2010: \n");
    for(int i=0;i<used;i++){
        printf("%s %s %s %d\n",arr[i].make,arr[i].model,arr[i].color,arr[i].year);
    }
    free(arr);
    return 0;
}
