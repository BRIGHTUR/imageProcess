#include<iostream>  
using namespace std;
//判断是不是素数
int checkPrimeNumber(int n) {
	int j;
	for (j = 2; j < n / 2; j++) {
		if (n%j == 0) {
			return 0;
		}

	}
	return 1;
}
int main()
{
	int i, res;
	for (i = 2; i < 101; i++) {
		res = checkPrimeNumber(i);
		if (res == 1) {
			cout << i << endl;
		}
	}
	system("pause");
	return 0;
}