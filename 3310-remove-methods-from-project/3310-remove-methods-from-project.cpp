#include <vector>

class Solution {
public:
    void dfs(int u, const std::vector<std::vector<int>>& adj, std::vector<bool>& suspicious) {
        suspicious[u] = true;
        for (int v : adj[u]) {
            if (!suspicious[v]) {
                dfs(v, adj, suspicious);
            }
        }
    }

    std::vector<int> remainingMethods(int n, int k, std::vector<std::vector<int>>& invocations) {
        std::vector<std::vector<int>> adj(n);
        for (const auto& edge : invocations) {
            adj[edge[0]].push_back(edge[1]);
        }

        std::vector<bool> suspicious(n, false);
        dfs(k, adj, suspicious);

        bool canRemove = true;
        for (const auto& edge : invocations) {
            int u = edge[0];
            int v = edge[1];
            if (!suspicious[u] && suspicious[v]) {
                canRemove = false;
                break;
            }
        }

        std::vector<int> result;
        if (canRemove) {
            for (int i = 0; i < n; ++i) {
                if (!suspicious[i]) {
                    result.push_back(i);
                }
            }
        } else {
            for (int i = 0; i < n; ++i) {
                result.push_back(i);
            }
        }

        return result;
    }
};