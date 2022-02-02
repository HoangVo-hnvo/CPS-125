#include <stdio.h>
#include <math.h>

int main(){

    char a[] = "Life Is Good";
    char* b[] ={"Life"," is ","Good"};
    int spaces=1;
    for(int i=0;i<sizeof(a);i++){
        printf("%c",a[i]);
        (a[i]==' ') ? spaces++:spaces;
    }
    printf("\nNumber of Characters: %d",sizeof(a)-1);
    printf("\nNumber of Words: %d\n",spaces);
    for(int z=sizeof(a)-2;z>-1;z--){
        printf("%c",a[z]);
    }
    printf("\n");
    for(int y=2;y>-1;y--){
        printf("%s",b[y]);
    }
    return 69;
}
