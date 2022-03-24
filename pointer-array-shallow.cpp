#include <iostream>
using namespace std;

int main()
{
	int *ptr, a[10]={1,2,3,4,5,6,7,8,9,10};
	int *b = new int[10];

	/* address of a[0] is assigned to ptr */
	ptr = &a[0];   

	// I want to copy the values in a into b; since i've declared b
    // as a dynamically allocated array,
	// I can now do pointer magic!!
	b = ptr;

	cout << "Value of first element in b " << b[0] << endl; 
	cout << "Value of second element in b " << b[1] << endl; 

	a[1] = 42;
	cout << "Value of second element in b " << b[1] << endl;

	return 0;
}

/*The problem:
The memory space is not freed up after it is allocated. The problem is at line 7.
You have to use the del function to remove the allocated space in the heap, to prevent a phenomenon called memory leak.
*/
