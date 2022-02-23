#include <stdio.h>

#include <stdlib.h>

//this is a test

//this is a new test

int main() {
    int n = 0;
    int big = 0;
    int smll = 0;
    int math = 0;
    char passward[100];
    scanf("%d", & n);
    while (n--) {
        int x = 0;
        int c = 0;
        scanf("%s", passward);
        while (passward[x] != 0) {
            c++;
            x++;
        }
        if (passward[0] < 65 || sizeof(passward) < 9) {
            printf("NO");
            goto loop;
        }
        for (int i = 0; i < c; i++) {
            if (passward[i] < 48 || (passward[i] > 57 && passward[i] < 65) || passward[i] > 122) {
                printf("NO");
                goto loop;
            } else if (passward[i] > 48 && passward[i] < 58) math++;
            else if (passward[i] > 65 && passward[i] < 91) big++;
            else if (passward[i] > 97 && passward[i] < 123) smll++;
        }
        if ((math == 0 && big == 0) || (math == 0 && smll == 0) || (smll == 0 && big == 0)) {
            printf("NO");
        }
        else {
            printf("YES");
        }
            loop:
        n = 0;
        big = 0;
        smll = 0;
        math = 0;
    }
    return 0;
}
