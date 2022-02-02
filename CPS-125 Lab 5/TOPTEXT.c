#include <stdio.h>
#include <stdlib.h>

int main () {
    int beachNum;
    int numSam;
    int numOrg100;
    int avg;

    FILE *fp;
    fp = fopen ("file.txt","r");
    while(!feof(fp)){
        fscanf(fp,"%d %d",&beachNum,&numSam);
        printf("%d %d",beachNum,numSam);
        for(int i=0;i<numSam;i++){
            fscanf(fp,"%d",&numOrg100);
            printf(" %d",numOrg100);
            avg+=numOrg100;
        }
        if(numSam>0){
            printf(" -Average organism concentration: %d",avg/numSam);
            if((avg/numSam)>=3500){
                printf(", Beach will be closed.");
            }
            else{
                printf(", Beach will remain open.");
            }
        }
        else{
            printf(" N/A");
        }
        avg=0;
        printf("\n");
    }
    fclose(fp);

    return(0);
}
