#include <iostream>
#include <vector>
#include <stack>

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

// Function to perform DFS using a stack
void dfs(int start_vertex, int num_vertices) {
    stack<int> s;
    s.push(start_vertex);

    cout << "DFS traversal starting from vertex " << start_vertex << ":\n";

    while (!s.empty()) {
        int current_vertex = s.top();
        s.pop();

        // If the current vertex is not visited
        if (!visited[current_vertex]) {
            visited[current_vertex] = true;
            cout << current_vertex << " ";

            // Push all adjacent vertices onto the stack (in reverse order for consistent traversal)
            for (int i = num_vertices - 1; i >= 0; i--) {
                if (graph[current_vertex][i] == 1 && !visited[i]) {
                    s.push(i);
                }
            }
        }
    }
    cout << endl;
}

int main() {
    int num_vertices = 5;

    initializeGraph(num_vertices);

    // Set edges based on the provided structure
    addEdge(0, 1);
    addEdge(0, 2);
    addEdge(1, 3);
    addEdge(2, 3);
    addEdge(2, 4);

    int start_vertex = 0; // Starting vertex for DFS
    dfs(start_vertex, num_vertices);

    return 0;
}
