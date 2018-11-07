#include <iostream>
#include <string.h>
#include <bits/stdc++.h> 
using namespace std;

class Pop
{
private:
    int map [26] = {};
public:
    Pop ()
    {
    	
    }
    void set(int index, int value)
    {
        map[index] = value;
    }
    int * get()
    {
        return map;
    }
};

class GeneticAlg
{
public:

    GeneticAlg ()
    {
		char c [11] = {'c', 'o', 'l', 'l', 'e', 'c', 't', 'i', 'o', 'n', '\0'};
		createNGrams(3, c);
    }
private:
	fitnessFunction()
	{
	}
	createNGrams(int n, char * s)
	{
		int start = 0;
		int end = 0;
		
		int diff = 0;
		
		char nGram [n];
		
		int len = strlen(s);
		
		while(end < len)
		{
			diff = end - start;
			while(diff < n)
			{
				if(end < len)
				{
					end++;
				}
				diff = end - start;
			}
			int i = 0;
			for(i = 0; i < n; i++)
			{
				nGram[i] = s[start + i];
				cout<<nGram[i];
			}
			cout<<"\n";
			start++;
			
		}
	}
	
};


int main() {


	GeneticAlg alg;
	cout<<"Do something";
    return 0;
}
