// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>
#include "compare.h"
using namespace std;
//initializing prototypes
void inputFromUser(GitHubUser* arr, int size);//for taking input from user
bool Comparison(GitHubUser user1,GitHubUser user2);//comparing data types of two users
GitHubUser* SearchUser ( GitHubUser* users, int size, string userName) ;//searching user and and showing the desired user name with its information

int main()
{
	int size=5;
	//initializing student variables

	GitHubUser* user=new GitHubUser[size];
	string username;
	//callinf functions
	inputFromUser(user,size);
	bool let(Comparison(user[0],user[1]));
	if(let==true)
	{
		cout<<"both are same :"<<endl;
		inputFromUser(user,size);
	}
	else
	{
		cout<<"not same:"<<endl;
	}
	cout<<SearchUser ( user,size,username) ;
	delete [] user;
	system("pause");

	return 0;
}
void inputFromUser(GitHubUser* arr, int size)
{
	size=5;
	//taking values of users
	for(int i=1;i<size;i++)
	{
	cout<<"enter first name of user "<<i<<" :"<<endl;
	cin>>arr[i].firstName;
	cout<<"enter user name of user "<<i<< ":"<<endl;
	cin>>arr[i].userName;
	cout<<"enter password of user "<<i<<" : "<<endl;
	cin>>arr[i].password;
	cout<<"enter email id of user "<<i<<" : "<<endl;
	cin>>arr[i].email;
	}
	bool let(Comparison(arr[0],arr[1]));
	if(let==true)
	{
		cout<<"both are same so enter user name again :"<<endl;
		inputFromUser(arr,size);
	}
}
//function for comparison
bool Comparison(GitHubUser user1,GitHubUser user2)
{
	int size=5;
	//function for comparing all thing of both users
  if((user1.email.c_str(),user2.email.c_str()) &&(user1.firstName.c_str(),user2.firstName.c_str() )&&((user1.userName.c_str(),user2.userName.c_str())&&(user1.password.c_str(),user2.password.c_str() )))
  {
	  return true;
  }
  else
	  return false;
}
//function for searching
GitHubUser* SearchUser ( GitHubUser* users, int size, string userName) 
{
	int size=5;
	
	for(int i=1;i<size;i++)
		if(users[i].userName == userName)
		{
			return &users[i] ;
		}
		else
			return nullptr;

}