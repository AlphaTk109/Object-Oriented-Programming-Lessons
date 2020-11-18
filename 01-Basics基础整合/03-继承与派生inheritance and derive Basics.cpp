#include <iostream>
using namespace std;
#include <string>
#pragma warning( disable : 4996)
//#派生类的声明方式：
/*
//#-1派生类的声明方式：
class Student//已有基类Student
{
public:
	void display()
	{
		cout << num << endl << name << endl << sex << endl;
	}
private:
	int num;
	string name;
	char sex;
};
class Student1 :public Student//声明基类是Student
{
public:
	void display1()
	{
		cout << age << endl;
		cout << address << endl;
	}
private:
	int age;
	string address;
}; 
*/

//#有子对象的派生类的构造函数：比如学生中有班长的例题

class Student
{
public:
	Student(int n, string nam)
	{
		num = n;
		name = nam;
	}
	void display()
	{
		cout << "num:" << num << "name:" << name << endl;
	}
protected:
	int num;
	string name;
};

class Student1:public Student
{
public:
	Student1(int n, string nam, int n1, string nam1, int a, string ad)
		:Student(n, nam), monitor(n1, nam1)
	{
		age = a;
		addr = ad;
	}
	void show()
	{
		cout << "This student is:" << endl;
		display();
		cout << "age:" << age << "address:" << addr << endl;
	}
	void show_monitor()
	{
		cout << endl << "Class monitor is:" << endl;
		monitor.display();
	}
private:
	Student monitor;
	int age;
	string addr;
};
int main()
{
	Student1 stud1(10010, "Wangniuniu", 10001, "Liniuniu", 19, "BeiKing University");
	stud1.show();
	stud1.show_monitor();
	return 0;
}


//#多重继承派生类的构造函数：
/*
//声明一个教师类和学生类，用多重继承的方式声明职研究生派生类：
//有错误懒得修复了：
class Teacher
{
public:
	Teacher(string nam, int a, string t)
	{
		name = nam;
		age = a;
		title = t;
	}
	void display()
	{
		cout << name << " " << age << " " << title << endl;
	}
protected:
	string name;
	int age;
	string title;//职称
};
class Student
{
public:
	Student(string nam, char s, float sco)
	{
		name1 = nam;
		sex = s;
		score = sco;
	}
	void display1()
	{
		cout << name1 << sex << score << endl;
	}
protected:
	string name1;
	char sex;
	float score;
};
class Gradute :public Teacher, public Student
{
public:
	Gradute(string nam, int a, char s, string t, float sco, float w) :
		Teacher(nam, a, t), Student(nam, s, sco), wage(w) {}
	void show()
	{
		cout << name << age << sex << score << title << wage << endl;
	}
private:
	float wage;
};

int main()
{
	Gradute("Wangniuniu", 24, "f", "assistant", 89.5, 1200);
	grad1.show();
	return 0;
}
*/

//#虚基类：只继承一次

//示例：基类Person->Teacher;Person->Student; 派生：Teacher/Student->Graduate
/*此程序存在类型转换bug
//声明公共基类Person：
class Person
{
public:
	Person(string nam, char s, int a)
	{
		name = nam;sex = s;age = a;
	}
protected:
	string name;
	char sex;
	int age;
};
//声明Person的直接派生类Teacher:
class Teacher :virtual public Person
{
public:
	Teacher(string nam, char s, int a, string t) :Person(nam, s, a) 
	{ title = t; }
protected:
	string title;
};
//声明Person的直接派生类Student:
class Student :virtual public Person
{
public:
	Student(string nam, char s, int a, float sco) :Person(nam, s, a), score(sco) {}
protected:
	float score;
};
//声明多重继承的派生类Graduate:
class Graduate :public Teacher, public Student
{
public:
	Graduate(string nam, char s, int a, string t, float sco, float w) :Person(nam, s, a), Teacher(nam, s, a, t), Student(nam, s, a, sco), wage(w) {}
	void show()
	{
		cout << name << age << sex << score << title << wage << endl;
	}
private:
	float wage;
};
int main()
{
	Graduate grad1("wang", "f", 24, "assistant", 89.5, 8888);
	grad1.show();
	return 0;
}*/