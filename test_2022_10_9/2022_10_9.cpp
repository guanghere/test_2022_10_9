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


//	������	operator������
//	��������	������������󷵻�ֵ��ʲô
//	����  �������м����������������м�������

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
//	//	Ĭ�������C++��֧���Զ������Ͷ���ʹ�������
//
//	//	cout << (d1 > d2) << endl;			//	���������,  << �����ȼ��� > �� , �������Ż�err 
//	//	cout << operator>(d1, d2) << endl;
//
//	//d1 > d2;
////	int day1 = d2 - d1;
////	int day2 = d3 - d1;
//
//	//	һ���ѽ����ڵĶ��󿽱���ʼ��һ�����ϴ���ʵ�����Ķ���
//	Date d4(d1);		//	��������
//
//	//	�����ѽ����ڵĶ���֮����и��ƿ���
//	d1 = d3;
//
//	
//	return 0;
//}