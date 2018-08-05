#include <iostream>

using namespace std;

int main(void)
{
    try
    {
        string yoo = "hello";
        throw yoo;
    }
    catch (int)
    {
        cout << "a int err" << endl;
    }
    // 捕获并得到错误
    catch (string &err)
    {
        cout << "a" << typeid(err).name() << err << endl;
    }
    catch (...)
    {
        cout << "a unkown err" << endl;
    }
    return 0;
}