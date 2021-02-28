#include <iostream>
#include <string>
#include <fstream>

#include<thread>
#include<chrono>

using namespace std;

void timer() { // http://www.cplusplus.com/reference/thread/this_thread/sleep_for/
	for (int i=10; i>0; --i)
	{
		cout << i << std::endl;
	    std::this_thread::sleep_for (std::chrono::seconds(1));
	}
}

int main() {

	// Variable Declaration
	string username;
	string pcheck; // Password Check
	fstream account;
	string password;
	bool account_found = false;

	cout<<"Welcome\n"<<endl;

	// User entering username loop
	while (account_found == false)
	{
		cout<<"Enter USERNAME: "<<endl;
		cin >> username;
		cout<<"Checking if "<<username<<" exists"<<endl;

		// Declaring and opening filename using user variable
		account.open(username.c_str(),ios::in);

		// Conditional Statement to check whether or not the account exists
		if (!account)
		{
			cout<<username<<" does not exist\n"<<endl;
		}
		else
		{
			cout<<username<<" found\n"<<endl;
			account_found = true;
		}

	}


	// Reads content of the account file -> Containing user password
	getline(account,password);

	cout<<"password entered is "<<pcheck<<endl;
	cout<<"Actual password = "<<password<<endl;

	// User entering password loop
	for (int i = 1; i < 4;i++)
	{
		cout<<i<<endl;
		cout<<"Enter PASSWORD: "<<endl;
		cin >>pcheck;

		// if the enter limit has been reached

		if (pcheck == password)
		{
			cout<<"\nWelcome "<<username<<endl;
			break;
		}

		else if (i == 3)
		{
			cout<<"Too many attempts"<<endl;
			timer(); // Calling timer function
			i = 0;
			cout<<i;
		}

		else
		{
			cout<<"\n"<<pcheck<<" Was Incorrect"<<endl;
		}
	}

	account.close();
	return 0;
}
