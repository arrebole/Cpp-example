// animal 头文件
#include <string>

using namespace std;

// 定义命名空间 animal
namespace animal
{
//定义类 脊索动物
class chordata
{
  //私有 无法被类外访问
private:
  string name;
  int age;

  //公开 能被随意调用
public:
  //构造函数 类实例化成对象时被调用
  chordata(string _name);

  //复制函数 实例化对象被复制时调用
  chordata(const chordata &cho);

  //析构函数 实例化的对象被销毁时调用
  //主要用于释放堆内存
  ~chordata();

  //类方法
  void aoao();
};

} // namespace animal
