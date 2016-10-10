#include <fstream>
#include <iostream>
using namespace std;
#include <algorithm>
#include <string> 



int main()
{
	ifstream fin("input.txt");
	ofstream fout("output.txt");
	
	if(!fin)
		cout<<"Error!";
	else
	{
		int id=1;
		string name;
		while(!fin.eof())
		{
			getline(fin,name);
			if(!name.empty())
			{
				std::transform(name.begin(), name.end(), name.begin(), ::tolower);
				fout<<"{"<<endl
					<<"\"name\": \""<<name<<"\","<<endl
					<<"\"id\": "<<id<<endl
					<<"}"<<endl<<endl;
				id++;
			}
		}
	}	
	fin.close();
	fout.close();	
}
