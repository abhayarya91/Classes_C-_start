/*write a C++ program to enter marks of five
  subject and calculate average and percentage...*/
  
#include<iostream>
using namespace std;
int main()
{
	int sub1,sub2,sub3,sub4,sub5;
	float avrg,per,total_marks;
	cout<<"Enter your marks "<<endl;
	cin>>sub1>> sub2>> sub3>> sub4>> sub5;
	// Calculattion of total marks
	   total_marks=(sub1+sub2+sub3+sub4+sub5);
	   cout<<"your total marks is="<<total_marks<<endl;
	     // now calculate the avegare mark
	        avrg=(sub1+sub2+sub3+sub4+sub5)/5;
	        cout<< "your average marks is="<<avrg<<endl;
    // now calculate percentage of five marks
	    per=(total_marks/500.0)*100;
	    cout<<"your percentage of five subjects is="<<per;
	return 0;
}

