#include<bits/stdc++.h>
using namespace std;

int binary_search(vector<int> &arr, int n) {
  int a = -1;
  int b = arr.size();
  while (b - a > 1) {
    int mid = (a + b) / 2;
    if (arr[mid] < n)
      a = mid;
    else
      b = mid;
  }
  if (arr[b] == n) return b;
  return -1;
}