/*#include <iostream>
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
}*/


/*#include <iostream>
using namespace std;

int main(){
	double celsius,fahrenheit;
	
	cout<<"Enter temperature (in celsius): ";
	cin>>celsius;
	
	 fahrenheit = (celsius*9/5)+32;
	
	 
	cout<<"Temperature in Fahrenheit = "<< fahrenheit <<endl;
	
	return 0;
}*/


/*#include <iostream>
using namespace std;

int main(){
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
}*/


/*#include <iostream>
using namespace std;

int main(){
	int n;
	
	cout<<"Enter a number:";
	cin>>n;
	
	if(n%2==0)
	cout<<"Even number"<<endl;
	else 
	cout<<"Odd number"<<endl;
	
	if(n%5==0){
		cout<<"Divisible by 5";
		}else{
			cout<<"Not divisible by 5";
		}
		
	return 0;
}*/


/*#include <iostream>
using namespace std;

int main(){
	int a,b;
	cout<<"Enter two nos.=";
	cin>>a;
	cout<<" and ";
	cin>>b;
	
	int x=a,y=b;
	
	while(b !=0){
		int temp=b;
		b=a%b;
		a= temp;
	}
	int gcd =a;
	int lcm=(x*y)/gcd;
	cout<<"GCD = "<<gcd<<endl;
	cout<<"LCM = "<<lcm<<endl;
	
	return 0;
}*/



/*#include <iostream>
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
	
}*/


#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter number of subjects: ";
	cin>>n;
	int marks[n];
	
	for(int i=0;i<n;i++){
		cout<<"Enter marks of subject "<<i<<":"<<endl;
		cin>>marks[i];
	}

int highest=marks[0];
int lowest=marks[0];

for(int i=1;i<n;i++){
	if(marks[i]>highest)
	highest=marks[i];
	if(marks[i]<lowest)
	lowest=marks[i];
}
cout<<"Highest marks= "<<highest<<endl;
cout<<"Lowest marks= "<<lowest<<endl;
return 0;

}



/*#include <iostream>
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
	
}*/


/*#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of days: ";
    cin >> n;               
    int arr[n];

    cout << "Enter exercise time for each day (in minutes): ";
    // Input exercise times
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\nExercise times in reverse order: ";
    // Print in reverse order
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i];
        if (i > 0) cout << " "; 
    }

    return 0;
}*/



/*#include <iostream>
using namespace std;

int main() {
    int n, x, pos = 0, neg = 0, zero = 0;

    cout << "Enter number of readings: ";
    cin >> n;

    cout << "Enter the readings: "<<endl;
    for(int i = 0; i < n; i++) {
        cin >> x;
        if(x > 0) pos++;
        else if(x < 0) neg++;
        else zero++;
    }

    cout << "Positive = " << pos << endl;
    cout << "Negative = " << neg << endl;
    cout << "Zero = " << zero;

    return 0;
}*/




/*#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter total number of students: ";
    cin >> n;   // Total number of students

    int attendance[n];
    int present = 0, absent = 0;

    cout << "Enter attendance record (1 for present, 0 for absent): ";
    for (int i = 0; i < n; i++) {
        cin >> attendance[i];
        if (attendance[i] == 1)
            present++;
        else
            absent++;
    }

    cout << "\n--- Attendance Summary ---" << endl;
    cout << "Present: " << present << endl;
    cout << "Absent: " << absent << endl;

    return 0;
}*/



/*#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of days: ";
    cin >> n;

    int *records = new int[n];   

    int totalProfit = 0, totalLoss = 0;

    cout << "Enter profit/loss for each day: ";
    for (int i = 0; i < n; i++) {
        cin >> records[i];
        if (records[i] > 0)
            totalProfit += records[i];
        else
            totalLoss += (-records[i]);
    }

    int netBalance = totalProfit - totalLoss;

    cout << "\n--- Weekly Summary ---" << endl;
    cout << "Total Profit: " << totalProfit << endl;
    cout << "Total Loss: " << totalLoss << endl;
    cout << "Net Balance: " << netBalance << endl;

    delete[] records;  // free memory
    return 0;
}*/



/*#include <iostream>
using namespace std;

int main() {
    int marks[5][3];
    cout << "Enter marks of 5 students in 3 subjects(Maths, Physics, Computer Science):\n";

    for (int i = 0; i < 5; i++) {
        cout << "Student " << i + 1 << ": ";
        for (int j = 0; j < 3; j++) {
            cin >> marks[i][j];
        }
    }

    int maxMath = 0, maxPhy = 0, maxCS = 0;

    for (int i = 0; i < 5; i++) {
        if (marks[i][0] > maxMath) maxMath = marks[i][0];
        if (marks[i][1] > maxPhy) maxPhy = marks[i][1];
        if (marks[i][2] > maxCS) maxCS = marks[i][2];
    }

    cout << "\n Highest marks in Mathematics: " << maxMath;
    cout << "\n Highest marks in Physics: " << maxPhy;
    cout << "\n Highest marks in Computer Science: " << maxCS;

    return 0;
}*/


/*#include <iostream>
using namespace std;

int main() {
    int A[10][7], student[10] = {0}, day[7] = {0};
    int max = -1, sMax = 1, min = 100, dMin = 1;

    cout << "Enter attendance for 10 students (1 = Present, 0 = Absent):\n\n";
    for (int i = 0; i < 10; i++) {
        cout << "Student " << i + 1 << ": ";
        for (int j = 0; j < 7; j++) {
            cin >> A[i][j];
            student[i] += A[i][j];   // total per student
            day[j] += A[i][j];       // total per day
        }
    }

    cout << "\nWeekly Attendance Summary\n";
    cout << "-------------------------\n\n";

    cout << "Total Present Days:\n";
    for (int i = 0; i < 10; i++) {
        cout << "Student " << i + 1 << ": " << student[i] << " days" << endl;
        if (student[i] > max) { max = student[i]; sMax = i + 1; }
    }

    for (int j = 0; j < 7; j++) {
        if (day[j] < min) { min = day[j]; dMin = j + 1; }
    }

    cout << "\nStudent with Highest Attendance: Student " << sMax << " (" << max << " Days)\n";
    cout << "Day with Lowest Overall Attendance: Day " << dMin << endl;

    return 0;
}*/



/*#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Enter number of students and number of days: ";
    cin >> n >> m;

    int bill[n][m];
    int studentTotal[n] = {0};
    int dayTotal[m] = {0};

    cout << "\nEnter the bill amounts: \n";
    for (int i = 0; i < n; i++) {
        cout << "Student " << i + 1 << ": ";
        for (int j = 0; j < m; j++) {
            cin >> bill[i][j];
            studentTotal[i] += bill[i][j];
            dayTotal[j] += bill[i][j];
        }
    }

    cout << "\n";
 
    for (int i = 0; i < n; i++) {
        cout << "Student " << i + 1 << " total: " << studentTotal[i] << endl;
    }

    int maxDay = 0;
    for (int j = 1; j < m; j++) {
        if (dayTotal[j] > dayTotal[maxDay])
            maxDay = j;
    }

    cout << "\nHighest collection on Day " << maxDay + 1 << endl;

    int maxSpend = studentTotal[0];
    for (int i = 1; i < n; i++) {
        if (studentTotal[i] > maxSpend)
            maxSpend = studentTotal[i];
    }

    cout << "Highest spender: ";
    bool first = true;
    for (int i = 0; i < n; i++) {
        if (studentTotal[i] == maxSpend) {
            if (!first) cout << " and ";
            cout << "Student " << i + 1;
            first = false;
        }
    }
    cout << endl;

    return 0;
}*/






