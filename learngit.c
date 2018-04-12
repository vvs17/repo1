#include <stdio.h>

int soma(int x,int y);
int media(int x, int y, int z);

int main() {
    int x = 2;
    int y = 10;

    int res1 = soma(x,y);
    int res2 = media(x,y);

    return 0;
}

int soma(int x, int y) {
    return x + y + x + y;
}

int media(int x, int y) {
    return ((x + y + z) / 3);
}