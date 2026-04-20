#include <iostream>
using namespace std;

class Animal{
protected:
    void eat(){
        cout << "Animals eat";
    }
};

class Dog : public Animal{
    public:
    void speak(){
        cout << "Dog ghewww";
    }
    void dogeat(){
        eat();
    }
};
int main(){
    Dog *d1 = new Dog();
    d1->dogeat();
    delete d1;

    Dog d2;
    d2.dogeat();
    // Animal anml;
    // anml.eat();
}