# 类对象作类成员

（一）当一个类对象作类A的成员时，构造时候先构造类对象，再构造类A自身, 析构相反

```c++
// 类Phone define
class Phone {
 public: 
  Phone(string pName){

   cout << "Phone的构造调用" <<endl; //第1个被调用
   this->pName = pName;
  }
  string pName;
  ~Phone(){
   cout << "Phone的析构调用" <<endl;
  }
};

class Person {
 public: 
  Person(string name, string pame): m_Name(name), m_Phone(pame){
   cout << "Person的构造调用" <<endl;   //第2个被调用
  }
  //name: 
  string m_Name;
  //phone:
  Phone m_Phone;
};
```
