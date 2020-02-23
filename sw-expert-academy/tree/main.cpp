//트리 구조란 그래프의 일종으로, 여러 노드가 한 노드를 가리킬 수 없는 구조이다. 간단하게는 회로가 없고, 서로 다른 두 노드를 잇는 길이 하나뿐인 그래프를 트리라고 부른다. 주어진 입력 값으로 트리를 구성하고, 구성된 트리를 전위순회하고 방문한 노드의 번호를 출력하시오. 첫 줄에는 전체 테스트 케이스의 수(T), 두 번째 줄에는 노드의 총 수(nodeNum), 간선의 총 수(edgeNum)가 주어진다. 그 다음 줄에는 간선이 나열 된다. 간선은 그것을 이루는 두 정점으로 표기된다. 간선은 항상 “부모 자식” 순서로 표기 된다. 예를 들어 “1 2”는 정점 1과 2를 잇는 간선을 의미하며 1이 부모 2가 자식을 의미한다. 부모는 최대 2개의 자식 노드를 갖으며, 최대 노드의 개수는 10000개이다.
#include <stdio.h>

#define MAX_NODE_NUM 10000
#define MAX_CHILD_NUM 2

typedef struct 
{
    int parent;
    int child[MAX_CHILD_NUM];
} TreeNode;
TreeNode tree[MAX_NODE_NUM];
int nodeNum;
int edgeNum;
int root;

void initTree(void) 
{
    int i;
    int j;
    for (i = 0; i <= nodeNum; i++)
    {
        tree[i].parent = -1;
        for (j = 0; j < MAX_CHILD_NUM; j++)
        {
            tree[i].child[j] = -1;
        }
    }
}

void addChild(int parent, int child) 
{
    int i;
    for (i = 0; i < MAX_CHILD_NUM; i++)
    {
        if (tree[parent].child[i] == -1)
        {
            break;
        }
    }
    tree[parent].child[i] = child;
    tree[child].parent = parent;
}

int getRoot(void) 
{
    int i;
    int j;
    for (i = 1; i <= nodeNum; i++) 
    {
        if (tree[i].parent == -1) 
        {
            return i;
        }
    }
    return -1;
}

void preOrder(int root) 
{
    int i;
    int child;
    printf("%d ", root);

    for (i = 0; i < MAX_CHILD_NUM; i++) 
    {
        child = tree[root].child[i];
        if (child != -1)
        {
            preOrder(child);
        }
    }
}

int main(void)
{
    int test_case;
    int T;
    int i;
    int parent;
    int child;

    scanf("%d", &T);

    for (test_case = 1; test_case <= T; ++test_case) 
    {
        scanf("%d %d", &nodeNum, &edgeNum);

        initTree();

        for (i = 0; i < edgeNum; i++)
        {
            scanf("%d %d", &parent, &child);
            addChild(parent, child);
        }

        root = getRoot();

        printf("#%d ", test_case);
        preOrder(root);
        printf("\n");
    }

    return 0;
}
