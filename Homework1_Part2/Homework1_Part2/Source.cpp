#include <iostream>
#include "Collection.h"
using namespace std;

//Driver
int main()
{
	//Instantiate a collection "test"
	collection<int> test;

	//Test "isEmpty" function"
	cout << "Collection empty: " << boolalpha << test.isEmpty() << endl;
	test.insert(2);
	cout << "Collection empty: " << boolalpha << test.isEmpty() << endl;

	//Test the "insert" and "remove" functions
	test.insert(5);
	cout << "Is 5 not contained? " << boolalpha << test.notContained(5) << endl;
	test.remove(5);
	cout << "Is 5 not contained? " << boolalpha << test.notContained(5) << endl;

	//Fill array
	for (int h = 0; h <= 15; h++) {
		test.insert(h);
	}
	//Display objects notContained in array
	for (int j = 0; j <= 15; j++) {
		cout << "Is " << j << " not contained? " << boolalpha << test.notContained(j) << endl;
	}


	//Test the "removeRandom" and "notContained" functions
	//We can observe which object was removed by watching the change of the notContained variable
	test.removeRandom();
	for (int j = 0; j <= 15; j++){
		cout << "Is " << j << " not contained? " << boolalpha << test.notContained(j) << endl;
}

	//Test the "makeEmpty" function
	test.makeEmpty();
	cout << "Collection empty: " << boolalpha << test.isEmpty() << endl;

	system("pause");
	return 0;
}