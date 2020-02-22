#include <stdio.h>
#include <string.h>

char* reverse(char* buf, const char* str, int str_len) {
    char temp;
    for (int i = 0; i <= (str_len / 2); i++) {
        temp = str[i];
        buf[i] = str[str_len - (i + 1)];
        buf[str_len - (i + 1)] = temp;
    }
    buf[str_len] = '\0';
    return buf;
}
