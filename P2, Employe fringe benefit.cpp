#include<iostream>
using namespace std;
 int main()
 {
 	int level, medical, fuel;
	double salary,fringe;
 	
	cout<<"	*#*#*#*#*#*#*#*#";
 	cout<<"\n	Employees fringe benefit";
 	cout<<"\n	*#*#*#*#*#*#*#*#";
 	
 	cout<<"\nEnter your (employe) level from 1-8: ";
 	cin>>level;
 	
 	cout<<"\nEnter your (employe) salary: ";
 	cin>>salary;
 	
 	if(level>=1 && level<=4)
 	{
 		if(salary<200000)
 		{
 			medical = 50000;
			fuel = 15000;
			fringe=medical+fuel;
			cout<<"Your medical= "<<medical<<" and fuel= "<<fuel;
			cout<<"\nYour total fringe benefit = "<<fringe;
		}
		
		else if(salary>=200000)
 		{
 			medical = 75000;
			fuel = 20000;
			cout<<"Your medical= "<<medical<<" and fuel= "<<fuel;
			cout<<"\nYour total fringebenefit = "<<medical+fuel;
		}
	}
	
	else if(level>=5 && level<=8)
 	{
 		if(salary<100000)
 		{
 			medical = 15000;
			cout<<"Your medical= "<<medical;
			cout<<"\nYour total fringe benefit = "<<medical;
		}
		else if(salary>=100000)
 		{
 			medical = 25000;
			cout<<"Your medical= "<<medical;
			cout<<"\nYour total fringe= "<<medical;
		}
	}
 }
