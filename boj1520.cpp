// https://www.acmicpc.net/problem/1520

#include <stdio.h>

int height[500][500];
int num_of_ways_to_end[500][500];
int M, N;

int dfs(int m, int n) {
	if (m == (M - 1) && n == (N - 1)) {
		return 1;
	}
	if (num_of_ways_to_end[m][n] > 0) {
		return num_of_ways_to_end[m][n];
	}
	num_of_ways_to_end[m][n] = 0;
	int dm[] = { -1, 1, 0, 0 };
	int dn[] = { 0, 0, -1, 1 };
	for (int i = 0; i < 4; i++) {
		int m_next = m + dm[i];
		int n_next = n + dn[i];
		if (m_next >= 0 && m_next < M && n_next >= 0 && n_next < N && height[m_next][n_next] < height[m][n]) {
			num_of_ways_to_end[m][n] += dfs(m_next, n_next);
		}
	}
	return num_of_ways_to_end[m][n];
}

int main(void) {
	FILE *fp = freopen("input.txt", "r", stdin);
	scanf("%d %d", &M, &N);
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			scanf("%d", &height[i][j]);
			num_of_ways_to_end[i][j] = -1;
		}
	}

	printf("%d\n", dfs(0, 0));

	fclose(fp);
	return 0;
}
