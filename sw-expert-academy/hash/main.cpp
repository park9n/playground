#include <stdio.h>
#include <string.h>
#include <memory.h>

#include "main.h"

Hash tb[MAX_TABLE];

unsigned long hash(const char *str) {
    unsigned long hash = 5381;
    int c;

    while (c = *str++) {
        hash = (((hash << 5) + hash) + c) % MAX_TABLE;
    }

    return hash % MAX_TABLE;
}

int add(const char *key, const char *data) {
    unsigned long h = hash(key);

    while (tb[h].key[0] != 0) {
        if (strcmp(tb[h].key, key) == 0) {
            return 0;
        }

        h = (h + 1) % MAX_TABLE;
    }
    strcpy(tb[h].key, key);
    strcpy(tb[h].data, data);
    return 1;
}

int find(const char *key, char *data) {
    unsigned long h = hash(key);
    int cnt = MAX_TABLE;

    while (tb[h].key[0] != 0 && cnt--) {
        if (strcmp(tb[h].key, key) == 0) {
            strcpy(data, tb[h].data);
            return 1;
        }
        h = (h + 1) % MAX_TABLE;
    }
    return 0;
}

