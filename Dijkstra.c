#include <stdio.h>

#define INF 9999
#define MAX 100

void dijkstra(int graph[MAX][MAX], int n, int source)
{
    int distance[MAX];
    int visited[MAX] = {0};

    // Initialize distances
    for (int i = 0; i < n; i++)
    {
        distance[i] = INF;
    }

    distance[source] = 0;

    for (int count = 0; count < n - 1; count++)
    {
        int min = INF;
        int u = -1;

        // Find unvisited vertex with minimum distance
        for (int i = 0; i < n; i++)
        {
            if (!visited[i] && distance[i] < min)
            {
                min = distance[i];
                u = i;
            }
        }

        if (u == -1)
            break;

        visited[u] = 1;

        // Relax adjacent vertices
        for (int v = 0; v < n; v++)
        {
            if (!visited[v] &&
                graph[u][v] &&
                distance[u] + graph[u][v] < distance[v])
            {
                distance[v] =
                    distance[u] + graph[u][v];
            }
        }
    }

    printf("\nShortest distances from vertex %d:\n",
           source);

    for (int i = 0; i < n; i++)
    {
        if (distance[i] == INF)
            printf("%d -> %d = INF\n", source, i);
        else
            printf("%d -> %d = %d\n",
                   source, i, distance[i]);
    }
}

int main()
{
    int n;
    int graph[MAX][MAX];
    int source;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &graph[i][j]);
        }
    }

    printf("Enter source vertex: ");
    scanf("%d", &source);

    dijkstra(graph, n, source);

    return 0;
}