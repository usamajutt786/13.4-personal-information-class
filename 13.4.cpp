// personal information class  .....................
#include<iostream>
#include<string>
using namespace std;
class persinal_data
{
private:
	string name;
	string address;
	int age;
	string phone;
public:
	void setName(string nam)
	{
		name = nam;
	}
	void setAddress(string add)
	{
		address = add;
	}
	void setAge(int  ag)
	{
		age = ag;
	}
	void setPhone(string ph)
	{
		phone = ph;
	}
	string getName(string name)
	{
		return name ;
	}
	string getAddress(string address)
	{
		return address;
	}
	int getAge(int age )
	{
	    return 	age ;
	}
	string getPhone(string phone)
	{
		return phone ;
	}
};
int main()
{
	persinal_data me;
	persinal_data brother;
	persinal_data brother2;
	cout << "Name        Age      Address      Phone " << endl;
	//cout << "-------------------------------------------" << endl;
	cout << me.getName("usama") << "       " << me.getAge(19) << "       " << me.getAddress("99/10-R") << "      " << me.getPhone("03026664667") << endl;
	cout << brother.getName("hamad") << "       " << brother.getAge(16) << "       " << brother.getAddress("99/10-R") << "      " << brother.getPhone("03024097199") << endl;
	cout << brother2.getName("usama") << "       " << brother2.getAge(10) << "       " << brother2.getAddress("99/10-R") << "      " << brother2.getPhone("03455099123") << endl;

}

