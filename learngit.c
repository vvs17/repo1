#include <stdio.h>

int soma(int x,int y);
int media(int x, int y, int z);

int main() {
    int x = 2;
    int y = 4;
    int z = 3;

    int res1 = soma(x,y);
    int res2 = media(x,y);
}

int soma(int x, int y) {
    return x + y;
}

int media(int x, int y) {
    return ((x + y + z) / 3);
}