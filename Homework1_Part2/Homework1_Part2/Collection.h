#ifndef COLLECTION_H
#define COLLECTION_H
#include<iostream>
using namespace std;

template <typename t>
class collection
{
public:
	collection() {
		size = 15;
		testArr = new t[size];
		for (int i = 0; i < size; i++) {
			testArr[i] = '\0';
		}
	}
	bool isEmpty() const;
	void makeEmpty();
	void insert(t val);
	void remove(t val);
	void removeRandom();
	bool notContained(t val) const;

private:
	t* testArr;
	int size;
};

//Function that returns true if and only if there are no objects within the collection
template <typename obj>
bool collection<obj>::isEmpty() const
{
	for (int k = 0; k < size; k++)
	{
		if (testArr[k] != '\0') {
			return false;
		}
		else {
			return true;
		}
	}
}

//Function that removes all objects from the collection
template <typename obj>
void collection<obj>::makeEmpty()
{
	for (int k = 0; k < size; k++)
	{
		testArr[k] = '\0';
	}
}

//Function that inserts an object (x) into the collection
template <typename obj>
void collection<obj>::insert(obj val)
{
	int temp = 0;
	for (int s = 0; s < size; s++)
	{
		if (testArr[s] != '\0')
			temp++;
	}

	if (temp >= size)
	{
		obj* temp = new obj[size * 2];
		for (int c = 0; c < size; c++)
			temp[c] = testArr[c];
		delete testArr;
		testArr = temp;
	}
	else
		testArr[temp] = val;
		cout << "\n" << val << " inserted" << endl;
}

//Function that removes an object (x) from the collection (if the object exists)
template <typename obj>
void collection<obj>::remove(obj val)
{
	for (int x = 0; x < size; x++)
	{
		if (testArr[x] == val)
		{
			for (int y = x; y < size - 1; y++)
			{
				testArr[y] = testArr[y + 1];
			}
			testArr[size - 1] = '\0';
			cout << "\n" << val << " removed" << endl;
			return;
		}
	}
}

//Function that removes an object at random from the collection
template<typename obj>
void collection<obj>::removeRandom()
{
	int randomNum = rand() % size + 1;
		for (int y = randomNum; y < size - 1; y++)
		{
			testArr[y] = testArr[y + 1];
		}
		testArr[size - 1] = '\0';
		return;
}

//Function that returns true if and only if an Object that is equal to (x) is not present in the collection
template <typename obj>
bool collection<obj>::notContained(obj val) const
{
	for (int z = 0; z < size; z++)
	{
		if (testArr[z] == val)
			return false;
	}
	return true;
}
#endif