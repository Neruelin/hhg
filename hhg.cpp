#include <iostream>
#include <cstdlib>
#include <vector>
#include <ctime>

using namespace std;

class Pop
{
private:
    char map [26];
public:
    Pop ()
    {
        int i = 0;
        for (i = 0; i < 26; i++) 
        {
            map[i] = 65 + (rand() % 26);
            //cout << map[i];
        }	
        //cout << endl;
    }
    void set(int index, int value)
    {
        map[index] = value;
    }
    char * get()
    {
        return map;
    }
	void print() 
	{
		for (int i = 0; i < 26; i++) 
		{
			cout << map[i];
		}
	}
};

class GA
{
public:
    GA (int populationSize)
    {
       cout << "Size of " << populationSize << " Initial Population:" << endl;
       
	   for (int i = 0; i < populationSize; i++)
	   {
		   Population.push_back(Pop());
	   }
	   
	   for (int i = 0; i < populationSize; i++) {
		   cout << i + 1 << " : ";
		   Population.at(i).print();
		   cout << endl;
	   }
	   
    }
private:
    vector<Pop> Population;
};


int main() {
    //seeding rng with current time
    srand(time(0));
    /*
    int a = 0;
    while (a != 1) 
    {
          Pop();
          cin >> a;
    }
    
    GA(10);
    int a;
    cin >> a;
    */
	
	
    return 0;
}
