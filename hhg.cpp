#include <iostream>
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

class GA
{
public:

    GA ()
    {

    }
};



int main() {





    return 0;
}
