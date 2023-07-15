#include <vector>
using namespace std;

class UnionFind {
private:
    vector<int> parent;  // Array to hold parent of each element
public:
    // Constructor
    UnionFind(int size) {
        parent.resize(size);
        for (int i = 0; i < size; i++) {
            parent[i] = i; // At first, every element is its own parent
        }
    }
    // Find function
    int find(int node) {
        while (node != parent[node]) {
            node = parent[node];
        }
        return node; // This node is a representative of its subset
    }
    // Union function
    void unionSet(int node1, int node2) {
        int root1 = find(node1);
        int root2 = find(node2);
        if (root1 != root2) { // If they are not already in the same set
            parent[root1] = root2;
        }
    }
};
