#include <iostream>
#include <iomanip>
using namespace std;

void MatrisTopla(int[][3], int[][3]);
void MatrisCarp(int[][2], int[][3]);
void MatrisiEkranaYaz(int[][3]);

int main()
{
	//int A[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
	//int B[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
	int A[3][2] = { {1,2}, {4,5}, {7,8} };
	int B[2][3] = { {1,2,3}, {4,5,6} };
	//MatrisTopla(A, B);
	MatrisCarp(A, B);
	return 0;
}

void MatrisTopla(int A[][3], int B[][3])
{
	int C[3][3];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			C[i][j] = A[i][j] + B[i][j];
		}
	}
	MatrisiEkranaYaz(C);
}

void MatrisCarp(int A[][2], int B[][3])
{
	int C[3][3] = {};
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 2; k++)
			{
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}
	MatrisiEkranaYaz(C);
}

void MatrisiEkranaYaz(int C[][3])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << setw(4) << C[i][j];
		}
		cout << endl;
	}
}
