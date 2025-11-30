#include <iostream>
using namespace std;

int main(){
	string word;
	cout<<"Enter a word: ";
	cin>>word;
	
	int n= word.size();
	bool palindrome=true;
	
	for(int i=0;i<n/2;i++){
		if(word[i] !=word[n-i-1]){
			palindrome=false;
			break;
		}
	}
	if (palindrome)
	cout<<"Perfect  secret word";
	else
	cout<<"Not a square word";
	return 0;
	
}
