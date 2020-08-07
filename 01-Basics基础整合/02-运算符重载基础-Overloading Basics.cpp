#include <iostream>
using namespace std;
//01-使用重载-通过函数实现复数相加：
/*
class Complex
{
public:
	Complex() { real = 0;imag = 0; }					 //定义构造函数
	Complex(double r, double i) { real = r;imag = i; }	 //构造函数重载
	Complex complex_add(Complex& c2);					 //函数声明-复数相加
	void display();										 //声明输出函数
private:
	double real;
	double imag;
};
Complex Complex::complex_add(Complex& c2)
{
	Complex c;
	c.real = real + c2.real;
	c.imag = imag + c2.imag;
	return c;

}
void Complex::display()
{
	cout << "(" << real << "," << imag << "i)" << endl;
}
int main()
{
	Complex c1(3, 4), c2(5, -10), c3;//定义3个复数对象
	c3 = c1.complex_add(c2);//c1+c2
	cout << "c1=";c1.display();
	cout << "c2=";c2.display();
	cout << "c3=c1+c2=";c3.display();
	return 0;
}
*/
//02-改写01：对运算符 + 进行重载
/*
class Complex
{
public:
	Complex() { real = 0;imag = 0; }					 //定义构造函数
	Complex(double r, double i) { real = r;imag = i; }	 //构造函数重载
	Complex complex_add(Complex& c2);					 //函数声明-复数相加
	Complex operator+(Complex& c2);		//new
	void display();										 //声明输出函数
private:
	double real;
	double imag;
};
Complex Complex::operator+(Complex& c2) //new
{
	Complex c;
	c.real = this->real + c2.real;
	c.imag = this->imag + c2.imag;
	return c;
}
Complex Complex::complex_add(Complex& c2)
{
	Complex c;
	c.real = real + c2.real;
	c.imag = imag + c2.imag;
	return c;

}
void Complex::display()
{
	cout << "(" << real << "," << imag << "i)" << endl;
}
int main()
{
	Complex c1(3, 4), c2(5, -10), c3,c4;//定义4个复数对象 //new
	c3 = c1.complex_add(c2);//c1+c2
	c4 = c1 + c2;
	cout << "c1=";c1.display();
	cout << "c2=";c2.display();
	cout << "c3=c1+c2=";c3.display();
	cout << "c4=c1+c2=";c4.display();
	return 0;
}*/
//03-重载双目运算符（书309）
/*
class String
{
public:
	String() { p = NULL; }
	String(const char* str);
	friend bool operator>(String& string1, String& string2);
	void display();
private:
	const char* p;
};
inline
String::String(const char *str)
{
	p = str;
}
inline
void String::display()
{
	cout << p;
}
bool operator>(String& string1, String& string2)
{
	if (strcmp(string1.p, string2.p) > 0)
		return 1;
	else
		return 0;
}
int main()
{
	String string1("Hello"), string2("Book");
	cout << (string1 > string2) << endl;
}
*/