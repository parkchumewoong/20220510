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


	cout << "더할횟수: ";
	cin >> Count;

	int A = 0;

	for (int i = 0; i < Count; i++)
	{
		cout << "더할값: ";
		cin >> A;
	}

	cout << Sum(A, Count) << endl;

	
	return 0;
}