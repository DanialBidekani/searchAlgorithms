// this program is written by ---> danial bidekani
// and implements one of the famous algorithm called
// binary search
// Fri Aug 19 2016

#include <iostream>

using namespace std;

// functions
int binarySearch(int[],int, int, int);

int main()
{
	int arr[4] = {5, 9, 12, 20};
	// function call for test the function
	cout<<binarySearch(arr, 0, 3, 9)<<endl;
}

// implementation functions area

int binarySearch(int array[], int startPoint, int endPoint, int key)
{
	if( startPoint < endPoint)
	{
		int element = (startPoint+endPoint) / 2;
		if(array[element] == key)
			return element;
		else if(array[element] > key)
			return binarySearch(array, startPoint, element-1, key);
		else if(array[element] < key)
			return binarySearch(array, element+1, endPoint, key);
	}
	else
		return -1;
}
