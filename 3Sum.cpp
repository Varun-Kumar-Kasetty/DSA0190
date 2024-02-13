#include <iostream>
using namespace std;

int threesum(int a[], int arr_size, int sum) 
{
	for (int i = 0; i < arr_size - 2; i++)
	{ 
		for (int j = i + 1; j < arr_size - 1; j++)
		{ 
			for (int k = j + 1; k < arr_size; k++)
			{ 
				if (a[i] + a[j] + a[k] == sum)
				{ 
					cout << "Triplet is " << a[i] << ", " << a[j] << ", " << a[k]; 
				} 
			} 
		} 
	} 
} 
int main() 
{ 
	int a[] = { 1, 4, 5, 6, 10, 8 }; 
	int sum = 22; 
	int arr_size = sizeof(a) / sizeof(a[0]); 
	threesum(a, arr_size, sum); 
	return 0; 
}
