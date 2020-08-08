#include <iostream>
using namespace std;
//#派生类的声明方式：
/**/
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