#include <iostream>
using namespace std;
//practice-01-set_time
/*
class mytime
{
public:
	void set_time();
	void show_time();
private:
	int hour;
	int minute;
	int sec;
};
int main()
{
	mytime t1, t2;
	t1.set_time();
	t1.show_time();
	t2.set_time();
	t2.show_time();
	return 0;
}
void mytime::set_time()
{
	cin >> hour >> minute >> sec;
}
void mytime::show_time()
{
	cout << hour << ":" << minute << ":" << sec << endl;
}
*/

//prectice-02-find_the_maximun_value_in_an_array
/*
class array_max
{
public:
	void set_value();
	void max_value();
	void show_value();
private:
	int array[10];
	int max;
};
void array_max::set_value()
{
	for (int i = 0;i < 10;i++)
		cin >> array[i];
}
void array_max::max_value()
{
	max = array[0];
	for (int i = 0;i < 10;i++)
		if (array[i] > max)max = array[i];
}
void array_max::show_value()
{
	cout << "max=" << max;
}
int main()
{
	array_max arrmax;//定义对象arrmax
	arrmax.set_value();//调用set_value函数输入
	arrmax.max_value();//同理
	arrmax.show_value();//同理
	return 0;
}
*/

//构造函数(constructor)来处理对象的初始化：
/*
class Time
{
public:
	Time()//定义构造成员函数，函数名与类名相同
	{
		hour = 0;
		minute = 0;
		sec = 0;
	}
	void set_time();
	void show_time();
private:
	int hour;
	int minute;
	int sec;
};
inline
void Time::set_time()
{
	cin >> hour >> minute >> sec;
}
inline
void Time::show_time()
{
	cout << hour << ":" << minute << ":" << sec << endl;
}
int main()
{
	Time t1;
	t1.set_time();
	t1.show_time();
	Time t2;
	t2.show_time();
	return 0;
}*/

//使用参数对数据成员初始化：
/*Box::Box(int h,int w,int len) :height(h),width(w),length(len){}*/

//practice-03-使用指针的方法完成01-set_time[三种方法]
/*
class Time
{
public:
	Time(int, int, int);
	int hour;
	int minute;
	int sec;
	void get_time();
};
Time::Time(int h, int m, int s)
{
	hour = h;
	minute = m;
	sec = s;
}
void Time::get_time()
{
	cout << hour << ":" << minute << ":" << sec << endl;
}
int main()
{
	Time t1(10, 13, 56);
	int* p1 = &t1.hour;
	cout << *p1 << endl;
	t1.get_time();
	Time* p2 = &t1;
	p2->get_time();
	void (Time:: * p3)();//定义指向Time类公共成员函数的指针变量p3
	p3 = &Time::get_time;
	(t1.*p3)();//=t1.get_time()
	return 0;
}*/


//关于const
/*
#常成员函数 void get_time()const;
如果一定要进行修改：应使用mutable函数
mutable用法：mutable int count;

#如果一个变量已被声明为常变量，只能用常变量指针变量指向它：
如：const char* ptr;
再如：
const char c[]='boy';
const char *p;
p=c;
*/