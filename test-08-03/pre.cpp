
//proj3.cpp
#include <iostream>
#include <iomanip>
using namespace std;

template <int base> //数制为base的数
class Number
{
    int n; //存放数的当前值
public:
    Number(int i) : n(i) {}         //i必须小于base
    int advance(int k);             //当前值增加k个单位
    int value() const { return n; } //返回数的当前值
};

class TimeOfDay
{
public:
    Number<24> hours;               //小时（0~23）
    Number<60> minutes;             //分（0~59）
                                    //**1** **********found**********
    Number<60> seconds;             //秒（0~59）
    Number<1000> milliseconds;      //毫秒（0~999）

    TimeOfDay(int h = 0, int m = 0, int s = 0, int milli = 0)
        : hours(h), minutes(m), seconds(s), milliseconds(milli) {}
    void advanceMillis(int k) { 
        advanceSeconds(milliseconds.advance(k)); 
    } //前进k毫秒
    void advanceSeconds(int k)                                      //前进k秒
    {
        //**2** **********found**********
        advanceMinutes(seconds.advance(k));
    }
    void advanceMinutes(int k) { advanceHour(minutes.advance(k)); } //前进k分钟
    void advanceHour(int k) { hours.advance(k); }                   //前进k小时
    void show() const
    {                                             //按“小时:分:秒.毫秒”的格式显示时间
        int c = cout.fill('0');                   //将填充字符设置为'0'
        cout << setw(2) << hours.value() << ':'   //显示小时
             << setw(2) << minutes.value() << ':' //显示分
             << setw(2) << seconds.value() << '.' //显示秒
             << setw(3) << milliseconds.value();  //显示毫秒
        cout.fill(c);                             //恢复原来的填充字符
    }
};

template <int base>
int Number<base>::advance(int k)
{
    n += k;    //增加k个单位
    int s = 0; //s用来累计进位
               //**3** **********found**********
    while (n >= base){
            s++; //n到达或超过base即进位
            n-=base;
    }
    return s;         //返回进位
}

int main()
{
    TimeOfDay time(1, 2, 3, 4); //初始时间：1小时2分3秒4毫秒
    time.show();                //显示时间
    time.advanceHour(5);        //前进5小时
    time.advanceSeconds(122);   //前进122秒（2分零2秒）
    time.advanceMillis(1017);   //前进1017毫秒（1秒零17毫秒）
    cout << endl;
    time.show(); //显示时间
    cout << endl;
    return 0;
}
