/*
#ifndef _complex_
#define _complex_

class complex
{
public:
	//构造4个函数
	complex(double r = 0, double i = 0)
		:re(r), im(i) //初值列
	{}
	complex& operator += (const complex&);
	double real() { return re; }//取出实部
	double imag() { return im; }//去除虚部
private:
	double re, im;
	friend complex& _doapl(complex*, const complex&);
};

inline complex&//返回值类型
_doapl(complex* ths, const complex& r)
{
	ths->re += r.re;
	ths->im += r.im;
	return *ths; 
}

inline complex&//在class本体之外需要加inline
complex::operator +=(const complex& r)//右面加到左边，左边是不动的，所以加const
{
	return _doapl(this, r);
}

//多个函数重载：
inline complex//此处不能传引用 return by value
operator +(const complex& x, const complex& y)
{
	return complex(real(x) + real(y), imag(x) + imag(y));
}
inline complex
operator +(const complex& x, double y)
{
	return complex(real(x) + y,imag(x));
}
inline complex
operator +(double x, const complex& y)
{
	return complex(x + real(y), imag(y));
}

operator <<(ostream& os,const complex& x)//ostreamx需要


#endif // !

*/ 