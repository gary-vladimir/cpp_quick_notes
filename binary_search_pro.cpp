#include<bits/stdc++.h>
using namespace std;

int binary_search_Joacru(vector<int> &arr, int n) {
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
// make sure all of the functions are correct and produce the correct output against all sort of edge cases. test all functions. 
int binary_search_Dani(vector<int> &arr, int x){
  int a = 0, b = arr.size()-1;
  while(a <= b){
    int mid = a + (b - a)/2;
    if(arr[mid] == x)return mid;
    if(arr[mid] < x)a = mid+1;
    else b = mid-1;
  }
  return -1;
}

int lower_bound(vector<int> &arr, int x){
  int a = 0, b = arr.size();
  while(a < b){
    int mid = a + (b - a)/2;
    if(arr[mid] < x)a = mid+1;
    else b = mid;
  }
  if(arr[a] == x)return a;
  return -1;
}

int upper_bound(vector<int> &arr, int x){
  int a = 0, b = arr.size();
  while(a < b){
    int mid = a + (b - a)/2;
    if(arr[mid] <= x)a = mid+1;
    else b = mid;
  }
  if(arr[a] > x)return a;
  return -1;
}
