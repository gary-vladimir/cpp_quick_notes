<!-- TOC start -->
- [c++ quick notes](#c-quick-notes)
  * [Input - Output](#input-output)
    + [get N size array](#get-n-size-array)
    + [get undefied size input](#get-undefied-size-input)
    + [Get entire line as string](#get-entire-line-as-string)
    + [Get input from a input.in file](#get-input-from-a-inputin-file)
    + [Get input using `scanf`](#get-input-using-scanf)
    + [Specify decimal places - Float for output format](#specify-decimal-places-float-for-output-format)
    + [Add enter after cout](#add-enter-after-cout)
    + [Print with custom width](#print-with-custom-width)
    + [Print to an output.out file](#print-to-an-outputout-file)
    + [Print using `printf`](#print-using-printf)
  * [Math](#math)
    + [Count how many digits in Int](#count-how-many-digits-in-int)
    + [Power and square root](#power-and-square-root)
    + [Less common multiple (LCM) and greatest common divisor (GCD)](#less-common-multiple-lcm-and-greatest-common-divisor-gcd)
    + [Get sum from 1 to n Inclusive](#get-sum-from-1-to-n-inclusive)
    + [Get sum from all digits from a to b inclusive](#get-sum-from-all-digits-from-a-to-b-inclusive)
    + [Get sum of all even numbers from 1 to n inclusive](#get-sum-of-all-even-numbers-from-1-to-n-inclusive)
    + [Get sum of all multiples of three between 1 and n](#get-sum-of-all-multiples-of-three-between-1-and-n)
    + [Formulas - Divisors and Primes](#formulas-divisors-and-primes)
    + [2 to the power of N](#2-to-the-power-of-n)
    + [Check if N is even using bits](#check-if-n-is-even-using-bits)
    + [Efficient and elegant way to ceil a division](#efficient-and-elegant-way-to-ceil-a-division)
    + [Elevate A to the power of N efficient recursion solution](#elevate-a-to-the-power-of-n-efficient-recursion-solution)
  * [Ints - Floats](#ints-floats)
    + [Sum large numbers](#sum-large-numbers)
    + [Get absolute value of Int](#get-absolute-value-of-int)
    + [Get last digit of Int](#get-last-digit-of-int)
    + [Get only decimal part from num](#get-only-decimal-part-from-num)
    + [Get min or max from two numbers](#get-min-or-max-from-two-numbers)
  * [Strings](#strings)
    + [Get lenght of string](#get-lenght-of-string)
    + [Convert entire string to upper case or lower case](#convert-entire-string-to-upper-case-or-lower-case)
    + [Invert a string](#invert-a-string)
    + [multi line string](#multi-line-string)
    + [Iterate through string](#iterate-through-string)
    + [Check if char in string](#check-if-char-in-string)
    + [Check if string in string](#check-if-string-in-string)
    + [Initialize string of N size and chars](#initialize-string-of-n-size-and-chars)
    + [Insert string in another string at index](#insert-string-in-another-string-at-index)
  * [Data types conversions](#data-types-conversions)
    + [Convert int to string](#convert-int-to-string)
    + [Convert char to int](#convert-char-to-int)
    + [Convert string to int](#convert-string-to-int)
    + [string to float](#string-to-float)
    + [string to double](#string-to-double)
    + [convert all letters of the alphabet to numbers 'a'-1, 'b'-2, 'c'-3, ...](#convert-all-letters-of-the-alphabet-to-numbers-a-1-b-2-c-3-)
    + [Convert char to uppercase](#convert-char-to-uppercase)
  * [Vector - array and matrix](#vector-array-and-matrix)
    + [Initialization](#initialization)
    + [Get length of arr](#get-length-of-arr)
    + [Reverse array](#reverse-array)
    + [Add element to array](#add-element-to-array)
    + [Remove last element of array](#remove-last-element-of-array)
    + [Remove element from array by Index](#remove-element-from-array-by-index)
    + [Remove element from array by value](#remove-element-from-array-by-value)
    + [Remove first element of array](#remove-first-element-of-array)
    + [Sort Array](#sort-array)
    + [Find element in array](#find-element-in-array)
  * [Pairs](#pairs)
    + [Initialization](#initialization-1)
    + [Sort array of pairs](#sort-array-of-pairs)
    + [Find the next greater element to value in an array](#find-the-next-greater-element-to-value-in-an-array)
  * [Maps](#maps)
    + [Initialization](#initialization-2)
    + [Map - Iteration](#map-iteration)
    + [Map - Check if Element exists on Map](#map-check-if-element-exists-on-map)
    + [Modify Map](#modify-map)
    + [Sort Direction of Map](#sort-direction-of-map)
  * [Sets](#sets)
    + [Initialization](#initialization-3)
    + [Check if element in set](#check-if-element-in-set)
    + [Iterating through set](#iterating-through-set)
    + [Erasing item from set](#erasing-item-from-set)
  * [Queues](#queues)
    + [Initialization](#initialization-4)
    + [Common methods](#common-methods)
  * [Binary Search](#binary-search)
  * [Sieve - Criba](#sieve-criba)
  * [Buscar cuantos divisores tiene N](#buscar-cuantos-divisores-tiene-n)
  * [Factorización Prima](#factorización-prima)
  * [Really Large Multiplication - Strings](#really-large-multiplication-strings)
  * [Really Large Sum - Strings](#really-large-sum-strings)
  * [Bit Mask - Check all possible combinations](#bit-mask-check-all-possible-combinations)
  * [Structs - Linked list example](#structs-linked-list-example)
<!-- TOC end -->
<!-- TOC --><a name="c-quick-notes"></a>
# c++ quick notes

<!-- TOC --><a name="input-output"></a>
## Input - Output

<!-- TOC --><a name="get-n-size-array"></a>
### get N size array

```cpp
int n; cin >> n;
vector<int> arr(n);
for (auto &e : arr) cin >> e;
```

<!-- TOC --><a name="get-undefied-size-input"></a>
### get undefied size input

```cpp
vector<string> words; // array to store our input
string str;
while(cin >> str){ // checking if there is more input
    words.push_back(str); // adding input to the array
}
// then you can get the size with: values.size();
```

<!-- TOC --><a name="get-entire-line-as-string"></a>
### Get entire line as string

```cpp
#include <string>
string full_input;
getline(cin, full_input);
```

<!-- TOC --><a name="get-input-from-a-inputin-file"></a>
### Get input from a input.in file

```cpp
#include <fstream>
ifstream input_file("mensajes.in");
input_file >> n; // instead of cin
```

<!-- TOC --><a name="get-input-using-scanf"></a>
### Get input using `scanf`

```cpp
#include<cstdio>
int n;
scanf("%d", &n); // int
float a;
scanf("%f", &a); // float
long long int n;
scanf("%lld", &n); // long long int
// getting strings is super inconvinient, use cin
```

```cpp
int a, b, c, d;
scanf("%d %d %d %d", &a, &b, &c, &d);
```

<!-- TOC --><a name="specify-decimal-places-float-for-output-format"></a>
### Specify decimal places - Float for output format

```cpp
#include <iomanip>
cout << setprecision(3) << fixed; // this prints nothing, only sets the next prints to have three decimal places.
```

<!-- TOC --><a name="add-enter-after-cout"></a>
### Add enter after cout

```cpp
cout << "Hello" << endl;
cout << "Hello2" << "\n"; // faster
```

<!-- TOC --><a name="print-with-custom-width"></a>
### Print with custom width

```cpp
#include <iomanip>
cout<<"Ints"<<setw(20);
cout<<"Floats"<<setw(20);
cout<<"Doubles"<<setw(20) << endl;
```

<!-- TOC --><a name="print-to-an-outputout-file"></a>
### Print to an output.out file

```cpp
#include <fstream>
ofstream output("mensajes.out");
output << "SI" << endl << "D"; // instead of cout
output.close();
```

<!-- TOC --><a name="print-using-printf"></a>
### Print using `printf`

```cpp
#include<cstdio>
int a;
float b;
scanf("%d", &a);
scanf("%f", &b);
printf("imprimiendo int: %d seguido del float %f enter \n", a,b);
```

<!-- TOC --><a name="math"></a>
## Math

<!-- TOC --><a name="count-how-many-digits-in-int"></a>
### Count how many digits in Int

```cpp
#include <cmath>
int n = 246510;
int length = n==0?1:(log10(n) + 1);
```

<!-- TOC --><a name="power-and-square-root"></a>
### Power and square root

```cpp
#include <cmath>

int power = pow(2,3); // 8
int square_root = sqrt(4); // 2
```

<!-- TOC --><a name="less-common-multiple-lcm-and-greatest-common-divisor-gcd"></a>
### Less common multiple (LCM) and greatest common divisor (GCD)

```cpp
int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }
int lcm(int a, int b) { return a * (b / gcd(a, b)); }
```

<!-- TOC --><a name="get-sum-from-1-to-n-inclusive"></a>
### Get sum from 1 to n Inclusive
```cpp
n*(n+1)/2
```

<!-- TOC --><a name="get-sum-from-all-digits-from-a-to-b-inclusive"></a>
### Get sum from all digits from a to b inclusive
```cpp
((a+b)*(b-a+1))/2
```

<!-- TOC --><a name="get-sum-of-all-even-numbers-from-1-to-n-inclusive"></a>
### Get sum of all even numbers from 1 to n inclusive
```cpp
if (n % 2 == 0)
  sumPares = ((n / 2) * (n + 2)) / 2;
else
  sumPares = (((n - 1) / 2) * ((n-1) + 2)) / 2;

sumImpares = (n * (n + 1) / 2) - sumPares;
```

<!-- TOC --><a name="get-sum-of-all-multiples-of-three-between-1-and-n"></a>
### Get sum of all multiples of three between 1 and n
```cpp
int sumMult = (n / 3) * (n + 3) / 2;
```

<!-- TOC --><a name="formulas-divisors-and-primes"></a>
### Formulas - Divisors and Primes

Get number by knowing it's primes and exponents
```
c = P1**q1 x P2**q2 x P3**q3 ... Pn**qn
```

formula para saber el número de divisores a partir de sus exponentes
Get the number of divisors from it's exponents
```
div = (1+q1)*(1+q2)*(1+q3)....(1+qn)
```

<!-- TOC --><a name="2-to-the-power-of-n"></a>
### 2 to the power of N

```cpp
(1<<n) // very efficient
```

<!-- TOC --><a name="check-if-n-is-even-using-bits"></a>
### Check if N is even using bits

```cpp
if(!(n & 1))cout << "even"; // very efficient
```

<!-- TOC --><a name="efficient-and-elegant-way-to-ceil-a-division"></a>
### Efficient and elegant way to ceil a division

```cpp
int res = (a/b) + (a%b!=0);
```

<!-- TOC --><a name="elevate-a-to-the-power-of-n-efficient-recursion-solution"></a>
### Elevate A to the power of N efficient recursion solution

```cpp
ll exp(ll a, ll n){
  if(n == 0)return 1;
  if(n == 1)return a;
  if(n%2 == 0){
    ll resultado = exp(a, n/2);
    return resultado * resultado;
  }else{
    return exp(a, n-1) * a;
  }
}
```

<!-- TOC --><a name="ints-floats"></a>
## Ints - Floats

<!-- TOC --><a name="sum-large-numbers"></a>
### Sum large numbers

instead of using int, use long long. To save time coding you can create a typedef ll

```cpp
typedef long long ll;
int suma; // -2147483648 and 2147483647 inclusive
long long suma; // -9223372036854775808 and 9223372036854775807, inclusive.
ll suma; // practical
```
easy to remember:
- int <= 10**9
- long long <= 10**18

<!-- TOC --><a name="get-absolute-value-of-int"></a>
### Get absolute value of Int

```cpp
#include <cstdlib>
cout << abs(-5); // 5
```

<!-- TOC --><a name="get-last-digit-of-int"></a>
### Get last digit of Int

```cpp
int last_digit_of_year = year % 10;
int last_two_digits_of_year = year % 100;
```

<!-- TOC --><a name="get-only-decimal-part-from-num"></a>
### Get only decimal part from num

```cpp
// Method 1
#include <cmath>
double n = 536.856;
double entero;
double decimal = modf(n, &entero);
cout << entero << decimal;

// Method 2
string entero, decimal;
getline(cin, entero, '.');
getline(cin, decimal);
int entero = stoi(entero);
int decimal = stoi(decimal);
```

<!-- TOC --><a name="get-min-or-max-from-two-numbers"></a>
### Get min or max from two numbers

```cpp
int mi = min(5, 3) // 3
int ma = max(5, 3) // 5
```

<!-- TOC --><a name="strings"></a>
## Strings

In c++ strings are mutable like an array

<!-- TOC --><a name="get-lenght-of-string"></a>
### Get lenght of string

```cpp
int length = str.size();
```

<!-- TOC --><a name="convert-entire-string-to-upper-case-or-lower-case"></a>
### Convert entire string to upper case or lower case

```cpp
for (auto &e : str) e = tolower(e);
```

<!-- TOC --><a name="invert-a-string"></a>
### Invert a string

```cpp
#include <algorithm>
string str = "Hola";
reverse(str.begin(), str.end());
cout << str; // aloH
```

<!-- TOC --><a name="multi-line-string"></a>
### multi line string

if you have a shape, and you want to save it as a string. Alt+92 \

```cpp
string shape =
"\
shape with spaces and everything\n\
        test it out\n\
";
```

<!-- TOC --><a name="iterate-through-string"></a>
### Iterate through string

```cpp
for (char &c : str) { // <----- for char in string
    /* Code */
}
```

<!-- TOC --><a name="check-if-char-in-string"></a>
### Check if char in string

```cpp
if (str.find(c) < str.size()) {
    /* Code */
}
```

<!-- TOC --><a name="check-if-string-in-string"></a>
### Check if string in string

```cpp
if (str.find(str2) != string::npos) {
//.. found.
}
```

<!-- TOC --><a name="initialize-string-of-n-size-and-chars"></a>
### Initialize string of N size and chars

```cpp
string row(5,'a'); // ->"aaaaa" second param must be char
```

<!-- TOC --><a name="insert-string-in-another-string-at-index"></a>
### Insert string in another string at index

```cpp
str1.insert(str2, index);
```

<!-- TOC --><a name="data-types-conversions"></a>
## Data types conversions

<!-- TOC --><a name="convert-int-to-string"></a>
### Convert int to string

```cpp
string str_number = to_string(number);
```

<!-- TOC --><a name="convert-char-to-int"></a>
### Convert char to int

```cpp
int a = character - '0';
```

<!-- TOC --><a name="convert-string-to-int"></a>
### Convert string to int

```cpp
int b = stoi(str_b);
```

<!-- TOC --><a name="string-to-float"></a>
### string to float

```cpp
float b = stof(str);
```

<!-- TOC --><a name="string-to-double"></a>
### string to double

```cpp
double b = stod(str);
```

<!-- TOC --><a name="convert-all-letters-of-the-alphabet-to-numbers-a-1-b-2-c-3-"></a>
### convert all letters of the alphabet to numbers 'a'-1, 'b'-2, 'c'-3, ...

```cpp
int char_to_int(char a){
  return (int)a-'a'+1;
}
```

<!-- TOC --><a name="convert-char-to-uppercase"></a>
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

<!-- TOC --><a name="vector-array-and-matrix"></a>
## Vector - array and matrix

<!-- TOC --><a name="initialization"></a>
### Initialization

```cpp
#include <vector>
vector<int> arr(2,0); // array(length, values)

vector<vector<int>> matrix(height, vector<int>(width, 0));
```

<!-- TOC --><a name="get-length-of-arr"></a>
### Get length of arr

```cpp
int lenght = arr.size();
```

<!-- TOC --><a name="reverse-array"></a>
### Reverse array

```cpp
reverse(arr.begin(), arr.end());
```

<!-- TOC --><a name="add-element-to-array"></a>
### Add element to array

```cpp
arr.push_back(5); // inserts 5 at the end of array
```

<!-- TOC --><a name="remove-last-element-of-array"></a>
### Remove last element of array

```cpp
arr.pop_back()
```

<!-- TOC --><a name="remove-element-from-array-by-index"></a>
### Remove element from array by Index

```cpp
arr.erase(arr.begin() + index);
```

<!-- TOC --><a name="remove-element-from-array-by-value"></a>
### Remove element from array by value

```cpp
arr.erase(remove(arr.begin(), arr.end(), value), arr.end());
```

<!-- TOC --><a name="remove-first-element-of-array"></a>
### Remove first element of array

```cpp
arr.pop_front()
```

<!-- TOC --><a name="sort-array"></a>
### Sort Array

```cpp
#include <algorithm>
sort(arr.begin(), arr.end());   // acsending order
sort(arr.rbegin(), arr.rend()); // decending order
```

<!-- TOC --><a name="find-element-in-array"></a>
### Find element in array

```cpp
#include <bits/stdc++.h>
auto itr = find(arr.begin(), arr.end(), element_to_look_for);
int index = itr - arr.begin();
```

<!-- TOC --><a name="pairs"></a>
## Pairs

<!-- TOC --><a name="initialization-1"></a>
### Initialization

```c
#include <algorithm>
pair<int, string> person;
person.first = id_int;
person.second = name_string;
// {1, "Gary"}
```

<!-- TOC --><a name="sort-array-of-pairs"></a>
### Sort array of pairs

when you apply a sort on an array of pairs, the ordering is going to happen in relation with the first value of the pair

```c
vector<pair<int, int>> personas_famosas; // {fans, id}
```

```cpp
sort(personas_famosas.rbegin(), personas_famosas.rend()); // decending order
```

<!-- TOC --><a name="find-the-next-greater-element-to-value-in-an-array"></a>
### Find the next greater element to value in an array
This method has a time complexity of O(log(n)) and only works on sorted arrays.
```cpp
vector<int>arr = {10,20,50,50,51,60,90,100};
auto itr = upper_bound(arr.begin(), arr.end(), 50);
cout << "Index: " << itr - arr.begin() << " Value:" << *itr;
```

<!-- TOC --><a name="maps"></a>
## Maps

maps are containers that can store elements formed by a combination of a key and value. By default, the map is in acsending order based on it's keys. They are normaly used if you want to efficiently find if an element is in the container.

<!-- TOC --><a name="initialization-2"></a>
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

<!-- TOC --><a name="map-iteration"></a>
### Map - Iteration

```cpp
for(auto& e:my_map){
    cout << e.first << e.second << endl;
  }
```

<!-- TOC --><a name="map-check-if-element-exists-on-map"></a>
### Map - Check if Element exists on Map

```cpp
if(MAP[element]){
  cout << MAP[element].first << " " << MAP[element].second;
}
```

<!-- TOC --><a name="modify-map"></a>
### Modify Map

```cpp
my_map[element] = new_value;
```

<!-- TOC --><a name="sort-direction-of-map"></a>
### Sort Direction of Map

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

<!-- TOC --><a name="sets"></a>
## Sets
Sets don't allow for duplicate numbers and are sorted, very useful for find and upper_bound
<!-- TOC --><a name="initialization-3"></a>
### Initialization

```cpp
#include <set>
set<int>my_set;
my_set.insert(20);
```

<!-- TOC --><a name="check-if-element-in-set"></a>
### Check if element in set

```cpp
bool is_in = my_set.find(element) != my_set.end();
```

<!-- TOC --><a name="iterating-through-set"></a>
### Iterating through set

```cpp
for(auto e:my_set){
  cout << e << ",";
}
```

<!-- TOC --><a name="erasing-item-from-set"></a>
### Erasing item from set
```cpp
mySet.erase(3); // erase by value
auto it = mySet.find(4);
mySet.erase(it); // erase by iterator - useful for lower_bound

auto a = mySet.find(2);
auto b = mySet.find(5);
mySet.erase(a,b); // remove range [a, b)
```

<!-- TOC --><a name="queues"></a>
## Queues

<!-- TOC --><a name="initialization-4"></a>
### Initialization

```cpp
#include <queue>
queue<int>my_queue;
```

<!-- TOC --><a name="common-methods"></a>
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

<!-- TOC --><a name="binary-search"></a>
## Binary Search

The following code demostrates a non-recursive solution for a binary search

```cpp
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
```

<!-- TOC --><a name="sieve-criba"></a>
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

<!-- TOC --><a name="buscar-cuantos-divisores-tiene-n"></a>
## Buscar cuantos divisores tiene N

```cpp
int num_divisors(int n) {
  // vector<int>divisores;
  int contador = 0;
  int limite = sqrt(n);
  for (int i = 1; i <= limite; ++i) {
    if (n % i == 0) {
      // divisores.push_back(i);
      contador++;
      if (i * i == n) {
        continue;
      }
      // divisores.push_back(n/i);
      contador++;
    }
  }
  return contador;
}
```

<!-- TOC --><a name="factorización-prima"></a>
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

<!-- TOC --><a name="really-large-multiplication-strings"></a>
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

<!-- TOC --><a name="really-large-sum-strings"></a>
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

<!-- TOC --><a name="bit-mask-check-all-possible-combinations"></a>
## Bit Mask - Check all possible combinations

```cpp
vector<int>arr(n);
for(int i=0; i<n; i++)cin >> arr[i];

int final_mask = 1<<n;
for(int mask=0; mask<final_mask; mask++){
  int suma = 0;
  for(int i=n-1; i>=0; i--){
    if(mask & (1<<i)){cout << "X"; suma += arr[i];}
    else cout << "A";
  }
  cout << " " << suma <<"\n";
}
```

<!-- TOC --><a name="structs-linked-list-example"></a>
## Structs - Linked list example

```cpp
struct element {
  int i, j;
  bool operator<(const element &b) const { return j < b.j; }
};

struct Node {
  int value;
  Node *next;
};

struct Linked_List {
  Node *head = NULL;
  Node *tail = NULL;
  int num_elements = 0;
  void push(int value) {
    Node *new_node = new Node;
    new_node->value = value;
    new_node->next = NULL;
    if (head == NULL) {
      head = new_node;
      tail = head;
    } else {
      tail->next = new_node;
      tail = tail->next;
    }
    num_elements++;
  }
};
```

```cpp
Linked_List my_list // <-- create my_list object
element example = {2, 3};
vector<element> arr; // <-- arr of custom made elements
arr.push_back(example);
```
