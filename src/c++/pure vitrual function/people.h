#ifndef PEOPLE
#define PEOPLE

#include <iostream>

using namespace std;

class People
{
private:
  string m_strName;

public:
  // 构造函数 析构函数
  People(string name);
  ~People();

  // 虚函数
  virtual void sayHello();
  virtual void work() = 0;

  string getName();
};

#endif