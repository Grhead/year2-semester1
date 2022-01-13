#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const int n = 7;
	const int m = 7;
	/*double A[7][7] = { {555,-13,13,4,67,115,11 }, { 1,12,109,5,13,6,13 }, { 4,123,43,4,5,6,7 }, { 1,1,12,4,5,6,55 }, { 8,2,3,48,71,6,7 }, { 1,2,3,856,5,6,7 }, { 1,2,0,4,5,6,7 } };*/
	double A[n][m];
	double* B = new double[m];
	double temp = 0;
	for (int i = 0; i < n; i++) //заполнение матрицы
	{
		for (int j = 0; j < m; j++)
		{
			cout << "Enter" << "[" << i + 1 << "]" << "[" << j + 1 << "]" << "element of matrix: ";
			cin >> A[i][j];
		}
	}

	for (int i = 0; i < n; i++) //вычисление вектора положительных чисел в каждом столбе
	{
		temp = 0;
		for (int j = 0; j < m; j++)
		{
			if (A[j][i] > 0)
			{
				temp += A[j][i];
			}
			else {
				continue;
			}
		}
		B[i] = temp / m;
	}
	
	double minimal = 0;
	int MinIndex = 0;
	double multi = 1;

	for (int i = 0; i < m; i++) //нахождение минимального элемента и его индекса
	{
		if (B[MinIndex] > B[i])
		{
			MinIndex = i;
		}
	}
	minimal = B[MinIndex];
	cout << "Minimal element: " << minimal << endl; //вывод минимального элемента
	for (int i = 0; i < m; i++) //вывод массива
	{
		cout << B[i] << " ";
	}
	cout << endl << endl; //нахождение произведения элементов вектора
	for (int i = 0; i < MinIndex; i++)
	{
		multi *= B[i];
	}
	cout << "Multiply: " << multi << endl;
	
	for (int i = 0; i < n; i++) { // Вывод матрицы
		for (int j = 0; j < m; j++) {
			cout << setw(4) << A[i][j];
		}
		cout << endl;
	}
	return 0;
}
