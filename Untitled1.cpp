//Name=M Faizan Sohail
#include<iostream>
using namespace std;
int main()
{
	int age,experience;
	cout<<"Enter Your Age:";
	cin>>age;
	if (age<18)
	   {
	   cout<<"Not eligible for insurance.";
       }
	else
	    {
		cout<<"Enter your experience";
	cin>>experience;
	if (experience<2 && age>=18)
	    cout<<"High Risk Category"<<endl<<"Premium: Rs. 10000"<<endl;
	else if (experience>=2 && experience<=4 && age>=18)
	    cout<<"Medium Risk Category"<<endl<<"Premium: Rs. 6000"<<endl;
	else if (experience>=5 && age >=18 && age <60)
	    cout<<"Low Risk Category"<<endl<<"Premium Rs. 3000"<<endl;
	else if (experience >=5 && age>=60)
	    cout<<"Low Risk Category"<<endl<<"Senior Driver Surcharge Applied"<<endl<<"Total Premium Rs. 4000"<<endl;
	}
	return 0;
}
