#include <stdio.h>

int main(int argc, char *argv[]) {
    char direction;
    int amount, pos=50, count=0, i;
    while(scanf("%c", &direction)==1) {
        if(direction=='\n') {
            continue;
        }
        scanf("%d", &amount);
            for(i=amount; i>0; i--) {
                if(direction=='L') {
                    pos--;
                } else {
                    pos++;
                }
                if(pos==0||pos==100) {
                    count++;
                }
                if(pos==-1) {
                    pos=99;
                }
                if(pos==101) {
                    pos=1;
                }
            }
    }
    printf("%d\n", count);
    return 0;
}
