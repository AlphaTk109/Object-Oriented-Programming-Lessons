#include <iostream>
#include <cstring>
using namespace std;

//#多态实例：点->⚪->圆柱
/*
class Point
{
public:
	Point(float x = 0, float y = 0);
	void setpoint(float, float);	 //设置坐标值
	float getX() const { return x; } //读取x坐标
	float getY() const { return y; } //读取y坐标
	friend ostream& operator<<(ostream&, const Point&);//友元重载运算符<<
protected:
	float x, y;
};
//定义Point类成员的构造函数：
Point::Point(float x1, float y1)
{
	x = x1;
	y = y1;
}
//设置x,y的坐标值：
void Point::setpoint(float x1, float y1)
{
	x = x1;
	y = y1;
}
//重载运算符<<使之能输出点的坐标
ostream& operator<<(ostream& output, const Point& p)
{
	output << "[" << p.x << "," << p.y << "]" << endl;
	return output;
}
//int main()//时实测试
//{
//	Point p(3.5, 6.4);
//	cout << "x=" << p.getX() << "y=" << p.getY() << endl;
//	p.setpoint(8.5, 6.8);
//	cout << "p(new)=" << p << endl;//用重载运算符<<输出p点坐标
//}
class Circle :public Point
{
public:
	Circle(float x = 0, float y = 0, float r = 0);//构造函数
	void setRadius(float);						//设置半径
	float getRadius() const;					//读取半径
	float area() const;							//计算⚪面积
	friend ostream& operator<<(ostream&, const Circle&);//重载运算符<<
private:
	float radius;
};
//定义构造函数，对圆心坐标和半径初始化：
Circle::Circle(float a, float b, float r) :Point(a, b), radius(r) {}
//设置半径值:
void Circle::setRadius(float r) { radius = r; }
//读取半径值:
float Circle::getRadius() const { return radius; }
//计算圆面积:
float Circle::area() const { return 3.14 * pow(radius, 2); }
//重载运算符:
inline
ostream& operator << (ostream& output, Circle& c)
{
	output << "Center=[" << c.getX() << "," << c.getY() << "],r=" << c.getRadius() << ",area=" << c.area() << endl;
	return output;
}

//int main()//阶段测试⚪
//{
//	Circle c(3.6, 6.4, 5.2);
//	cout << "origin circle:\nx=" << c.getX() << ",y=" << c.getY() << ",r=" << c.getRadius() << ",area=" << c.area() << endl;
//	c.setRadius(7.5);
//	c.setpoint(5, 5);
//	cout << "new circle:\n" << c;
//	Point& pRef = c;
//	cout << "pRef=" << pRef;
//	return 0;
//}

class Cylinder :public Circle
{
public:
	Cylinder(float x = 0, float y = 0, float r = 0, float h = 0);
	void setHeight(float);
	float getHeight() const;
	float vcolume() const;
	friend ostream& operator<<(ostream&, const Cylinder&);
protected:
	float height;
};
Cylinder::Cylinder(float a, float b, float r, float h) :Circle(a, b, r), height(h) {}
void Cylinder::setHeight(float h) { height = h; }
float Cylinder::getHeight() const { return height;}
float Cylinder::vcolume() const { return Circle::area()* height; }
ostream& operator<<(ostream& output, Cylinder& cy)
{
	output << cy.getHeight() << cy.vcolume();
	return output;
}
//main略
int main()
{
	Cylinder cy1(1, 1, 1, 1);
	cout << cy1;
	return 0;
}*/

//#虚函数

//#1派生类的析构函数若需要单独执行需要虚函数：
//如：virtual ~point() { cout << "hello world!"; }

//#2纯虚函数：派生时函数才会起作用
//格式如：virtual float area() const =0;

//使用虚函数进行抽象：
//实例：
/*
//-1)抽象基类Shape:
class Shape
{
public:
	virtual float area() const { return 0.0;}		//虚函数
	virtual float volume() const { return 0.0; }	//虚函数
	virtual void shapeName() const = 0;				//纯虚函数:不在基类中定义，而应在派生类中定义
};
//2)-声明Point类：
class Point :public Shape
{
public:
	Point(float x= 0, float y= 0);
	void setPoint(float, float);
	float getX() const { return x; }
	float getY() const { return y; }
	virtual void shapeName() const { cout << "Point:"; }//对虚函数进行再定义
	friend ostream& operator<<(ostream&, const Point&);//运算符重载
protected:
	float x = 0; float y = 0;
};
Point::Point(float a, float b) :x(a), y(b) {}
void Point::setPoint(float a, float b) { x = a;y = b; }
ostream& operator<<(ostream& output, const Point& p)
{
	output << "[" << p.x << "," << p.y << "]";
	return output;
}
//-3)声明Circle类：
class Circle:public Point
{
public:
	Circle(float x = 0, float y = 0, float r = 0);
	void setRadius(float);
	float getRadius() const;
	virtual float area() const;//对虚函数进行再定义
	virtual void shapeName() const { cout << "Circle:"; }//对虚函数进行再定义
	friend ostream& operator<<(ostream&, const Circle&);
protected:
	float radius;
};
Circle::Circle(float a, float b, float r) :Point(a, b), radius(r) {}
void Circle::setRadius(float r) {	radius = r;}
float Circle::getRadius() const { return radius; }
float Circle::area() const { return 3.14 * pow(radius, 2); }
ostream& operator << (ostream& output, Circle& c)
{
	output << "Center=[" << c.getX()<< "," << c.getY() << "],r=" << c.getRadius() << ",area=" << c.area() << endl;
	return output;
}
//剩余内容与上一程序相同略
*/