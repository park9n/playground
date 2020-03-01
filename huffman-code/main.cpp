#include <stdio.h>
#include <memory.h>
#include <time.h>
#include <stdlib.h>

int array[26] = {8, 2, 2, 4, 12, 2, 2, 5, 7, 1, 1, 3, 2, 6, 7, 1, 0, 6, 9, 2, 1, 1, 2, 1};
char words[1024][10];
int length[1024];
char paper[65536];
char src[65536];
char dst[65536];

int encode(char *src, char *dst, int len);
int decode(char *src, char *dst, int len);

int gen_random() {
    return rand();
}

int main() {
    return 0;
}
