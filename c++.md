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

## Data types conversions

### Convert int to string

```cpp
string str_number = to_string(number);
```

### Convert char to int

````cpp
int a = character - '0';```
````

### Convert string to int

```cpp
int b = stoi(str_b);
```

## Vector arrays

### Initialization

```cpp
vector<int> result(2,0); // array(size, values)
```

### Get length of arr

```cpp
int lenght = arr.size();
```
