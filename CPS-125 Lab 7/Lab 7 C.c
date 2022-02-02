#include <stdio.h>
#include <math.h>

int main(){

    double x_arr[25] = {};
    double x_second_arr[25] = {};
    double norm_x_arr[25] ={};
    FILE *fp;
    fp = fopen ("bottomText.txt","r");
    int count = 0;
    while(!feof(fp)){
        double a = 0;
        fscanf(fp,"%lf",&a);
        x_arr[count] = a;
        x_second_arr[count] = a*3;
        count++;
    }
    printf("First Array");
    for(int i=0;i<25;i++){
        if(i%5 == 0){
            printf("\n");
        }
        printf("%.2lf ",x_arr[i]);
    }
    printf("\n\nFirst Array but with values tripled");
    for(int i=0;i<25;i++){
        if(i%5 == 0){
            printf("\n");
        }
        printf("%.2lf ",x_second_arr[i]);
    }

    double xhigh = x_arr[0];
    double xlow = x_arr[0];
    for(int x =0;x<25;x++){
        if(x_arr[x]>= xhigh){
            xhigh = x_arr[x];
        }
        if(x_arr[x]< xlow){
            xlow = x_arr[x];
        }
    }
    printf("\n\nHighest Number in First Array: %.2lf\n", xhigh);
    printf("\nLowest Number in First Array: %.2lf\n", xlow);
    int max=0,min=0;
    printf("\nEnter a Max and Min value to normalize: ");
    scanf("%d %d",&max,&min);
    printf("\nFirst Array but normalized");
    for(int z=0;z<25;z++){
        int normxi = min + ((x_arr[z] - xlow) * (max - min)) / (xhigh - xlow);
        norm_x_arr[z] =normxi;
    }
    for(int y=0;y<25;y++){
        if(y%5 == 0){
            printf("\n");
        }
        printf("%.2lf ",norm_x_arr[y]);
    }
    return 0;
}
