#include <iostream>
using namespace std;

/*

题目描述
打印n阶实心菱形

输入描述
输入一个整数n，n<=10

输出描述
输出n阶实心菱形，占2*n-1行

样例输入
3
样例输出
  *
 ***
*****
 ***
  *

*/

int main(int argc, char const *argv[])
{
	int i;
	int k;
	int n;
	int max;
	int spaceCount;

	cin >> n;

	for (k = 1; k <= n; k++) {
		max = 2 * k - 1;
		spaceCount = (2*n - 1 - max)/2;

		for (i = 1; i <= spaceCount; i++) {
			cout << " ";
		} 
		for (i = 1; i <= max; i++) {
			cout << "*";
		}
		for (i = 1; i <= spaceCount; i++) {
			cout << " ";
		}
		
		cout << endl;
	}

	for (k = n-1; k >= 1; k--) {
		max = 2 * k - 1;
		spaceCount = (2*n - 1 - max)/2;

		for (i = 1; i <= spaceCount; i++) {
			cout << " ";
		} 
		for (i = 1; i <= max; i++) {
			cout << "*";
		}
		for (i = 1; i <= spaceCount; i++) {
			cout << " ";
		}
		
		cout << endl;
	}

	
	return 0;
}