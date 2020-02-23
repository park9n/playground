#ifndef MAIN_H
#define MAIN_H

#define MAX_SIZE 100

extern int heap[MAX_SIZE];
extern int heapSize;

void heapInit(void);
int heapPush(int value);
int heapPop(int *value);

#endif
