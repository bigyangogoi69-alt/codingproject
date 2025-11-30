#include <iostream>
using namespace std;

int main()
{
	int n,i;
	
	cout<<"Enter a number to check whether a no. is prime or not: ";
	cin>>n; 
	
	if(n<=1)
	cout<<"Not prime"<<endl;
	else{

		for(i=2;i<=n;i++){
			if(n%i==0)
		break;
	}
	if(i==n)
	cout<<n<<" is a prime no."<<endl;
	else
	cout<<n<<" is not a prime no."<<endl;
	}
	
	if(n%2==0)
	cout<<"Even number";
	else 
	cout<<"Odd number";
	
	return 0;
}
