#include <stdio.h>
#include <stdbool.h>
#define MAX_VERTICES 100 
int graph[MAX_VERTICES][MAX_VERTICES];
int color[MAX_VERTICES];
int num_vertices;
bool is_color_valid(int vertex, int current_color) 
{
    for (int i = 0; i < num_vertices; i++) 
	{
        if (graph[vertex][i] && current_color == color[i]) 
		{
            return false;
        }
    }
    return true;
}
void color_graph() 
{
    for (int i = 0; i < num_vertices; i++) 
	{
        color[i] = -1;
    }
    color[0] = 0;

    for (int i = 1; i < num_vertices; i++) 
	{
        for (int j = 0; j < num_vertices; j++) 
		{
            if (graph[i][j] && color[j] != -1) 
			{
                color[color[j]] = 1;
            }
        }
     int current_color = 0;
        while (color[current_color] != -1) 
		{
            current_color++;
        }
        color[i] = current_color;
        for (int j = 0; j < num_vertices; j++) 
		{
            if (graph[i][j] && color[j] != -1) 
			{
                color[color[j]] = -1;
            }
        }
    }
}
int main() 
{
    int num_edges;
    printf("Enter the number of vertices: ");
    scanf("%d", &num_vertices);
    printf("Enter the number of edges: ");
    scanf("%d", &num_edges);
    for (int i = 0; i < num_edges; i++) 
	{
        int u, v;
        printf("Enter edge %d: ", i + 1);
        scanf("%d %d", &u, &v);
        graph[u][v] = graph[v][u] = 1;
    }
    color_graph();
    for (int i = 0; i < num_vertices; i++) 
	{
        printf("Vertex %d: Color %d\n", i, color[i]);
    }
}
