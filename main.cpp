#include <iostream>
#include "Circle_H.h"

using namespace std;

int main()
{
	double s,r; //s����� r���뾶
	cin >> r;      //����뾶
	s = calculate(r); //�������
	cout << s << endl; //������
	return 0;
}