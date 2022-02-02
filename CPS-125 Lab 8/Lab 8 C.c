#include <stdio.h>
#include <math.h>
int checkdiag(int [][100],int);
int checkdiag2(int [][100],int);
int main(){
    FILE *fp;
    fp = fopen ("matrix.txt","r");
    int arr[100][100];
    int number;
    while(!feof(fp)){
        fscanf(fp,"%d",&number);
        arr[number][number];
        for(int i=0;i<number;i++){
            for(int z=0;z<number;z++){
                fscanf(fp,"%d",&arr[i][z]);
            }
        }
    }
    printf("Matrix Capacity: %d\n",number);
    for(int f=0;f<number;f++){
        for(int c=0;c<number;c++){
            printf("%d ",arr[f][c]);
        }
        printf("\n");
    }
    printf("Diagonal: %d",checkdiag(arr,number));
    printf("\nAntidiagonal: %d\n",checkdiag2(arr,number));

}
int checkdiag(int matrix[][100], int size){
    int count = 0;
    int result = 1;
    while(count < size){
        if(matrix[(size-1)][(size-1)] != matrix[count][count]){
            result =0;
            break;
        }
        count++;
    }
    return result;
}
int checkdiag2(int matrix[][100], int size){
    int x=0,y=size-1;
    int result2 = 1;
    while(x<size && y>0){
        if(matrix[0][(size-1)] != matrix[x][y]){
            result2 =0;
            break;
        }
        x++;
        y--;
    }
    return result2;
}
