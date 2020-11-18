//ref:w3school

#include <iostream>

using namespace std;

//polymorphism : it allow same function names with diff arg , we can access only function in individual class cant access other class functions (i.e) polymorphism

// Base class
class Animal {
  public:
    void animalSound() {
    cout << "The animal makes a sound \n" ;
  }
      void animalSound(string msg) {
    cout << "The animal makes a sound "<<msg<<endl ;
  }
};

// Derived class
class Pig : public Animal {
  public:
    void animalSound() {
    cout << "The pig says: wee wee \n" ;
   }
};

// Derived class
class Dog : public Animal {
  public:
    void animalSound() {
    cout << "The dog says: bow wow \n" ;
  }
};

int main() {
	
  Animal myAnimal;
  Pig myPig;
  Dog myDog;

  myAnimal.animalSound();
  myAnimal.animalSound("different");
  myPig.animalSound();
  myDog.animalSound();
 // myDog.animalSound("different");  //we cant Access base class function while same function name even derived class with public scope (i.e) polymorphism  
  								//have to create individual obj for class to access function with same name
  

  return 0;
}
