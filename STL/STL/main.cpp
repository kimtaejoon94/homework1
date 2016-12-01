#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#include <list>
#include <map>

void main()
{
	map<string, int> m;
	m["seoul"] = 100;
	m["daegu"] = 200;
	m["pusan"] = 300;

	cout << "Train to seoul = " << m["seoul"] << "$" << endl;
	cout << "Train to daegu = " << m["daegu"] << "$" << endl;
	cout << "Train to pusan = " << m["pusan"] << "$" << endl;
}



/*
void dump(list<string> &l)
{
	list<string>::iterator iter = l.begin();

	while (iter != l.end())
	{
		cout << *iter << endl;
		iter++;
	}
}

void main()
{
	list<string> names;
	names.insert(names.begin(), "konkuk");
	names.insert(names.end(), "University");
	names.insert(names.end(), "Sclab");
	names.insert(names.end(), "CSY");
	dump(names);
	cout << "===" << endl;
	names.reverse();
	dump(names);
}

void main()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.insert(v.begin(), 40);
	v.insert(v.end(), 50);

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << endl;
	}

	cout << "access index at 1 : " << v.at(1) << endl;

	v.erase(v.begin());
	v.erase(v.end() - 1);

	vector<int>::iterator iter = v.begin();

	cout << "access index at 1 with iterator : " << iter[1] << endl;

	while (iter != v.end())
	{
		cout << *iter << endl;
		iter++;
	}
}*/