#include <iostream>
using namespace std;

/*
题目描述
已知一个只包含0和1的二进制数，长度不大于10，将其转换为十进制并输出。

输入描述
输入一个二进制整数n，其长度不大于10

输出描述
输出转换后的十进制数，占一行

样例输入
110

样例输出
6
*/

int main(int argc, char const *argv[])
{
	unsigned int n, result = 0;
	int i;

	cin >> n;
	
	for (i = 0; n > 0; ++i){
		if((n % 10) == 1)
			result += (1 << i);

		n /= 10;
	}

	cout << result << endl;
	return 0;
}