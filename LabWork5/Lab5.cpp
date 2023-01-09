#include <iostream>
using namespace std;
int main()
{
	//The program begins here
	int numArr[5] = { 1, 2, 3, 4, 5};//Create int array that consist of 5 elements
	int* pMyArr = nullptr;//Create pointer and pass NULL value to it
	pMyArr = &numArr[2];//Pass the adress of the third element from the array
	pMyArr[1] = 0;//Pass zero to the adres of the 4th element of the array
	cout << numArr[3]<<"\n";//The output shoud be 0

	bool boArr[10] = {true, false, false, true, true, true, false, false, true, false};//Create boolean array 
	cout << "Enter the length of the array (1-10): "; //Take user input
	int userLen;//Variable for input
	cin >> userLen;//Input functionale
	if (userLen >= 10)//Some protection
		userLen = 10;
	if (userLen <= 0)//Some protection
		userLen = 1;

	bool* pYoArr = nullptr;
	pYoArr = new bool[userLen];
	pYoArr = boArr;
	
	for (int i = 0; i < sizeof(pYoArr)/sizeof(bool); i++)//Output functionale
		cout << pYoArr[i] << " ";//The output should be exect same number of elements that user enter previously
	
}