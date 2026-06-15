# Pass by Value in C++ – String Function Example

A beginner-friendly C++ program demonstrating the concept of **Pass by Value** using functions and strings.

This project helps beginners understand how changes made inside a function do not affect the original variable when values are passed by value.

---

## 📌 Features

* Demonstrates Pass by Value in C++
* Uses functions with string parameters
* Modifies string data inside a function
* Shows difference between original and copied values
* Beginner-friendly and easy to understand

---

## 🛠️ Technologies Used

* C++
* Standard Input/Output (`iostream`)
* String handling

---

## 📂 Program Logic

The program:

1. Creates a string variable:

   ```cpp id="5p7l1s"
   string s = "raj";
   ```

2. Passes the string to the `doSomething()` function

3. Inside the function:

   * The first character is changed from `'r'` to `'t'`
   * Modified string is printed

4. After the function call:

   * Original string remains unchanged
   * Original value is printed again

---

## 📸 Screenshot

<img width="680" height="562" alt="Screenshot 2026-06-15 064530" src="https://github.com/user-attachments/assets/cc367f56-e154-40dd-ac9c-67e87b9fa6d0" />

Example folder structure:

```txt id="w3m8dk"
project-folder/
│
├── main.cpp
├── README.md
└── screenshots/
    └── output.png
```

---

## 💻 Source Code

```cpp id="n8r2kp"
#include<iostream>
using namespace std;

// Pass by Value
void doSomething(string s) {

    s[0] = 't';

    cout << s << endl;
}

int main() {

    string s = "raj";

    doSomething(s);

    cout << s << endl;

    return 0;
}
```

---

## ▶️ How to Run

1. Compile the program:

```bash id="v2p7fj"
g++ main.cpp -o main
```

2. Run the executable:

```bash id="m8d3qa"
./main
```

---

## 📸 Example Output

```txt id="l5q2ze"
taj
raj
```

---

## 📖 Learning Concepts

This project helps beginners understand:

* Functions in C++
* Pass by Value
* String manipulation
* Function parameters
* Local copies of variables
* Scope of variables

---

## 🔍 Key Observation

Inside the function:

```cpp id="k9w3ls"
s[0] = 't';
```

The string changes to:

```txt id="g2v8rk"
taj
```

But outside the function, the original string remains:

```txt id="y1p7dc"
raj
```

This happens because the function receives a **copy** of the original string, not the original variable itself.

---

## 👨‍💻 Author

Developed as a beginner-friendly C++ practice project for learning functions and Pass by Value in C++.
