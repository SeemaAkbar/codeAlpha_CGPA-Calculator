#include<iostream>
using namespace std;
int main(){
	int n;
	float creditHours,GradePoints;
	float totalCredits=0;
	float totalpoints=0;
	float cgpa;
	cout<<"CGPA Calculator"<<endl;
	cout<<"Enter number of subjects:";
	cin>>n;
	for(int i=1;i<=n;i++){
		cout<<"\nSubjects"<<i<<endl;
		cout<<"Enter credit hours:";
		cin>>creditHours;
		cout<<"Enter grade points:";
		cin>>GradePoints;
		totalCredits+=creditHours;
		totalpoints+=creditHours*GradePoints;
	}
	if (totalCredits>0){
		cgpa=totalpoints/totalCredits;
		
		cout<<"\nTotal Credit Hours:"<<totalCredits;
		cout<<"\nYour CGPA is:"<<cgpa<<endl;
	}
	else{
		cout<<"Invalid credit Hours!"<<endl;
	}
	return 0;
}
