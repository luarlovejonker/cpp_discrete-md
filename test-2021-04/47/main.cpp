#include <iostream>
#include <stdio.h>
using namespace std;

class Employee
{
protected:
  char name[20];
  char address[100];
  char city[100];
  char provice[100];
  char postNum[10];
public:
  Employee(char* nm, char* add, char* city, char* pro, char* postNum);

  void ChangeName(char *newName);
  char* Display(char *buffer);
};

Employee::Employee(char *nm, char *add, char *city, char *pro, char *postNum)
{
  strcpy(this->name, nm);
  strcpy(this->address, add);
  strcpy(this->city, city);
  strcpy(this->provice, pro);
  strcpy(this->postNum, postNum);
}

void Employee::ChangeName(char *newName){
  strcpy(this->name, newName);
}

char* Employee::Display(char *buffer) {
  strcpy(buffer, this->name);
  strcat(buffer, this->address);
  return buffer;
}

int main(){
  Employee e("jack", "tianfu street", "chengdu", "sichuan", "610100");
  e.Display("");
  return 0;
}