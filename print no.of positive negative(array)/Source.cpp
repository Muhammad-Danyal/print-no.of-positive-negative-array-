#include<iostream>
using namespace std;

int main() {
	int arr[20];
	int pos = 0;
	int neg = 0;
	int zero = 0;
	int even = 0;
	int odd = 0;

	for (int i = 0; i < 20; i++) {
		cout << "array[" << i << "] = ";
		cin >> arr[i];
		if (arr[i] > 0)
			pos++;
		if (arr[i] < 0)
			neg++;
		if (arr[i] % 2 == 0)
			even++;
		if (arr[i] % 2 != 0)
			odd++;
		if(arr[i]==0)
			zero++;
	}
	cout << "positive no = "<<pos<<endl;
	cout << "negative no = "<<neg<<endl;
	cout << "zero no = "<<zero<<endl;
	cout << "even no = "<<even<<endl;
	cout << "odd no = "<<odd<<endl;
	return 0;
}