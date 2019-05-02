#include <iostream>
#include <string>
using namespace std;

template<typename T>
void reverse(T list[], T newList[], int size)
{
	for (int i = 0, j = size - 1; i < size; i++, j--)
	{
	newList[j] = list[i];
	}
}
template<typename T>
void printArray(const T list[], int size)
{
	for (int i = 0; i < size; i++)
		cout << list[i] << " ";
}
	
int main()
{
	const int SIZE = 6;
	string list[SIZE] = {"a","b","c","d","e","f"};
	string newList[SIZE];

	reverse(list, newList, SIZE);

	cout << "The original array: ";
	printArray(list, SIZE);
	cout << endl;

	cout << "The reversed array: ";
	printArray(newList, SIZE);
	cout << endl;


	double list1[SIZE] = {1.1,2.2,3.3,4.4,5.5,6.6};
	double newList1[SIZE];

	reverse(list1, newList1, SIZE);

	cout << "The original array: ";
	printArray(list1, SIZE);
	cout << endl;

	cout << "The reversed array: ";
	printArray(newList1, SIZE);
	cout << endl;

	system("pause");
	return 0;
}
