#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

struct segTree{
    int n;
    vector<ll>st;
    segTree(int s){
        n = 2 * pow(2, ceil(log2(s))) - 1;
        st.resize(n, 0);
    }

    void update(int i, int newV){
        i += n/2;
        st[i] += newV;
        while (i){
            i = (i-1)/2;
            st[i] = st[i*2+1] + st[i*2+2];
        }
    }

    ll query(int ql, int qr, int l, int r, int i){
        if(l >= qr || r <= ql)return 0;
        if(l >= ql && r <= qr)return st[i];
        int mid = (l+r)/2;
        return query(ql, qr, l, mid, i*2+1) + query(ql, qr, mid, r, i*2+2);
    }

    ll query(int ql, int qr){
        return query(ql, qr, 0, n/2+1, 0);
    }
};