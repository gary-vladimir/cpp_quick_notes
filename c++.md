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

### Get min or max from two numbers

```cpp
#include <algorithm>
int mi = min(5, 3) // 3
int ma = max(5, 3) // 5

```

## Strings

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

### Invert a string

```cpp
#include <bits/stdc++.h>
string str = "Hola";
reverse(str.begin(), str.end());
cout << str; // aloH
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

### Initialize string of N size and chars

```cpp
string row(5,'a'); // ->"aaaaa" second param must be char
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
vector<int> result(2,0); // array(size, values)
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

### Binary Search

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
