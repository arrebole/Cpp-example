#include "worker.h"

Worker::Worker(string name) : People(name)
{
}

Worker::~Worker()
{
}

void Worker::sayHello()
{
    cout << "hello i am" << People::getName() << endl;
}

void Worker::work()
{
    cout << "i am working" << endl;
}
