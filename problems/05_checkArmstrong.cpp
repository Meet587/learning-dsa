#include<bits/stdc++.h>

using namespace std;

bool checkArmstrong(int n){
	//Write your code here
	int count = 0;
	int sum = 0;
	int dup1 = n;
	int dup2 = n;

	while(dup1 != 0)
	{
		count ++;
		dup1=dup1/10;
	}

	while(dup2)
	{
		sum = sum + pow((dup2%10), count);

		dup2=dup2/10;
	}

	// cout<<"count "<<count<<endl;
	// cout<<"sum  "<<sum<<endl;
	return n == sum;
}


int main()
{
    cout<< checkArmstrong(1)<<endl;
    cout<< checkArmstrong(18)<<endl;
    cout<< checkArmstrong(371)<<endl;
    cout<< checkArmstrong(1634)<<endl;
    return 0;
}