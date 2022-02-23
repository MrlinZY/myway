#include <stdlib.h>
#include <stdio.h>
int main(){
    char a=-1;
    signed char b=-1;
    unsigned char c=-1;
    printf("a=%d b=%d c=%d",a,b,c);
    system("pause");
    return 0;
}
//结果的-1 -1 255
//大端小端 整型提升