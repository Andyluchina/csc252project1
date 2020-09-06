#include <stdio.h>
int main(int argc, char *argv[]){
    int *translation;
    char bytearray[4];

    bytearray[0] = 0x00;
    bytearray[1] = 0x00;
    bytearray[2] = 0xFF;
    bytearray[3] = 0xFF;

    translation = (int*) &bytearray;
    printf("Bit pattern = %d.\n", *translation);
    return 0;
}
