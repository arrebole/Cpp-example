

/**
 *  接口类 全部纯虚函数
 * 
 */
class Animal
{
private:
public:
  Animal() {}
  virtual ~Animal() {}

  virtual void aoao() = 0;
  virtual void running() = 0;
};