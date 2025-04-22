#include <iostream>
using namespace std;

class Animal {
protected:
    string name;

public:
    Animal(const string& n) : name(n) {}
    virtual void makeSound() = 0;
};

class Cat : public Animal {
public:
    Cat(const string& n) : Animal(n) {}
    void makeSound() {
        cout << "Cat named " << name << " says Meow!" << endl;
    }
};

class Dog : public Animal {
public:
    Dog(const string& n) : Animal(n) {}
    void makeSound() {
        cout << "Dog named " << name << " says Woof!" << endl;
    }
};

int main() {
    Cat cat("Whiskers");
    Dog dog("Rover");
    cat.makeSound();
    dog.makeSound();
    return 0;
}
