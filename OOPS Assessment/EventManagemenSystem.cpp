#include<iostream>
#include <cmath>
using namespace std;
class event
{
	public:
		
		
	string	event_type,F_name,L_name;
	void getinfo()
	{
	
	cout<<"************Event Management System************\n\n"<<endl;
	cout<<"Enter the name of the Event :"<<endl;
	cin>>event_type;
	cout<<"Enter your First Name :"<<endl;
	cin>>F_name;
	cout<<"Enter your Last Name :"<<endl;
	cin>>L_name;
}
	void display()
	{
		cout<<"Name of the Event : "<<event_type<<endl;
		cout<<"Name : "<<F_name<<" "<<L_name<<endl;
		
	}
};
int main()
{
	event p1;
	p1.getinfo();
	p1.display();
	int num,min;
	double num1,server,Cost1,Cost2,CostForOneServer,TotalFoodCost,AverageCost,TotalCost,deposit;
	const double CostPerHour = 18.50;
	const double CostPerMinute = 0.40;
	const double CostOfDinner = 20.70;

	cout<<"Enter the number of guests :"<<endl;
	cin>>num;
	cout<<"\n\nEnter the number of minutes in the Event :"<<endl;
	cin>>min;
	num1 = double(num);  		//Type casting integer value into double
	server=num1/20;
	cout<<"Number of Server : "<<ceil(server)<<endl;   //useing ceil() function
	
	Cost1 = (min/ 60) * CostPerHour;
	Cost2 = (min% 60) * CostPerMinute;
	CostForOneServer = Cost1 + Cost2;
	cout<<"The Cost for Servers :"<<CostForOneServer<<endl;
	TotalFoodCost = num * CostOfDinner;
	cout<<"The Cost for Food is :"<<TotalFoodCost<<endl;
	AverageCost = TotalFoodCost / num;
	cout<<"Average Cost per person :"<<AverageCost<<endl;
	TotalCost = TotalFoodCost + (CostForOneServer * server);
	cout<<"\nTotal cost is :"<<TotalCost<<endl;
	deposit=TotalCost * (0.25);
	cout<<"please deposit a 25% deposit to reserve the event "<<endl;
	cout<<"The deposit needed is :"<<deposit<<endl;
	
	return 0;
}


