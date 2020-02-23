//플로이드-워셜 알고리즘(Floyd-Warshall Algorithm)은 그래프에서 모든 꼭짓점 사이의 최단 경로의 거리를 구하는 알고리즘이다. 제일 바깥쪽 반복문은 거쳐가는 꼭짓점이고, 두 번째 반복문은 출발하는 꼭짓점, 세 번째 반복문은 도착하는 꼭짓점이다. N 개의 정점(Vertex)과 방향과 가중치 w를 가진 M개의 간선(edge)으로 이루어진 방향 그래프(Directed Graph)가 주어진다. 예를 들어 Figure 1의 경우 N이 5, M이 10인 방향 그래프이다. 이때 모든 정점들의 쌍(A, B)에 대해 A에서 시작하여 B로 도착하는 최단 거리를 구하시오.
#include <stdio.h>
#define INFINITY 999999

int weight[101][101];
int result[101][101];

void floyd(int n) 
{
    int i, j, k;

    for (k = 0; k < n; k++) 
    {
        for (i = 0; i < n; i++) 
        {
            if (k == 0) 
            {
                for (j = 0; j < n; j++) 
                {
                    result[i][j] = weight[i][j];
                }
            }
            for (j = 0; j < n; j++) 
            {
                if (result[i][k] + result[k][j] < result[i][j])
                {
                    result[i][j] = result[i][k] + result[k][j];
                }
            }
        }
    }
}

int main() 
{
    int T;
    int n, m, i, j;
    scanf("%d", &T);

    for (int test_case = 1; test_case <= T; test_case++) 
    {
        scanf("%d %d", &n, &m);
        for (i = 0; i < n; i++) 
        {
            for (j = 0; j < n; j++) 
            {
                weight[i][j] = INFINITY;
            }
            weight[i][i] = 0;
        }

        for (i = 0; i < m; i++) 
        {
            int st, en, w;
            scanf("%d %d %d", &st, &en, &w);
            if (weight[st-1][en-1] > w)
            {
                weight[st-1][en-1] = w;
            }
        }

        floyd(n);

        printf("#%d\n", test_case);
        for (i = 0; i < n; i++) 
        {
            for (j = 0; j < n; j++) 
            {
                printf("%d ", result[i][j]);
            }
            printf("\n");
        }
    }
}
