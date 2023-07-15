#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

struct segTree {
    int n;
    vector<ll> st, lazy;
    
    // Constructor: initialize segment tree and lazy arrays with appropriate size and values.
    segTree(int s) {
        n = 2 * pow(2, ceil(log2(s))) - 1; // calculate the size of the segment tree array.
        st.resize(n, 0); // initialize segment tree array with zero
        lazy.resize(n, 0); // initialize lazy propagation array with zero
    }

    // push: function to "push" the lazy value down to the children of node i
    void push(int i, int l, int r) {
        if (lazy[i] != 0) { // if there is a pending update
            st[i] += (r - l) * lazy[i]; // apply the update to the current node
            if (r - l > 1) { // if the current node is not a leaf node
                lazy[i*2+1] += lazy[i]; // propagate the update to the left child
                lazy[i*2+2] += lazy[i]; // propagate the update to the right child
            }
            lazy[i] = 0; // reset the lazy value for the current node
        }
    }

    // updateRange: function to update a range [ql, qr) by a value
    void updateRange(int ql, int qr, int val, int l, int r, int i) {
        push(i, l, r); // push the lazy value to children
        if (l >= qr || r <= ql) return; // if the current interval does not intersect the update interval, return
        if (l >= ql && r <= qr) { // if the current interval is completely within the update interval
            lazy[i] += val; // store the update value in lazy array for further propagation
            push(i, l, r); // push the lazy value to children
            return;
        }
        int mid = (l + r) / 2; // calculate the middle point
        updateRange(ql, qr, val, l, mid, i*2+1); // update the left child
        updateRange(ql, qr, val, mid, r, i*2+2); // update the right child
        st[i] = st[i*2+1] + st[i*2+2]; // update the value of the current node based on children
    }

    // query: function to get the sum in a range [ql, qr)
    ll query(int ql, int qr, int l, int r, int i) {
        push(i, l, r); // push the lazy value to children
        if (l >= qr || r <= ql) return 0; // if the current interval does not intersect the query interval, return 0
        if (l >= ql && r <= qr) return st[i]; // if the current interval is completely within the query interval, return the value of the node
        int mid = (l + r) / 2; // calculate the middle point
        return query(ql, qr, l, mid, i*2+1) + query(ql, qr, mid, r, i*2+2); // return the sum of the query from the left and right child
    }

    // Overloaded function for user-friendly interface.
    void updateRange(int ql, int qr, int val) {
        updateRange(ql, qr, val, 0, n/2+1, 0);
    }

    // Overloaded function for user-friendly interface.
    ll query(int ql, int qr) {
        return query(ql, qr, 0, n/2+1, 0);
    }
};
