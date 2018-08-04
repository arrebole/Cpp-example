

#include "people.h"

People::People(string name)
{
    m_strName = name;
}

People::~People() {}

void People::sayHello()
{
    cout << "hello" << endl;
}

string People::getName()
{
    return m_strName;
}
