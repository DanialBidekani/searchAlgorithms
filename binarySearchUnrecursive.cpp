// this program is written by ---> danial bidekani
// and implements one of the famous algorithm called
// binary search in a unrecursive approach
// Fri Aug 19 2016

#include <iostream>

using namespace std;

// functions
int binarySearch(int[],int, int, int);

int main()
{
	int arr[4] = {5, 9, 12, 20};
	// function call for test the function
	cout<<binarySearch(arr, 0, 3, 21)<<endl;
}

// implementation functions area

int binarySearch(int array[], int startPoint, int endPoint, int key)
{
	int element;

	while(startPoint < endPoint)
	{
		element = (startPoint+endPoint)/2;
		if(array[element] == key)
			return element;
		else if(array[element] > key)
			endPoint = element-1;
		else
			startPoint = element+1;
	}
	return -1;
}
