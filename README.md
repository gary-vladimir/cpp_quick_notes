- [c++ quick notes](#c---quick-notes)
  - [Get Input](#get-input)
    - [get N size array](#get-n-size-array)
    - [get undefied size input](#get-undefied-size-input)
    - [Get entire line as string](#get-entire-line-as-string)
    - [Get input from a input.in file](#get-input-from-a-inputin-file)
  - [Math](#math)
    - [Count how many digits in Int](#count-how-many-digits-in-int)
    - [Power and square root](#power-and-square-root)
    - [Less common multiple (LCM) and greatest common divisor (GCD)](#less-common-multiple--lcm--and-greatest-common-divisor--gcd-)
    - [Sumar todos los números de 1 a N](#sumar-todos-los-n-meros-de-1-a-n)
    - [Elevate A to the power of N efficient recursion solution](#elevate-a-to-the-power-of-n-efficient-recursion-solution)
  - [Printing](#printing)
    - [Specify decimal places - Float](#specify-decimal-places---float)
    - [Add enter after cout](#add-enter-after-cout)
    - [Print with custom width](#print-with-custom-width)
    - [Print to an output.out file](#print-to-an-outputout-file)
  - [Ints - Floats](#ints---floats)
    - [Sum large numbers](#sum-large-numbers)
    - [Get absolute value of Int](#get-absolute-value-of-int)
    - [Get last digit of Int](#get-last-digit-of-int)
    - [Get only decimal part from num](#get-only-decimal-part-from-num)
    - [Get min or max from two numbers](#get-min-or-max-from-two-numbers)
  - [Strings](#strings)
    - [Get lenght of string](#get-lenght-of-string)
    - [Convert entire string to upper case or lower case](#convert-entire-string-to-upper-case-or-lower-case)
    - [Invert a string](#invert-a-string)
    - [multi line string](#multi-line-string)
    - [Iterate through string](#iterate-through-string)
    - [Check if char in string](#check-if-char-in-string)
    - [Check if string in string](#check-if-string-in-string)
    - [Initialize string of N size and chars](#initialize-string-of-n-size-and-chars)
    - [Insert string in another string at index](#insert-string-in-another-string-at-index)
  - [Data types conversions](#data-types-conversions)
    - [Convert int to string](#convert-int-to-string)
    - [Convert char to int](#convert-char-to-int)
    - [Convert string to int](#convert-string-to-int)
    - [convert all letters of the alphabet to numbers 'a'-1, 'b'-2, 'c'-3, ...](#convert-all-letters-of-the-alphabet-to-numbers--a--1---b--2---c--3--)
    - [Convert char to uppercase](#convert-char-to-uppercase)
  - [Vector arrays](#vector-arrays)
    - [Initialization](#initialization)
    - [Get length of arr](#get-length-of-arr)
    - [Reverse array](#reverse-array)
    - [Add element to array](#add-element-to-array)
    - [Remove last element of array](#remove-last-element-of-array)
    - [Remove element from array by Index](#remove-element-from-array-by-index)
    - [Remove element from array by value](#remove-element-from-array-by-value)
    - [Remove first element of array](#remove-first-element-of-array)
    - [Sort Array](#sort-array)
    - [Find element in array](#find-element-in-array)
  - [Pairs](#pairs)
    - [Initialization](#initialization-1)
    - [Sort array of pairs](#sort-array-of-pairs)
    - [Find the next greater element to value in an array](#find-the-next-greater-element-to-value-in-an-array)
  - [Maps](#maps)
    - [Initialization](#initialization-2)
    - [Map - Iteration](#map---iteration)
    - [Map - find element](#map---find-element)
    - [Modify Map](#modify-map)
    - [Sort Map](#sort-map)
  - [Sets](#sets)
    - [Initialization](#initialization-3)
    - [Check if element in set](#check-if-element-in-set)
    - [Iterating through set](#iterating-through-set)
  - [Tuples](#tuples)
    - [Initialization](#initialization-4)
    - [Print values in tuple](#print-values-in-tuple)
    - [Modify values in tuple](#modify-values-in-tuple)
    - [Sort array of tuples](#sort-array-of-tuples)
  - [Queues](#queues)
    - [Initialization](#initialization-5)
    - [Common methods](#common-methods)
  - [Binary Search](#binary-search)
  - [Sieve - Criba](#sieve---criba)
  - [Factorización Prima](#factorizaci-n-prima)
  - [Really Large Multiplication - Strings](#really-large-multiplication---strings)
  - [Really Large Sum - Strings](#really-large-sum---strings)

# c++ quick notes

## Get Input

### get N size array

```cpp
int n;
cin >> n;
int numbers[n];
for (int i = 0; i < n; i++) {
    int in_;
    cin >> in_;
    numbers[i] = in_;
}
```

### get undefied size input

```cpp
vector<float> values; // array to store our input
float input;
while(cin >> input){ // checking if there is more input
    values.push_back(input); // adding input to the array
}
// then you can get the size with: values.size();
```

### Get entire line as string

```cpp
#include <string>

string full_input;
getline(cin, full_input);
```

### Get input from a input.in file

```cpp
#include <fstream>
ifstream input_file("mensajes.in");
input_file >> n; // instead of cin
```

## Math

### Count how many digits in Int

```cpp
#include <cmath>
int length = (log10(number) + 1); } // <---- log10()
```

### Power and square root

```cpp
#include <cmath>

int power = pow(2,3); // 8
int square_root = sqrt(4); // 2
```

### Less common multiple (LCM) and greatest common divisor (GCD)

```cpp
int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }
int lcm(int a, int b) { return a * (b / gcd(a, b)); }
```

### Sumar todos los números de 1 a N

fórmula para fácilmente sumar todos los números de 1 a n

```cpp
n*(n+1)/2
```

formula para sumar todos los números de A - B

```cpp
((a+b)*(b-a+1))/2
```

### Elevate A to the power of N efficient recursion solution

```cpp
typedef long long int llint;

llint exp(llint a, llint n){
  if(n == 0)return 1;
  if(n == 1)return a;
  if(n%2 == 0){
    llint resultado = exp(a, n/2);
    return resultado * resultado;
  }else{
    return exp(a, n-1) * a;
  }
}
```

## Printing

### Specify decimal places - Float

```cpp
#include <iomanip>

cout << setprecision(3) << fixed; // this prints nothing, only sets the next prints to have three decimal places.
```

### Add enter after cout

```cpp
cout << "Hello" << endl;
```

### Print with custom width

```cpp
#include <iomanip>

cout<<"Ints"<<setw(20);
cout<<"Floats"<<setw(20);
cout<<"Doubles"<<setw(20) << endl;
```

### Print to an output.out file

```cpp
#include <fstream>
ofstream output("mensajes.out");
output << "SI" << endl << "D"; // instead of cout
output.close();
```

## Ints - Floats

### Sum large numbers

instead of using int, use long

```cpp
int suma; // Before
long suma; // After
```

### Get absolute value of Int

```cpp
#include <cstdlib>
cout << abs(-5); // 5
```

### Get last digit of Int

```cpp
int last_digit_of_year = year % 10;
int last_two_digits_of_year = year % 100;
```

### Get only decimal part from num

```cpp
// Method 1
#include <cmath>
double n = 536.856;
double entero;
double decimal = modf(input, &entero);
cout << entero << decimal;

// Method 2
string entero, decimal;
getline(cin, entero, '.');
getline(cin, decimal);
int entero = stoi(entero);
int decimal = stoi(decimal);
```

### Get min or max from two numbers

```cpp
#include <algorithm>
int mi = min(5, 3) // 3
int ma = max(5, 3) // 5

```

## Strings

In c++ strings are mutable like an array

### Get lenght of string

```cpp
int length = str.size();
```

### Convert entire string to upper case or lower case

```cpp
#include <algorithm>

for_each(str.begin(), str.end(), [](char & c) {
    c = ::toupper(c);
});
```

```cpp
#include <bits/stdc++.h>
transform(str.begin(), str.end(), str.begin(), ::tolower);
```

### Invert a string

```cpp
#include <bits/stdc++.h>
string str = "Hola";
reverse(str.begin(), str.end());
cout << str; // aloH
```

### multi line string

if you have a shape, and you want to save it as a string. Alt+92 \

```cpp
string shape =
"\
shape with spaces and everything\n\
        taste it out\n\
";
```

### Iterate through string

```cpp
for (char& c : str) { // <----- for char in string
    /* Code */
}
```

### Check if char in string

```cpp
if (str.find(c) < str.length()) {
    /* Code */
}
```

### Check if string in string

```cpp
if (str.find(str2) != string::npos) {
//.. found.
}
```

### Initialize string of N size and chars

```cpp
string row(5,'a'); // ->"aaaaa" second param must be char
```

### Insert string in another string at index

```cpp
str1.insert(str2, index);
```

## Data types conversions

### Convert int to string

```cpp
string str_number = to_string(number);
```

### Convert char to int

```cpp
int a = character - '0';
```

### Convert string to int

```cpp
int b = stoi(str_b);
```

### convert all letters of the alphabet to numbers 'a'-1, 'b'-2, 'c'-3, ...

```cpp
int char_to_int(char a){
  return (int)a-'a'+1;
}
```

### Convert char to uppercase

Method 1

```cpp
char char_ = 'd';
int char_int = char_ - 'a';
char char_upper = char_int + 'A';
```

Method 2

```cpp
#include <cctype>
char char_upper = toupper('d'); // Output: 'D'
```

## Vector arrays

### Initialization

```cpp
#include <vector>
vector<int> arr(2,0); // array(length, values)

vector<vector<int>> matrix(height, vector<int>(width, 0));
```

### Get length of arr

```cpp
int lenght = arr.size();
```

### Reverse array

```cpp
reverse(arr.begin(), arr.end());
```

### Add element to array

```cpp
arr.push_back(5); // inserts 5 at the end of array
```

### Remove last element of array

```cpp
arr.pop_back()
```

### Remove element from array by Index

```cpp
arr.erase(arr.begin() + index);
```

### Remove element from array by value

```cpp
arr.erase(remove(arr.begin(), arr.end(), value), arr.end());
```

### Remove first element of array

```cpp
arr.pop_front()
```

### Sort Array

```cpp
#include <algorithm>
sort(arr.begin(), arr.end());   // acsending order
sort(arr.rbegin(), arr.rend()); // decending order
```

### Find element in array

```cpp
#include <bits/stdc++.h>
auto itr = find(arr.begin(), arr.end(), element_to_look_for);
int index = itr - arr.begin();
```

## Pairs

### Initialization

```c
#include <utility>
pair<int, string> person;
person.first = id_int;
person.second = name_string;
// {1, "Gary"}
```

### Sort array of pairs

when you apply a sort on an array of pairs, the ordering is going to happen in relation with the first value of the pair

```c
vector<pair<int, int>> personas_famosas; // {fans, id}
```

```cpp
sort(personas_famosas.rbegin(), personas_famosas.rend()); // decending order
```

### Find the next greater element to value in an array

```cpp
// arr = {10,20,5,30,20,10,10,20};
vector<int>::iterator upper = upper_bound(arr.begin(), arr.end(), 20);
int a = upper - arr.begin(); // this will return the index 3
```

## Maps

maps are containers that can store elements formed by a combination of a key and value. By default, the map is in acsending order based on it's keys. They are normaly used if you want to efficiently find if an element is in the container.

### Initialization

```cpp
#include <map>
map<int, int> my_map;
// add elements with insert
my_map.insert({ 2, 30 });
my_map.insert({ 1, 40 });
my_map.insert({ 3, 20 });
my_map.insert({ 4, 50 });
// add elements method 2
my_map[5] = 60;
my_map[6] = 80;
```

### Map - Iteration

```cpp
for(auto& e:my_map){
    cout << e.first << e.second << endl;
  }
```

### Map - find element

```cpp
#include <bits/stdc++.h> // find()
auto itr = my_map.find(3); // it returns an iterator
cout << itr->first << '\t' << itr->second << '\n'; // print the key and value
```

```cpp
bool is_in = my_map.find(element) != my_map.end();
```

### Modify Map

```cpp
// Method 1
auto itr = my_map.find(element);
itr->second = new_second_value;

// Method2
my_map[element] = new_second_value;
```

### Sort Map

`grater<int>` makes it have a decending order, without it, it would have an acending order

```cpp
#include <bits/stdc++.h>
void sort(map<string, int>& M) {
  multimap<int, string, greater<int> > MM;  // Declare a multimap

  for (auto& it : M) {
    MM.insert({it.second, it.first});
  }
  for (auto& it : MM) {
    cout << it.second << ' ' << it.first << endl;
  }
}
```

## Sets

### Initialization

```cpp
#include <set>
set<int>my_set;
my_set.insert(20);
```

### Check if element in set

```cpp
bool is_in = my_set.find(element) != my_set.end();
```

### Iterating through set

```cpp
for(auto itr:my_set){
  cout << itr << ",";
}
```

## Tuples

### Initialization

```cpp
#include<tuple>
tuple<int, int, int, int> my_tuple;
my_tuple = make_tuple(0,1,2,3);
```

### Print values in tuple

```cpp
cout << get<0>(my_tuple) << " " << get<1>(my_tuple) << " " << get<2>(my_tuple) << endl;
```

### Modify values in tuple

```cpp
get<0>(my_tuple) = new_value;
```

### Sort array of tuples

```cpp
vector<tuple<int,int,int,int>>arr;
tuple<int, int, int, int> my_tuple;
// ... create tuples and adding them to array ...
sort(arr.begin(), arr.end()); // in relation to first element of the pair, if tie, in relation to second, if tie again, in relation to third element and so on.
```

## Queues

### Initialization

```cpp
#include <queue>
queue<int>my_queue;
```

### Common methods

```cpp
my_queue.push(10);
my_queue.push(20);
my_queue.size() // 2;
my_queue.empty() // false;
my_queue.front() // 10
my_queue.back() // 20
my_queue.pop() // removes front;
```

## Binary Search

The following code demostrates a non-recursive solution for a binary search

```cpp
int binary_search(vector<int> arr, int n) {
  int index_a = 0;
  int index_b = arr.size() - 1;
  while (index_a <= index_b) {
    int k = ((index_b - index_a) / 2) + index_a;
    if (arr[k] == n) return k;
    if (arr[k] < n)
      index_a = k + 1;
    else
      index_b = k - 1;
  }
  return -1;  // if found nothing, return -1
}
```

## Sieve - Criba

```cpp
const int MAX = 1000010;
vector<ll> primos;

void init_criba() {
  bitset<MAX> criba;
  criba[0] = criba[1] = 1;
  primos.push_back(2);
  for (ll i = 3; i < MAX; i += 2) {
    if (criba[i] == 0) {
      primos.push_back(i);
      for (ll j = i; j < MAX; j += i) criba[j] = 1;
    }
  }
}
```

## Factorización Prima

```cpp
vector<ll> factores_primos(ll N) {
  vector<ll> factores;
  ll limit = sqrt(N);
  for (int i = 0; i < primos.size() && primos[i] <= limit; i++) {
    bool add = true;
    while (N % primos[i] == 0) {
      if (add) {
        factores.push_back(primos[i]);
        add = false;
      }
      N /= primos[i];
    }
  }
  if (N > 1) factores.push_back(N);
  return factores;
}
```

## Really Large Multiplication - Strings

```cpp
string multiply(string num1, string num2) {
  int len1 = num1.size();
  int len2 = num2.size();
  if (len1 == 0 || len2 == 0) return "0";
  vector<int> result(len1 + len2, 0);
  int i_n1 = 0;
  int i_n2 = 0;
  for (int i = len1 - 1; i >= 0; i--) {
    int carry = 0;
    int n1 = num1[i] - '0';
    i_n2 = 0;
    for (int j = len2 - 1; j >= 0; j--) {
      int n2 = num2[j] - '0';
      int sum = n1 * n2 + result[i_n1 + i_n2] + carry;
      carry = sum / 10;
      result[i_n1 + i_n2] = sum % 10;
      i_n2++;
    }
    if (carry > 0) result[i_n1 + i_n2] += carry;

    i_n1++;
  }
  int i = result.size() - 1;
  while (i >= 0 && result[i] == 0) i--;
  if (i == -1) return "0";
  string s = "";

  while (i >= 0) s += to_string(result[i--]);

  return s;
}
```

## Really Large Sum - Strings

```cpp
string findSum(string str1, string str2) {
  if (str1.length() > str2.length()) swap(str1, str2);
  string str = "";
  int n1 = str1.length(), n2 = str2.length();
  int diff = n2 - n1;
  int carry = 0;
  for (int i = n1 - 1; i >= 0; i--) {
    int sum = ((str1[i] - '0') + (str2[i + diff] - '0') + carry);
    str.push_back(sum % 10 + '0');
    carry = sum / 10;
  }

  for (int i = n2 - n1 - 1; i >= 0; i--) {
    int sum = ((str2[i] - '0') + carry);
    str.push_back(sum % 10 + '0');
    carry = sum / 10;
  }

  if (carry) str.push_back(carry + '0');

  reverse(str.begin(), str.end());

  return str;
}
```
