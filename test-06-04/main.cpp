#include"IntegerSet.h"
#include<iomanip>
#include<fstream>

IntegerSet::IntegerSet(int data[], int size): counter(0){
	for(int i=0; i<size; i++) add(data[i]);
}

void IntegerSet::add(int element){
	int j;
	//从后往前寻找第一个小于等于element的元素
	for(j=counter; j>0; j--)
		if(element>=elem[j-1]) break;
	//如果找到的是等于element的元素，说明要添加的元素已经存在，直接返回
	if(j>0)
		if(element==elem[j-1]) return;
	//如果找到的是小于element的元素，j就是要添加的位置
	//该元素及其后面的元素依次后移，腾出插入位置
	for(int k=counter; k>j; k--) elem[k]=elem[k-1];
	elem[j]=element;	//将element插入到该位置
	counter++;			//计数器加1
}

void IntegerSet::remove(int element){
//********333********
  


//********666********
}

void IntegerSet::show()const{
    for(int i=0; i<getCount(); i++)
		cout<<setw(4)<<getElement(i);
	cout<<endl;
}

int main(){
	int d[]={5,28,2,4,5,3,2,75,27,66,31};
	IntegerSet s(d,11);	s.show();
	s.add(6);			s.show();
    s.add(19);			s.show();
	s.remove(2);		s.show();
	s.add(4);			s.show();

  WriteToFile("");
  return 0;
}

void WriteToFile(char *path)
{
	char filename[30];
	strcpy(filename,path);
	strcat(filename,"out.dat");
	ofstream fout(filename);

	int d[]={9,27,42,66,5,23,29,55,51,4,12,28,47,75};
	IntegerSet s(d,14);
	s.remove(5);
	for(int i=0;i<s.getCount();i++)
	{
		fout<<s.getElement(i)<<",";
	}
	fout.close();
}