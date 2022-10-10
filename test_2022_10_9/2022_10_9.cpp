//#include<iostream>
//
//using namespace std;
//
//class Date
//{
//public:
//	Date(int year = 0, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	//bool operator>(const Date& d1, const Date& d2)
//	//{
//	//	if (d1._year > d2._year)
//	//	{
//	//		return true;
//	//	}
//	//	else if (d1._year == d2._year && d1._month > d2._month)
//	//	{
//	//		return true;
//	//	}
//	//	else if (d1._year == d2._year && d1._month == d2._month && d1._day > d2._day)
//	//	{
//	//		return true;
//	//	}
//	//	else
//	//	{
//	//		return false;
//	//	}
//	//}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};


//	函数名	operator操作符
//	返回类型	看操作符运算后返回值是什么
//	参数  操作符有几个操作数，他就有几个参数

//bool operator>(const Date& d1, const Date& d2)
//{
//	if (d1._year > d2._year)
//	{
//		return true;
//	}
//	else if (d1._year == d2._year && d1._month > d2._month)
//	{
//		return true;
//	}
//	else if (d1._year == d2._year && d1._month == d2._month && d1._day > d2._day)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}

//int operator-(const Date& d1, const Date& d2);






//int main()
//{
//	Date d1(2022, 1, 16);
//	Date d2(2022, 1, 31);
//	Date d3(2022, 2, 26);
//
//	//	默认情况下C++不支持自定义类型对象使用运算符
//
//	//	cout << (d1 > d2) << endl;			//	必须加括号,  << 的优先级比 > 高 , 不加括号会err 
//	//	cout << operator>(d1, d2) << endl;
//
//	//d1 > d2;
////	int day1 = d2 - d1;
////	int day2 = d3 - d1;
//
//	//	一个已近存在的对象拷贝初始化一个马上创建实例化的对象
//	Date d4(d1);		//	拷贝构造
//
//	//	两个已近存在的对象，之间进行复制拷贝
//	d1 = d3;
//
//	
//	return 0;
//}