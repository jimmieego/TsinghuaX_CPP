#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n, sum=0, min, max;

	cin >> n;
	
	int input[n];
	int i;

	for (i = 0; i < n; i++){
		cin >> input[i];
		sum += input[i];
			
    }

    int j;
    min = input[0];
    max = input[0];
    
    for (j = 0; j < n; j++){
      	min = (input[j] < min) ? input[j]: min;
      	max = (input[j] > max) ? input[j]: max;	

    }

	
	cout << sum << " " << min << " " << max << endl;
	
	return 0;
}