#include <iostream>
using namespace std;
int main()
{
	const int size = 5;
	int ar[size];
	int check = 0 , next=0;
    
    
    // to get elements values
	for (int i =0 ; i< size; i++)
	{
		cout << "enter number " << i + 1 << " : ";cin >> ar[i];
	}



    //to swap elements in array
	for (int i=0 ;i< size;i++)
		for (int g = i+1 ; g< size;g++)
			if (ar[i] < ar[g])
			{
				check = ar[i];
				ar[i] = ar[g];
				ar[g] = check;
			}
	check = 0;



	// to count the number of elements in array (a-s)+(s-d)+(d-f)......
	for (int i = 0;i < size-1;i++)
	{

		next++;
		check += (ar[i] - ar[next]);
	}



    // to give you the elements in array 
	cout << "\nthe elements of array is [ ";
	for (int i = 0;i < size-1;i++)
	{
		cout << ar[i] << " , ";
	}
	cout <<ar[size-1]<< " ] \n";



    //the total of suming 
	cout << "the total of ("
		<<ar[size-5]<<"-" << ar[size - 4] << ") + (" 
		<< ar[size - 4] << "-" << ar[size - 3] << ") + ("
		<< ar[size - 3] << "-" << ar[size-2] << ") + ("
		<< ar[size - 2] << "-" << ar[size - 1]
		<< ")  ........ for your array is { " << check << " }\n";

}