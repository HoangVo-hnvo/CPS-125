#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int beachNum;
    int numSam;
    int numOrg100;
    int average;
    FILE * beaches;

    beaches = fopen("test.txt","w");
    printf("Please Insert the beach ID, Number of samples followed by the samples. Enter  beach number -17 to end the program\n");
    fprintf(beaches,"| Beach #| # of Samples |----------------------------------- Samples with averages and description -----------------------------------|\n");
    while(1){
        scanf("%d",&beachNum);
        if(beachNum ==-17)break;
        scanf("%d",&numSam);
        fprintf(beaches,"    %d         %d          ",beachNum,numSam);
        for(int z=0;z<numSam;z++){
            scanf("%d",&numOrg100);
            average+=numOrg100;
            fprintf(beaches,"%d ",numOrg100);
        }
        if(numSam>0){
            fprintf(beaches," -Average organism concentration: %d",average/numSam);
            if((average/numSam)>=3500){
                fprintf(beaches,", Beach will be closed.");
            }
            else{
                fprintf(beaches,", Beach will remain open.");
            }
        }
        else{
            fprintf(beaches,"N/A");
        }
        average=0;
        fprintf(beaches,"\n");
    }
    fclose(beaches);
    int count;
    beaches =fopen("test.txt","r");
    while(!feof(beaches)){
        while((count = getc(beaches))!= EOF){ //the text file contains numerous characters which are represented by digits, this while loop will go through each line until it reaches the end.
            putchar(count); //prints each character from the text file
        }
    }
    return 0;
}
