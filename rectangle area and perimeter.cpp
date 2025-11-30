#include<iostream>
using namespace std;

int main(){
	int l,b;
	int area,perimeter;
	
	cout<<"Enter length of the rectangle:";
	cin>>l;
	cout<<"Enter width of the rectangle:";
	cin>>b;
	
	area= l*b;
	perimeter= 2*(l+b);
	
	cout<<"Area = "<<area<<endl;
	cout<<"Perimeter = "<<perimeter<<endl;
	
	return 0;
}
