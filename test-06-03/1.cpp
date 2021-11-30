
#include<iostream>
#include<string>
using namespace std;


class Date{            
  int year,month,day;  
public:	
  Date(int year, int month, int day):year(year),month(month),day(day){}
  int getYear()const{ return year; }
  int getMonth()const{ return month; }
  int getDay()const{ return day; }
};

class Person{       
  char name[14];    
  bool is_male;     // true = male
  Date birth_date;  
public:
  Person(char *name, bool is_male, Date birth_date)
    //**********found**********
    :is_male(is_male),birth_date(birth_date)
  {
    strcpy(this->name, name);
  }
  const char *getName()const{ return name; }

  bool isMale()const{ return is_male; }

  Date getBirthdate()const{ return birth_date; }

  //strcmp()
  int compareName(const Person &p)const{ 
    //**********found**********
    return strcmp(name, p.getName());
  }

  void show(){
    cout<<endl;
    cout<<name<<' '<<(is_male? "男" : "女")<<' '<<"出生日期："
      <<birth_date.getYear()<<"年"      
      //**********found**********
      <<birth_date.getMonth()<<"月" //show birthday month
      <<birth_date.getDay()<<"日";       
  }
};

void sortByName(Person ps[], int size){  
  for(int i=0; i<size-1; i++){
  int m=i;
  for(int j=i+1; j<size; j++)
    if(ps[j].compareName(ps[m])<0) m=j;
    if(m>i){
      Person p=ps[m];
      ps[m]=ps[i];
      ps[i]=p;
    }
  }
}

int main(){
  Person staff[]={
    Person("Nick", true, Date(1978, 4, 20)),
    Person("Jenny", false, Date(1965,8,3)),
    Person("Harry", false, Date(1965,9,5)),
    Person("Mark", true, Date(1973,5,30))
  };

  const int size=sizeof(staff)/sizeof(staff[0]); 
  int i;
  cout<<endl<<"sort by Name";
  cout<<endl<<"before sort：";
  for(i=0; i<size; i++) staff[i].show();

  sortByName(staff,size);

  cout<<endl<<endl<<"排序后：";
  for(i=0; i<size; i++) staff[i].show();

  cout<<endl;
  return 0;
}

