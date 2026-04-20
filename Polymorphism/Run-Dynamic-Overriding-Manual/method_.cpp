#include <iostream>
using namespace std;

class Animal {
public:
    virtual void eat() {
        cout << "Animals eat";
    }
};

class Dog : public Animal {
public:
    void eat() override {
        cout << "Dog eat";
    }
};

class cat : public Animal {
public:
    void eat() {
        cout << "Cat eat";
    }
};  

int main() {

    // // HEAP // RUNTIME // DYNAMIC POLYMORPHISM 
    Animal* ptr;
    ptr = new Dog();
    ptr->eat();

    ptr = new cat();
    ptr->eat();
    delete ptr;
    
    // // STACK // COMPILE // STATIC POLYMORPHISM 
    cat c1;
    c1.eat();

    return 0;
}