#include<iostream>
#include <conio.h>
#include<stdlib.h>
#include<string.h>
#include<dos.h> 

using namespace std;


void welcome();
void mainscreen();
void intro();
void search_algo();
void sort_algo();
void other_algo();
void linear_search();
void binary_search();
void kadanes_algo();
int linear_search_imp();



void intro()
{	
	char l;
	system("CLS");
	cout<<"\n\t\t\t\t     A J INSTITUTE OF ENGINEERING AND TECHNOLOGY MANGALURU";
	cout<<"\n\n\t\t\t\t\t DEPARTMENT OF COMPUTER SCIENCE AND ENGINEEING";
	cout<<"\n\n\n\n\n\t\t\t\t\t\t\t------------";
	cout<<"\n\t\t\t\t\t\t       | Algo Coach |\t\t\t\t";
	cout<<"\n\t\t\t\t\t\t\t------------";
	cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t       -Presented By-";
	cout<<"\n\n\t\t\t\t\t  Bhavna Sharma";
	
	
	while(1)
	{
	cout<<"\t\t\t\t\t\t    Press Space to Begin";
	_sleep(500);
	cout<<"\r                                                                                                         ";
	cout<<"\r";
	_sleep(500);
	
	if (kbhit()) break;
	}
	                                                                                       
	mainscreen();

}


void mainscreen()
{	
	char a;
	system("CLS");
	cout<<"\n\t<-- b";
	cout<<"\n\n\t\t\t\t\t\t\t ------------";
	cout<<"\n\t\t\t\t\t\t        | Algorithms |\t\t\t\t";
	cout<<"\n\t\t\t\t\t\t\t ------------";
	cout<<"\n\n\n";
	cout<<"\t| 1.Search Algorithms\t\t\t      | 2.Sort Algorithms\t\t      | 3.Other Algorithms";
	cout<<"\n\t---------------------\t\t\t      -------------------\t\t      --------------------";
	cout<<"\n\t  Linear search      \t\t\t        Bubble Sort      \t\t        Bonus             ";

	l:cout<<"\n\n\t\t\t\t\t\t Enter a valid Choice - ";
	cin>>a;
	switch(a)
	{
		case '1':search_algo();
			break;
		case '2':sort_algo();
			break;
		case '3':other_algo();
			break;
		case 'b':intro();
			break;
		default:cout<<"\n\t\t\t\t\t\t\tInvalid";
				goto l;
	}
}

void search_algo()
{
	char a;
	system("CLS");
	cout<<"\n\t<-- b";
	cout<<"\n\n\t\t\t\t\t\t -------------------";
	cout<<"\n\t\t\t\t\t\t| Search Algorithms |\t\t\t\t";
	cout<<"\n\t\t\t\t\t\t -------------------";
	cout<<"\n\n\t\t\t\t\t\t  1)Linear search";
	cout<<"\n\n\t\t\t\t\t\t  2)Binary search";
	l:cout<<"\n\n\t\t\t\t\t     Enter a valid Choice - ";
	cin>>a;
	switch(a)
	{
		case '1':linear_search();
			break;
		case '2':binary_search();
			break;
		case '3':other_algo();
			break;
		case '4':
			break;
		case '5':
			break;
		case 'b':mainscreen();
			break;
		default:cout<<"\n\t\t\t\t\t\t\tInvalid";
				goto l;
	}		
}

void sort_algo()
{	
	char a;
	system("CLS");
	cout<<"\n\t<-- b";
	cout<<"\n\n\t\t\t\t\t\t -----------------";
	cout<<"\n\t\t\t\t\t\t| Sort Algorithms |\t\t\t\t";
	cout<<"\n\t\t\t\t\t\t -----------------";
	cout<<"\n\n\t\t\t\t\t\t  1)Lsort";

	l:cout<<"\n\n\t\t\t\t\t     Enter a valid Choice - ";
	cin>>a;
	switch(a)
	{
		case '1':search_algo();
			break;
		case '2':sort_algo();
			break;
		case '3':other_algo();
			break;
		case '4':
			break;
		case '5':
			break;
		case 'b':mainscreen();
			break;
		default:cout<<"\n\t\t\t\t\t\t\tInvalid";
				goto l;
	}
		
}

void other_algo()
{	
	char a;
	system("CLS");
	cout<<"\n\t<-- b";
	cout<<"\n\n\t\t\t\t\t\t ------------------";
	cout<<"\n\t\t\t\t\t\t| Other Algorithms |\t\t\t\t";
	cout<<"\n\t\t\t\t\t\t ------------------";
	cout<<"\n\n\t\t\t\t\t\t  1)Binary search";

	l:cout<<"\n\n\t\t\t\t\t     Enter a valid Choice - ";
	cin>>a;
	switch(a)
	{
		case '1':kadanes_algo();
			break;
		case '2':sort_algo();
			break;
		case '3':other_algo();
			break;
		case '4':
			break;
		case '5':
			break;
		case 'b':mainscreen();
			break;
		default:cout<<"\n\t\t\t\t\t\t\tInvalid";
				goto l;
	}
		
}

void kadanes_algo()
{
	char a;
	system("CLS");
	cout<<"\n\t<-- b";
	cout<<"\n\n\t\t\t\t\t\t ------------------";
	cout<<"\n\t\t\t\t\t\t| Kadane's Algo |\t\t\t\t";
	cout<<"\n\t\t\t\t\t\t ------------------";
	cout<<"\n\n";
	cout<<"\n\t\t\t\t\tPress c to see more , b to go back:";
	cin>>a;	
	switch(a)
	{
		case 'c':
			break;
		case 'b':other_algo();
			break;
		default :cout<<"\n\t\t\t\t\tPlease enter a valid option";
	}
}

void linear_search()
{
	char a;
	system("CLS");
	cout<<"\n\t<-- b";
	cout<<"\n\n\t\t\t\t\t\t ---------------";
	cout<<"\n\t\t\t\t\t\t| Linear Search |";
	cout<<"\n\t\t\t\t\t\t ---------------";
	cout<<"\n\n"; 
	cout<<" a linear search or sequential search is a method for finding an element within a list. It sequentially checks each element of the list until a match is found or the whole list has been searched.";
	cout<<"\n\t\t\t\t\tPress c to see more , b to go back:";
	cin>>a;	
	switch(a)
	{
		case 'c':linear_search_imp();
			break;
		case 'b':search_algo();
			break;
		default :cout<<"\n\t\t\t\t\tPlease enter a valid option";
	} 
	
}

int linear_search_imp()
{
	char c;
	int b,i,j,a[100],s,k;
	float speed;
	system("CLS");
	cout<<"\n\t<-- 0";
	cout<<"\n\n\t\t\t\t\t\t ---------------";
	cout<<"\n\t\t\t\t\t\t| Linear Search |";
	cout<<"\n\t\t\t\t\t\t ---------------";
	cout<<"\n\n\n\t\tEnter No of elements : ";
	cin>>b;
	cout<<"\t\tEnter "<<b<<" elements  \n\t\t";
	for(i=0;i<b;i++)
	{
		cin>>a[i];
	}
	cout<<"\n\t\tEnter the search element : ";
	cin>>s;
	cout<<"\n\t\tpress v to visualize b to go back : ";
	cin>>c; 
	if(c=='v')
	{
	cout<<"\n\t\tSet the speed(seconds) : ";
	cin>>speed;
	speed=speed*1000;
	system("CLS");
	cout<<"\n\n\t\t\t\t\t\t ---------------";
	cout<<"\n\t\t\t\t\t\t| Linear Search |\t\t\t\t";
	cout<<"\n\t\t\t\t\t\t ---------------";
	cout<<"\n\n\n\n\t\t\t";
	l:for(i=0;i<b;i++)
	{    
		system("CLS");
		cout<<"\n\t<-- 0";
		cout<<"\n\n\t\t\t\t\t\t ---------------";
		cout<<"\n\t\t\t\t\t\t| Linear Search |\t\t\t\t";
		cout<<"\n\t\t\t\t\t\t ---------------\n\n\n";
		cout<<"\t\t\t";
		
		for(k=0;k<b;k++)
		cout<<a[k]<<"\t";
		
		cout<<"\n\t\t\t";
		for(j=0;j<i;j++)
			cout<<"\t";
		cout<<"^";
		cout<<"\n\n\n";
		cout<<"Index : "<<i<<"\n";
		cout<<"\nElement : "<<a[i]<<"\n";
		cout<<"\nSearch Element : "<<s<<"\n";
		if(a[i]==s)
		{
		cout<<"\nElement found in "<<i<<"th position";
		break;
		}
		_sleep(speed);	
	}
	}	
	else
	linear_search();
	cout<<"\n\nEnter r to replay, b to go back : ";
	cin>>c;
	if(c=='r')
	goto l;
	else
	linear_search();
}      

void binary_search()
{
	char a;
	system("CLS");
	cout<<"\n\t<-- b";
	cout<<"\n\n\t\t\t\t\t\t ------------------";
	cout<<"\n\t\t\t\t\t\t| Binary   Search |\t\t\t\t";
	cout<<"\n\t\t\t\t\t\t ------------------";
	cout<<"\n\n";
	cout<<"\n\t\t\t\t\tPress c to see more , b to go back:";
	cin>>a;	
	switch(a)
	{
		case 'c':
			break;
		case 'b':search_algo();
			break;
		default :cout<<"\n\t\t\t\t\tPlease enter a valid option";
	}
}

main()
{	
	intro();
}
