#include "animal.h"
#include <iostream>

using namespace std;

class Dog : public Animal
{
private:
  string name;
  int age;

public:
  Dog(string _name, int _age);
  virtual ~Dog();
  virtual void aoao();
  virtual void running();

  void eat();
};