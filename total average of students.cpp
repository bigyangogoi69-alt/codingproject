#include <iostream>
using namespace std;

int main(){
	int n,marks,total;
	
	cout<<"Enter total no. of students: ";
	cin>>n;
	for(int i=1;i<=n;i++){
		
	cout<<"Enter marks of student "<<i<<"(out of 100)= ";
	cin>>marks;
	total+=marks;
	
	}
	double average=total/n;
	cout<<"Total marks = "<<total<<endl;
	cout<<"Average marks = "<<average<<endl;
	return 0;
	
}
