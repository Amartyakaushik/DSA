#include <iostream>
#include <queue>
#include <vector>

#define MAX 100

using namespace std;

int graph[MAX][MAX];  // Adjacency matrix for the graph
bool visited[MAX];    // Array to keep track of visited nodes

// Function to initialize the graph and visited arrays
void initializeGraph(int num_vertices) {
    for (int i = 0; i < num_vertices; i++) {
        for (int j = 0; j < num_vertices; j++) {
            graph[i][j] = 0;
        }
        visited[i] = false;
    }
}

// Function to add an edge between two vertices
void addEdge(int u, int v) {
    graph[u][v] = 1;
    graph[v][u] = 1;
}

// Function to perform BFS
void bfs(int start_vertex, int num_vertices) {
    queue<int> q;

    // Initialize the BFS starting point
    visited[start_vertex] = true;
    q.push(start_vertex);

    cout << "BFS traversal starting from vertex " << start_vertex << ":\n";

    while (!q.empty()) {
        int current_vertex = q.front();
        q.pop();
        cout << current_vertex << " ";

        // Traverse all adjacent vertices
        for (int i = 0; i < num_vertices; i++) {
            if (graph[current_vertex][i] == 1 && !visited[i]) {
                visited[i] = true;
                q.push(i);
            }
        }
    }
    cout << endl;
}

int main() {
    int num_vertices = 5;

    // Initialize the graph with 5 vertices
    initializeGraph(num_vertices);

    // Set edges based on the provided structure
    addEdge(0, 1);
    addEdge(0, 2);
    addEdge(1, 3);
    addEdge(2, 3);
    addEdge(2, 4);

    int start_vertex = 0;  // Starting vertex for BFS
    bfs(start_vertex, num_vertices);

    return 0;
}
