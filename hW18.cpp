#include <iostream>
using namespace std;

inline double mean_ABC(double A, double B, double C);

int maximum(int A, int B, int C);

double maximum(double A, double B, double C);

short maximum(short A, short B, short C);

template <typename T>
T min_arr(T arr[], const T length);

template <typename T>
void show_arr(T arr[], const int length);

int main() {
	setlocale(LC_ALL, "Russian");
	double n, m, o;

	cout << "������ �1.\n������� ��� �����: ";
	cin >> n >> m >> o;
	cout << "������� �������������� ��� ����� = " << mean_ABC(n, m, o) << ".\n\n";

	cout << "������ �2.\n";
	cout << "������������ �� ��� ����� = " << maximum(2, 11, 4) << ".\n\n";
	cout << "������������ �� ��� ����� = " << maximum(2.4, 1.1, 12.9) << ".\n\n";
	short s1 = 5, s2 = 22, s3 = 1;
	cout << "������������ �� ��� ����� = " << maximum(s1, s2, s3) << ".\n\n";

	cout << "������ �3.\n";
	const int size = 6;
	int arr[size]{ 3, -11, 5, 9, 23, -2};
	cout << "������: ";
	show_arr(arr, size);
	cout << "����������� ������� ������� = " << min_arr(arr, size) << endl;

	return 0;
}

inline double mean_ABC(double A, double B, double C) {
	return (A + B + C) / 3;
}
int maximum(int A, int B, int C) {
	cout << "�������� ��� �������� ���� INT.\n";
	return (A > B) ? ((A > C) ? A : C) : ((B > C) ? B : C);
}
double maximum(double A, double B, double C) {
	cout << "�������� ��� �������� ���� DOUBLE.\n";
	return (A > B) ? ((A > C) ? A : C) : ((B > C) ? B : C);
}
short maximum(short A, short B, short C) {
	cout << "�������� ��� �������� ���� SHORT.\n";
	return (A > B) ? ((A > C) ? A : C) : ((B > C) ? B : C);
}
template <typename T>
T min_arr(T arr[], const T length) {
	int min = arr[0];
	for (int i = 0; i < length; i++)
		min = (arr[i] < min) ? arr[i] : min;
	return min;
}
template <typename T>
void show_arr(T arr[], const int length) {
	cout << "[";
	for (int i = 0; i < length; i++)
		cout << arr[i] << ", ";
	cout << "\b\b]\n";
}
