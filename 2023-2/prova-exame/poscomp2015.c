#include <stdio.h>
int main() {  
    int y = 12, z = -4, w = 0, x;
    for (x = 0; x < 9; x=x+3) {
        while (w < 3){
            y = z + w++;
        }
        if (x % 2 == 0)
            y = z + x;
        else
            y++;
        z++;
        printf ("x:%d y:%d z:%d \n", x, y, z);
    }
}