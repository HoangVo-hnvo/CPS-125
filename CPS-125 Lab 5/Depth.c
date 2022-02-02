#include <stdio.h>
#include <math.h>

int main(){
    int a,b=0;
    FILE *fp;
    fp = fopen("lake.txt","r");

    while(!feof(fp)){
        fscanf(fp,"%d",&a);
        printf("%d ",a);
        if(a>b){
            b=a;
        }
    }
    fclose(fp);
    printf("\nHighest Number: %d",b);
    return 0;
}
