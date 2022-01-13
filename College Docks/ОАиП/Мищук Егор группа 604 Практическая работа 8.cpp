#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const int n = 7;
	const int m = 7;
	int A[n][m] = { {1,2,3,4,5,6,7}, {1,2,3,4,5,6,7}, {1,2,3,4,5,6,7}, {1,2,3,4,5,6,7}, {1,2,3,4,5,6,7}, {1,2,3,4,5,6,7}, {1,2,3,4,5,6,7} };
	int* arr = new int[n];
	int temp0 = 0;
	int temp1 = 0;
	int temp2 = 0;
	int temp3 = 0;
	int temp4 = 0;
	int temp5 = 0;
	int temp6 = 0;
	/*for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << "Enter" << "[" << i+1 << "]" << "[" << j+1 << "]" << "element of matrix: ";
			cin >> A[i][j];
		}
	}*/
	for (int i = 0; i < 7; i++)
	{
		if (A[0][i] > 0)
		{
			temp0 += A[0][i];
		}
		if (A[1][i] > 0)
		{
			temp1 += A[1][i];
		}
		if (A[2][i] > 0)
		{
			temp2 += A[2][i];
		}
		if (A[3][i] > 0)
		{
			temp3 += A[3][i];
		}
		if (A[4][i] > 0)
		{
			temp4 += A[4][i];
		}
		if (A[5][i] > 0)
		{
			temp5 += A[5][i];
		}
		if (A[6][i] > 0)
		{
			temp6 += A[6][i];
		}
	}
	cout << temp0 << ' ' << temp1 << ' ' << temp2 << ' ' << temp3 << ' ' << temp4 << ' ' << temp5 << ' ' << temp6;
	cout << endl;
	arr[0] = temp0 / 7;
	arr[1] = temp1 / 7;
	arr[2] = temp2 / 7;
	arr[3] = temp3 / 7;
	arr[4] = temp4 / 7;
	arr[5] = temp5 / 7;
	arr[6] = temp6 / 7;
	for (int i = 0; i < 7; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << setw(4) << A[i][j];
		}
		cout << endl;
	}
	return 0;
}
