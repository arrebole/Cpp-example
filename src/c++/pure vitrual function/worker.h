#ifndef WORKER
#define WORKER

#include "people.h"

class Worker : public People
{
  private:
    /* data */
  public:
    Worker(string name);
    ~Worker();

    // 实现虚函数和纯虚函数
    virtual void sayHello();
    virtual void work();

};

#endif