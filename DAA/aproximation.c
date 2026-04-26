#include <stdio.h>

#define V 5 // Number of vertices in our graph

/* A simple greedy approach to find a Vertex Cover.
 * It follows a 2-approximation strategy.
 */
void findVertexCover(int graph[V][V])
{
    int visited[V]; // Array to represent our Cover Set 'C'

    // Start with an empty set C by marking all vertices as "unmarked = 0"
    for (int i = 0; i < V; i++)
    {
        visited[i] = 0;
    }

    // Repeat until no unmarked edges remain
    for (int u = 0; u < V; u++)
    {
        for (int v = 0; v < V; v++)
        {
            // Edge exists and both vertices are unmarked
            if (graph[u][v] == 1 && !visited[u] && !visited[v])
            {
                // Add both endpoints to cover set
                visited[u] = 1;
                visited[v] = 1;
            }
        }
    }

    // Print the Cover Set
    printf("Approximate Vertex Cover: ");
    int count = 0;
    for (int i = 0; i < V; i++)
    {
        if (visited[i])
        {
            printf("%d ", i);
            count++;
        }
    }

    printf("\nTotal vertices in the cover: %d\n", count);
}

int main()
{
    // Adjacency Matrix representation
    int graph[V][V] = {
        {0, 1, 0, 0, 0},
        {1, 0, 1, 1, 0},
        {0, 1, 0, 1, 1},
        {0, 1, 1, 0, 1},
        {0, 0, 1, 1, 0}
    };

    printf("Executing Vertex Cover Approximation...\n");
    findVertexCover(graph);

    return 0;
}
