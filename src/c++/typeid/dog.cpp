#include "dog.h"

Dog::Dog(string _name,int _age):name(_name),age(_age)
{

}

Dog::~Dog()
{

}

void Dog::aoao()
{
    cout << "aoao~ " << name <<endl;
}

void Dog::running()
{
    cout << "i am running" <<endl;
}

void Dog::eat()
{
    cout << "i am eat"<<endl;
}