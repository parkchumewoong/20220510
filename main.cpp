#include <iostream>

using namespace std;

int Sum(int A, int Cnt)
{
	int TotalSum = 0;

	for (int i = 0; i < Cnt; i++)
	{
		TotalSum += A;
	}

	return TotalSum;
}

int main()
{
	int Count = 10;


	cout << "����Ƚ��: ";
	cin >> Count;

	int A = 0;

	for (int i = 0; i < Count; i++)
	{
		cout << "���Ұ�: ";
		cin >> A;
	}

	cout << Sum(A, Count) << endl;

	
	return 0;
}