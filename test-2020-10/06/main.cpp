class Demo{
  public:
    void SetValue(){
    }
};
int main() 
{
  const Demo Obj; //const修饰的对象即为常量对象   
  Obj.SetValue();
  return 0;
}
//选A