#include <iostream>
#include <string>
using namespace std;

class Building
{
  //告诉编译器 goodGay全局函数 是 Building类的好朋友，可以访问类中的私有内容
  friend void goodGay(Building *building);

public:
  Building()
  {
    this->m_SittingRoom = "sittingRoom";
    this->m_BedRoom = "bedroom";
  }

public:
  string m_SittingRoom; //客厅

private:
  string m_BedRoom; //卧室
};

void goodGay(Building *building)
{
  cout << "is visiting: " << building->m_SittingRoom << endl;
  cout << "is visiting:" << building->m_BedRoom << endl;
}

void test01()
{
  Building b;
  goodGay(&b);
}


//---
class Building2;
class goodGay2
{
public:
  goodGay2();
  void visit();

private:
  Building2 *building;
};

class Building2
{
  //告诉编译器 goodGay2类是Building类的好朋友，可以访问到Building类中私有内容
  friend class goodGay2;

public:
  Building2();

public:
  string m_SittingRoom; //客厅
private:
  string m_BedRoom; //卧室
};

//类外定义构造函数
Building2::Building2()
{
  this->m_SittingRoom = "sittingroom";
  this->m_BedRoom = "bedroom";
}

goodGay2::goodGay2()
{
  building = new Building2;
}

void goodGay2::visit()
{
  cout << "is visiting:" << building->m_SittingRoom << endl;
  cout << "is visiting:" << building->m_BedRoom << endl;
}

// 类做友元
void test02()
{
  goodGay2 gg;
  gg.visit();
}


//--------------

class Building3;
class goodGay3
{
public:
  goodGay3();
  void visit(); //只让visit函数作为Building的好朋友，可以发访问Building中私有内容
  void visit2();

private:
  Building3 *building;
};

class Building3
{
  //告诉编译器  goodGay3类中的visit成员函数 是Building好朋友，可以访问私有内容
  friend void goodGay3::visit();

public:
  Building3();

public:
  string m_SittingRoom; //客厅
private:
  string m_BedRoom; //卧室
};

Building3::Building3()
{
  this->m_SittingRoom = "sittingroom";
  this->m_BedRoom = "bedroom";
}

goodGay3::goodGay3()
{
  building = new Building3;
}

void goodGay3::visit()
{
  cout << "isvisiting" << building->m_SittingRoom << endl;
  cout << "isvisiting" << building->m_BedRoom << endl;
}

void goodGay3::visit2()
{
  cout << "isvisiting" << building->m_SittingRoom << endl;
  // cout << "isvisiting" << building->m_BedRoom << endl;
}

// 成员函数做友元
void test03()
{
  goodGay3 gg;
  gg.visit();
}


int main()
{

  test03();

  system("pause");
  return 0;
}
