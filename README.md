# 📚 CS Fundamentals – C++

A structured collection of C++ programs covering core computer science fundamentals, organized by Mid and Final semester topics. This repository was built as a hands-on learning journal while studying C++ from scratch.

---

## 📁 Project Structure

```
CS-Fundamentals-CPP/
│
├── Mid/
│   ├── IP_LAB 1/              # Data types, operators, arithmetic expressions
│   ├── IP_LAB 2/              # Conditionals, loops, switch-case
│   ├── IP_LAB 3/              # Arrays, strings
│   ├── IP LAB 3/              # For loops, break & continue, reverse logic
│   ├── Pointer/               # Pointers and dynamic memory
│   ├── Ip hw/                 # In-practice homework (Lab tasks 1–3)
│   └── Mid Assignment/        # Mid-semester assignment solutions
│
└── Final/
    ├── Lab task/
    │   ├── Lab task 1/        # Classes, objects, member functions
    │   ├── Lab task 2/        # Encapsulation, operator overloading
    │   └── Lab task 3/        # Inheritance, bank account & mobile simulation
    ├── Lab xm.cpp             # Lab exam solution
    └── Assignment final.cpp   # Final assignment: multi-level inheritance
```

---

## 🧠 Topics Covered

### 🔷 Mid Semester

| Topic | Files |
|---|---|
| Data Types (`int`, `float`, `double`, `bool`, `char`) | `IP_LAB 1/DataTypes.cpp` |
| Arithmetic & Logical Operators | `IP_LAB 1/Operator.cpp`, `ArithmarticExpression.cpp` |
| Conditionals (`if/else`, `switch`) | `IP_LAB 2/SimpleCalculator.cpp`, `switch.cpp` |
| Loops (`for`, `while`, `break`, `continue`) | `IP LAB 3/forLoop.cpp`, `BreakAndContinue.cpp` |
| Arrays & Strings | `IP_LAB 3/Array.cpp`, `String.cpp`, `StringEx.cpp` |
| Pointers & Dynamic Memory (`new`, `delete`) | `Pointer/Pointer.cpp` |
| Leap Year, Odd/Even, Absolute Value | `IP_LAB 2/` |

### 🔶 Final Semester

| Topic | Files |
|---|---|
| Classes & Objects | `Lab task 1/1st.cpp` – `5th.cpp` |
| Encapsulation (private/public, getters/setters) | `Lab task 2/Account.cpp`, `Box.cpp` |
| Operator Overloading | `Lab task 2/Operator overloading.txt` |
| Inheritance (single, multi-level) | `Lab task 3/Bankaccount.cpp`, `Mobile.cpp` |
| Virtual Inheritance (Diamond Problem) | `Assignment final.cpp` |
| Constructors & Destructors | `Assignment final.cpp` |
| Complex Class Hierarchy (Person → Employee/Student → TA) | `Assignment final.cpp` |

---

## 🚀 Getting Started

### Prerequisites

- A C++ compiler: [g++](https://gcc.gnu.org/) or [MinGW](https://www.mingw-w64.org/) (Windows)
- Or any IDE: [VS Code](https://code.visualstudio.com/), [Code::Blocks](http://www.codeblocks.org/), [Dev-C++](https://www.bloodshed.net/)

### Compile & Run

```bash
# Compile
g++ filename.cpp -o output

# Run (Linux/Mac)
./output

# Run (Windows)
output.exe
```

**Example:**
```bash
g++ "Mid/IP_LAB 2/SimpleCalculator.cpp" -o calculator
./calculator
```

---

## 💡 Key Concepts with Examples

### Pointers
```cpp
int x = 5;
int *ax = &x;       // ax stores the address of x
cout << *ax;        // dereference → prints 5
```

### Classes & Encapsulation
```cpp
class Account {
private:
    string name;
    float balance;
public:
    void setName(string n) { name = n; }
    void print() { cout << name << " : " << balance; }
};
```

### Inheritance
```cpp
class Person { ... };
class Employee : virtual public Person { ... };
class Student  : virtual public Person { ... };
class TA       : public Employee, public Student { ... };
```

---

## 📝 Notes

- All programs are written in standard **C++** and compiled with `g++`
- Comments are included in most files to explain logic
- Lab tasks follow university coursework structure (AIUB – CS Fundamentals)
- The `Final/Assignment final.cpp` demonstrates **virtual (diamond) inheritance** — one of the more advanced OOP concepts

---

## 🙋 Author

Learning C++ step by step. This repo tracks progress from basic syntax all the way to object-oriented programming concepts.

---

## 📄 License

This repository is for educational purposes only.
