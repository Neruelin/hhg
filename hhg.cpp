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
            cout << map[i];
        }	
        cout << endl;
    }
    void set(int index, int value)
    {
        map[index] = value;
    }
    char * get()
    {
        return map;
    }
};

class GA
{
public:

    GA ()
    {
       
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
    */
    
    return 0;
}
