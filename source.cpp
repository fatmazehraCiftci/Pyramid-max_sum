
#include <iostream>
#include <fstream>
using namespace std;

int primeNumber(int value) {
	int counter = 0;
	for (int k = 2; k < value; k++)
	{
		if (value % k == 0)
		{
			counter++;
			break;
		}
	}
	if (counter == 0)
	{
		return value;  //value is a prime number
	}
	else
		return 0;  //value is not a prime number
	
}

int main() {

	int number, max_sum,temp;
	max_sum = 0;
	int number_of_lines = 0;
	string line;
	ifstream input;  //dosyada alma
	input.open("fileP.txt");
	input >> number;

	
	max_sum += number;

	while(!input.eof())
	{     
		for (int j = 0;  ;j++) {  //j is coloumn num
			input >> temp;   
			if (primeNumber(temp) == 0){  //if temp value is not a prime number  
				cout << temp << endl;
				max_sum += temp; 
				
			}
			else {    //if temp is a prime number then max_value  add temp value
				j += 2;
				
			}
			
		}
	} 
	
	input.close();   //dosya kapatıldı

	cout << max_sum << endl;
	system("pause");
	return 0;
}
