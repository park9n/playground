#ifndef MAIN_H
#define MAIN_H

#define MAX_KEY 64
#define MAX_DATA 128
#define MAX_TABLE 4096

typedef struct {
    char key[MAX_KEY + 1];
    char data[MAX_DATA + 1];
} Hash;

extern Hash tb[MAX_TABLE];

unsigned long hash(const char *str); 
int add(const char *key, const char *data);
int find(const char *key, char *data);

#endif
