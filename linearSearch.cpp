// this program is written by me, danial bakhtiarvand
// this program is LINEAR SEARCH
// Best case: O(1)
// Worst case: O(n)
// Average case: O(n)
// ***************************************************
#include <iostream>
using namespace std;

int main( int argc, char ** argv ) {
	int array[] = {65, 6, 3, 0, 5, 20};

	cout<<"Enter Your Key(an integer number): \n";
	int i, key;
	bool situation = false;
	cin>>key;

	for(i=0; i<6; i++)
		if(key == array[i])
		{
			situation = true;
			break;
		}

	if(situation == true)
		cout<<"founded!!!, and its index is: "<<i;
	else
		cout<<"Not Found!!!\n";
	return 0;
}
