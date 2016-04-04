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

template <class B>
void print(B x[],B y)
{
	for (int i = 0; i < y; i++)
	{
		cout << x[i] << endl;
	}
}



int main()
{
	const int size = 5;		//number of elements in array

	int array[size] = { 24, 66, 74, 2, 30 };		//array of integers
	cout << "Unsorted array of Integers" << endl;
	print(array,size);								//calls template function to print 


	sort(array, size);								//calls sorting function
	cout << endl << "Sorted array of Integers" << endl;
	print(array, size);								//calls template function to print 


	float array2[size] = { 12.66, 54.77, 87.02, 4.65, 30.78 };		//array of floats
	cout << endl << "Unsorted array of Floats" << endl;
	print(array2, float(size));								//calls template function to print 

	sort(array2, float(size));								//sorts array of floats
	cout << endl << "Sorted array of Floats" << endl;
	print(array2, float(size));								//calls template function to print 

	
}