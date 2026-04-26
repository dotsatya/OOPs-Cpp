Its all about oops concept on cpp
# 🚀 C++ Object-Oriented Programming (OOP)

This repository contains core **Object-Oriented Programming (OOP)**
concepts implemented in **C++** with simple examples and explanations.

------------------------------------------------------------------------

## 📌 What is OOP?

Object-Oriented Programming is a programming paradigm based on **objects
and classes**, used to structure code in a reusable and organized way.

------------------------------------------------------------------------

## 🔑 Core OOP Concepts

### 1. Class & Object

``` cpp
class Car {
public:
    string brand;
    int speed;
};

int main() {
    Car c1;
    c1.brand = "BMW";
    c1.speed = 120;
}
```

------------------------------------------------------------------------

### 2. Encapsulation

``` cpp
class Bank {
private:
    int balance;

public:
    void setBalance(int b) {
        balance = b;
    }

    int getBalance() {
        return balance;
    }
};
```

------------------------------------------------------------------------

### 3. Inheritance

``` cpp
class Animal {
public:
    void eat() {
        cout << "Eating..." << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Barking..." << endl;
    }
};
```

------------------------------------------------------------------------

### 4. Polymorphism

``` cpp
class Math {
public:
    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
};
```

------------------------------------------------------------------------

### 5. Abstraction

``` cpp
class Shape {
public:
    virtual void draw() = 0;
};

class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing Circle" << endl;
    }
};
```

------------------------------------------------------------------------

## ⚙️ How to Run

``` bash
g++ filename.cpp -o output
./output
```
