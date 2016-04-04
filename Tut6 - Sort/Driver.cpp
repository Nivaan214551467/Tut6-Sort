#include <iostream>

using namespace std;

template <class A>
void sort(A x[], A y)		//template function used to sort
{
	A temp;					//temporary variable to store values when sorting

	for (int i = 0; i < y -1 ; i++)
	{
		for (int j = 0; j < y - i - 1; j++)
		{
			if (x[j] < x[j + 1])		//swaps if condition is true
			{
				temp = x[j];
				x[j] = x[j + 1];
				x[j + 1] = temp;
			}
		}
	}


}


int main()
{
	const int size = 5;		//number of elements in array

	int array[size] = { 24, 66, 74, 2, 30 };		//array of integers
	sort(array, size);								//calls sorting function

	for (int i = 0; i < size; i++)					//prints sorted array
	{
		cout << array[i] << endl;
	}



}