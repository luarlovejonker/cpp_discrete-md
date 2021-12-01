
#include <iostream>
#include <string.h>
using namespace std;

class Book
{                  //“书”类
    char *title;   //书名
    int num_pages; //页数
    char *writer;  //作者姓名
public:
    Book(const char *the_title, int pages, const char *the_writer) : num_pages(pages)
    {
        title = new char[strlen(the_title) + 1];
        strcpy(title, the_title);
        //**********found**********
        writer = new char[strlen(the_writer) + 1];
        strcpy(writer, the_writer);
    }
    //**********found**********
    ~Book() {
        delete[] title,writer;
    }
    int numOfPages() const { return num_pages; }     //返回书的页数
    const char *theTitle() const { return title; }   //返回书名
    const char *theWriter() const { return writer; } //返回作者名
};

class TeachingMaterial : public Book
{ //“教材”类
    char *course;

public:
    TeachingMaterial(const char *the_title, int pages, const char *the_writer, const char *the_course)
        //**********found**********
        : Book(the_title,pages,the_writer)
    {
        course = new char[strlen(the_course) + 1];
        strcpy(course, the_course);
    }
    ~TeachingMaterial() { delete[] course; }
    const char *theCourse() const { return course; } //返回相关课程的名称
};

int main()
{
    TeachingMaterial a_book("C++语言程序设计", 299, "张三", "面向对象的程序设计");
    cout << "教 材 名：" << a_book.theTitle() << endl
         << "页    数：" << a_book.numOfPages() << endl
         << "作    者：" << a_book.theWriter() << endl
         //**********found**********
         << "相关课程：" << a_book.theCourse() << endl;
    cout << endl;
    return 0;
}
