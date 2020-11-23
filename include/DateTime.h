#ifndef DATATIME_H
#define DATATIME_H

#include <ctime>
#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

class DateTime
{
private:
	struct tm now_date;
public:
	DateTime(int, int, int); //����������� � ����� ��������� �����������(����, �����, ���);
	DateTime(void); //����������� ��� ����������(������ ���������� ������� ����);
	DateTime(DateTime&); //����������� �����������(������ ����� ������� �������);
	string getToday(); //����������� ������� ���� � ���� ������, � ��������� ��� ������ � �������� ������(�������� 07 november 2018, wedensday);
	string getYesterday(); //����������� ���� ���������� ��� � ���� ������.
	string getTomorrow(); //����������� ���� ����������� ��� � ���� ������.
	string getFuture(unsigned int); //����������� ���� ����� N ���� � �������;
	string getPast(unsigned int);  //����������� ���� ����� N ���� � �������;
	int getDifference(DateTime&); //��� ������� �������(� ����) ����� ����� ������
};

#endif
