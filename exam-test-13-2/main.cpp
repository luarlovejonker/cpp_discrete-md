
#include<iostream>
using namespace std;

class VectorBase{     //�������࣬һ��������
  int len;
public:
  VectorBase(int len): len(len){}
  int length()const{ return len; }    //�������ȣ���������Ԫ�صĸ���
  virtual double getElement(int i)const=0; //ȡ��i��Ԫ�ص�ֵ
  virtual double sum()const=0;  //������Ԫ�صĺ�
  void show()const{   //��ʾ����������Ԫ��
    cout<<"(";
    for(int i=0; i<length()-1; i++) cout<<getElement(i)<<", ";
    //**********found**********
    cout<<getElement(length()-1)<<")"<<endl;//��ʾ���һ��Ԫ��
  }
};

class Vector: public VectorBase{  //������
  double *val;
public:
  Vector(int len, double v[]=NULL): VectorBase(len){
    val=new double[len];
    for(int i=0; i<len; i++) val[i]=(v==NULL? 0.0 : v[i] );
  }
  //**********found**********
  ~Vector(){ delete[] val; }
  double getElement(int index)const{ return val[index]; }
  double sum()const{
    double s=0.0;
    //**********found**********
    for(int i=0; i<length(); i++) s+=val[i];
    return s;
  }
};

class ZeroVector: public VectorBase{  //��������
public:
  ZeroVector(int len): VectorBase(len){}
  //**********found**********
  double getElement(int index)const{ return 0; }
  double sum()const{ return 0.0; }
};

int main(){
  VectorBase *v;
  double d[]={1,2,3,4,5};

  v=new Vector(5,d);
  v->show();
  delete v;
  v=new ZeroVector(6);
  v->show();
  delete v;
  return 0;
}

