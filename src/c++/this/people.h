#include <iostream>

using namespace std;

class people
{
  private:
    string name;
    /* data */
  public:
    people(string init_name);
    ~people();

    string getName();
    people &setName(string name);
};