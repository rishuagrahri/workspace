#include<iostream>
#include<conio.h>// library grtch
#include<windows.h> //clear screen for 
#include<stdlib.h> // random start library
using namespace std;

struct student{
	string name,fname;
	int rollno;
	int marks;
	int random;
};
student st;

void cplusplus(){
	char option;
	st.marks=0;
	
	int i=0,arr[4];
	while(i<=4){

	previous:

	st.random=rand()%5;
	for(int j=0;j<=5;j++){
		if(st.random==arr[5])
        {
			
			goto previous;
		}
	}

	arr[i]=st.random;		
	switch(st.random){
			
			case 0:
		
	
	cout<<i+1<<")c++ is a?"<<endl;
	    cout<<"A)Programming Language"<<endl;
			cout<<"B)English Language"<<endl;
				cout<<"c)urdu Language"<<endl;
					cout<<"D)None of these"<<endl;
	option=getch();
	if(option=='A' || option=='a')
    {
		cout<<"Correct Answer Congratulations !"<<endl;
		st.marks++;
	}

	else
    {
		cout<<"Incorrect Answer OH try second time !"<<endl;
	}
		cout<<i+1<<")your fav lang"<<endl;
		cout<<"A)Programming Language"<<endl;
			cout<<"B)English Language"<<endl;
				cout<<"c)urdu Language"<<endl;
					cout<<"D)None of these"<<endl;
	option=getch();
	if(option=='B' || option=='b')
    {
		cout<<"Correct Answer Congratulations !"<<endl;
		st.marks++;
	}

	else
    {
		cout<<"Incorrect Answer OH try second time !"<<endl;
	}
		cout<<i+1<<")your fav city?"<<endl;
		cout<<"A)India"<<endl;
			cout<<"B)Japan"<<endl;
				cout<<"c)Dubai"<<endl;
					cout<<"D)None of these"<<endl;
	option=getch();
	if(option=='C' || option=='c')
    {
		cout<<"Correct Answer Congratulations !"<<endl;
		st.marks++;
	}

	else
    {
		cout<<"Incorrect Answer OH try second time !"<<endl;
	}
		cout<<i+1<<")your fav home like?"<<endl;
		cout<<"A)nature"<<endl;
			cout<<"B)Wooden home"<<endl;
				cout<<"c)mirror home"<<endl;
					cout<<"D)None of these"<<endl;
	option=getch();
	if(option=='D' || option=='d')
    {
		cout<<"Correct Answer Congratulations !"<<endl;
		st.marks++;
	}

	else
    {
		cout<<"Incorrect Answer OH try second time !"<<endl;
	}
}
}

}

void result()
 {
	int parcentage;
	cout<<"Student name:"<<st.name<<endl;
	cout<<"Father Name:"<<st.name<<endl;
	cout<<"Student Rollno:"<<st.rollno<<endl;
	cout<<"Marks:"<<st.marks<<endl;
	parcentage=100*st.marks/4;
	cout<<"parcentage:"<<parcentage<<endl;
	if(parcentage>=60){
		cout<<" Good Job you are pass"<<endl;
	}
	else
    {
		cout<<" Oops Fail try second time"<<endl;
		
	}

}
int main(){
	
	char start,select; 
	do{
	system("CLS");
	cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t RONDOM QUIZ SYSTEM \n\n\n";
	cout<<"Enter your Name:";
	cin>>st.name;
	cout<<"Enter your father Name:";
	cin>>st.fname;
	cout<<"Enter your Rollno:";
	cin>>st.rollno;
	cout<<"select the subject for your quiz? \n";
	cout<<"1)c++\n";
	cout<<"2)Html\n";
	select=getch();
	system("CLS");
	switch(select){
		case '1':
			cout<<"c++ Quiz Started";
			cplusplus();
			system("CLS");
			cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t Result of Quiz\n\n\n\n\n";
			result();
			break;
		case '2':
			cout<<"Html Quiz Started";
			//html();
			system("CLS");
			cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t Result of Quiz\n\n\n\n\n";
			result();
			break;
			}
	
    
    cout<<"press s order to start quiz or any key for ending \n" ;
	start=getch();
	}while(start=='S' || start=='s');
	return 0;
}