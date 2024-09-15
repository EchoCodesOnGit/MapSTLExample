#include <iostream>
#include <map> //map library
using namespace std;

int main()
{
	//create map with key-type string and value-type 1
	map<string,int> mp;

	//assigning keys and values
	mp["one"] = 1;
	mp["two"] = 2;
	mp["three"] = 3;

	//make_pair can also be used to insert values
	mp.insert(make_pair("four",4));

	//iteration
	map<string,int>::iterator it;
	for(it = mp.begin(); it != mp.end(); ++it)
	{
		//derefrence to access values within the iterator
		cout << "Key: " << it->first
		     << ", Value: " << it->second
		     << '\n';
	
	}

	return 0;
}
