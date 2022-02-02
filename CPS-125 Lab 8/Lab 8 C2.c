#include <stdio.h>
#include <math.h>

void array_out(int [],int);
int count_zeros (int [], int);
int count_negs (int [], int);
int main(){

    int* ptr_1 = malloc(sizeof(int));
    ptr_1=7;
    printf("%d\n", ptr_1);
    free(ptr_1);

    printf("First Array form:\n");
    int* arr = malloc(40*sizeof(int));
    for(int i=0;i<5;i++){
        arr[i]=i;
    }
    for(int z=0;z<40;z++){
        printf("%d ",arr[z]);
    }
    free(arr);

    FILE *fp;
    fp = fopen ("sample.txt","r");
    int how_many =(int*)malloc(1*sizeof(int));
    while(!feof(fp)){
        fscanf(fp,"%d",&how_many);
        for(int i=0;i<how_many;i++){
            int nextInt = (int*)malloc(1*sizeof(int));
            fscanf(fp,"%d",&nextInt);
            arr[i] = nextInt;
        }
    }
    array_out(arr,how_many);
    printf("\nNumber of Zeros in array: %d",count_zeros(arr,how_many));
    printf("\nNumber of Negative values in array: %d\n",count_negs(arr,how_many));
    return 69;
}
void array_out(int x[],int y){
    printf("\nSecond Array Form:\n");
    for(int z=0;z<y;z++){
        printf("%d ", x[z]);
    }
}
int count_zeros (int x[], int y){
    int count = 0;
    for(int z=0;z<y;z++){
        (x[z]==0) ? count++:count;
    }
    return count;
}
int count_negs (int x[], int y){
    int count=0;
    for(int z=0;z<y;z++){
        (x[z]<0) ? count++:count;
    }
    return count;
}
