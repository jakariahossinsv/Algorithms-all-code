#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void dfs_iterative(int start, vector<vector<int>> &adj, int n) {
    vector<bool> visited(n, false);
    stack<int> s;

    s.push(start);

    cout << "DFS Iterative Traversal: ";

    while (!s.empty()) {
        int node = s.top();
        s.pop();

        if (!visited[node]) {
            visited[node] = true;
            cout << node << " ";

            // Push neighbors in reverse order (simple version)
            for (int i = adj[node].size() - 1; i >= 0; i--) {
                int neighbor = adj[node][i];
                if (!visited[neighbor]) {
                    s.push(neighbor);
                }
            }
        }
    }

    cout << endl;
}

int main() {
    int n = 6;
    vector<vector<int>> adj(n);

    // Undirected graph edges
    adj[0] = {1, 2};
    adj[1] = {0, 3};
    adj[2] = {0, 4};
    adj[3] = {1, 5};
    adj[4] = {2};
    adj[5] = {3};

    dfs_iterative(0, adj, n); // Start DFS from node 0

return 0;
}
