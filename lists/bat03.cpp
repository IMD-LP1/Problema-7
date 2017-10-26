#include <iostream>

using namespace std;

class Animal {
 public:
  Animal() {cout << "Animal constructor... Done!" << endl;}	
  virtual void eat() {cout << "It eats..." << endl;};
  virtual void flap(){}
};

class Mammal : virtual public Animal {
 public:
  Mammal() {cout << "Mamal constructor... Done!" << endl;}	
  virtual void breathe() {cout << "It breathes..." << endl;};
};

class WingedAnimal : virtual public Animal {
 public:
  WingedAnimal() {cout << "WingedAnimal constructor... Done!" << endl;}
  virtual void flap() override {cout << "It flaps..." << endl;};
};

class Bat : public Mammal, public WingedAnimal {
};

int main(){
  Bat bat;
  Animal &mammal = bat;
  mammal.flap();
 }