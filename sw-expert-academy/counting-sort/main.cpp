//계수정렬(counting sort)는 항목들의 순서를 결정하기 위해 집합에 각 항목이 몇 개씩 있는지 세는 작업을 하면서 정렬하는 알고리즘이다. 주어진 정수들을 Counting Sort를 이용하여 정렬하고 오름차순으로 출력하라. (주어진 정수들은 중복가능)
#include <stdio.h>

#define MAX_N 100
#define MAX_DIGIT 10

int N;  // # of data set
int arr[MAX_N];
int cnt[MAX_DIGIT];
int sortedArr[MAX_N];

void calculateDigitNumber()
{
    for (int i = 0; i < N; i++)
    {
        cnt[arr[i]]++;
    }

    for (int i = 1; i < MAX_DIGIT; i++)
    {
        cnt[i] = cnt[i-1] + cnt[i];
    }
}

void executeCountingSort()
{
    for (int i = N-1; i >= 0; i--)
    {
        sortedArr[--cnt[arr[i]]] = arr[i];
    }
}

int main(void)
{
    int T;
    scanf("%d", &T);

    for (int test_case = 1; test_case <= T; test_case++) 
    {
        scanf("%d", &N);

        for (int i = 0; i < N; i++)
        {
            scanf("%d", &arr[i]);
        }

        // initialize
        //         for (int i = 1; i < MAX_DIGIT; i++)
        //                 {
        //                             cnt[i] = 0;
        //                                     }
        //
        //                                             calculateDigitNumber();
        //                                                     executeCountingSort();
        //
        //                                                             //print the sorted digits
        //                                                                     printf("#%d ", test_case);
        //                                                                             for (int i = 0; i < N; i++) 
        //                                                                                     {
        //                                                                                                 printf("%d ", sortedArr[i]);
        //                                                                                                         }
        //                                                                                                                 printf("\n");
        //                                                                                                                     }
        //                                                                                                                         return 0;
        //                                                                                                                         }
