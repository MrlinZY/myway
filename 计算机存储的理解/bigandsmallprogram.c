#include <stdlib.h>
#include <stdio.h>
int main(){
    int a=1;
    char* ptr=(char*)&a;
    if((*ptr)==1)
    printf("xiaoduan");
    else
    printf("daduan");
    system("pause");
    return 0;
}