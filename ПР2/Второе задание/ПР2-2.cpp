#include "classification.h";
#include <iostream>

using namespace std;

int main() {

	setlocale(LC_ALL, "Russian");

	Circle A(0, 0, 0);
	Circle B(0, 0, 0);
	Circle C(0, 0, 0);

	float radius, x_center, y_center;
	float R, X, Y; float a, b, c;

	cout << "������� ������, � � � ��� ���������� �1 ����� ������: ";
	cin >> radius >> x_center >> y_center;
	A.set_circle(radius, x_center, y_center);

	cout << "������� ������, � � � ��� ���������� �2 ����� ������: ";
	cin >> radius >> x_center >> y_center;
	B.set_circle(radius, x_center, y_center);

	cout << "������� ������, � � � ��� ���������� �3 ����� ������: ";
	cin >> radius >> x_center >> y_center;
	C.set_circle(radius, x_center, y_center);

	cout << "������� ����� ������ ������������ ����� ������: ";
	cin >> a >> b >> c; cout << endl;

	cout << "������� ���������� �1 - " << A.square() << endl;
	cout << "������� ���������� �2 - " << B.square() << endl;
	cout << "������� ���������� �3 - " << C.square() << endl;
	cout << endl;

	A.get_circle(R, X, Y);
	if (B.check_circle(R, X, Y)) cout << "���������� �1 � �2 ������������" << endl;
	else cout << "���������� �1 � �2 �� ������������" << endl;
	B.get_circle(R, X, Y);
	if (C.check_circle(R, X, Y)) cout << "���������� �2 � �3 ������������" << endl;
	else cout << "���������� �2 � �3 �� ������������" << endl;
	C.get_circle(R, X, Y);
	if (A.check_circle(R, X, Y)) cout << "���������� �1 � �3 ������������" << endl;
	else cout << "���������� �1 � �3 �� ������������" << endl;
	cout << endl;

	if (A.triangle_around(a, b, c)) cout << "���������� �1 ����� ������� � �������� �����������" << endl;
	else cout << "���������� �1 ������ ������� � �������� �����������" << endl;
	if (B.triangle_around(a, b, c)) cout << "���������� �2 ����� ������� � �������� �����������" << endl;
	else cout << "���������� �2 ������ ������� � �������� �����������" << endl;
	if (C.triangle_around(a, b, c)) cout << "���������� �3 ����� ������� � �������� �����������" << endl;
	else cout << "���������� �3 ������ ������� � �������� �����������" << endl;
	cout << endl;

	if (A.triangle_in(a, b, c)) cout << "� ���������� �1 ����� ������� �������� �����������" << endl;
	else cout << "� ���������� �1 ������ ������� �������� �����������" << endl;
	if (B.triangle_in(a, b, c)) cout << "� ���������� �2 ����� ������� �������� �����������" << endl;
	else cout << "� ���������� �2 ������ ������� �������� �����������" << endl;
	if (C.triangle_in(a, b, c)) cout << "� ���������� �3 ����� ������� �������� �����������" << endl;
	else cout << "� ���������� �3 ������ ������� �������� �����������" << endl;

	return 0;

}