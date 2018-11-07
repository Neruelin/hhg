#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
#include <cstdlib>
#include <vector>
#include <ctime>
#include <cmath>

using namespace std;

class Pop
{
private:
    char map [26];
	float fitness;
public:
    Pop (){
		fitness = 0;
        int i = 0;
        for (i = 0; i < 26; i++) 
        {
            map[i] = 65 + (rand() % 26);
            //cout << map[i];
        }	
        //cout << endl;
    }
    void setChromosome(int index, char value){
        map[index] = value;
    }
    char * getChromosome(){
        return map;
    }
	void setFitness (float fit){
		fitness = fit;
	}
	float getFitness (){
		return fitness;
	}
	void print(){
		for (int i = 0; i < 26; i++) 
		{
			cout << map[i];
		}
	}
};

class GA;

float c_meanFit (vector<Pop> Population) 
{
	float retval = 0;
	int i = 0;
	int size = Population.size();
	for (i = 0; i < size; i++) {
		retval += Population.at(i).getFitness();
	}
	return (retval / i);
}

float c_sig (vector<Pop> Population, float mean) {
	int i = 0;
	int size = Population.size();
	float summ = 0;
    for (i = 0; i < size; i++) {
        summ += pow((Population.at(i).getFitness() - mean), 2);
    }
	summ = summ / i;
	return sqrt(summ);
}

bool comp(Pop ind1, Pop ind2) {
     return ind1.getFitness() < ind2.getFitness();     
}

class GA
{
public:
    GA (int populationSize, int rounds)
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
	   
	   // calculate fitness for each pop
	   cout << "Fitness Scores" << endl;
	   for (int i = 0; i < populationSize; i++) {
		   Population.at(i).setFitness(fitness( Population.at(i) ));
		   cout << 1 + i << " : " << Population.at(i).getFitness() << endl;
	   }
	   
	   //sort(Population.begin(), Population.end(), comp);
	   
	   //cout << c_meanFit(Population) << endl;
	   //cout << c_sig(Population, c_meanFit(Population)) << endl;
	   
	   int gen = 0;
	   float totalFitness;
	   float meanFitness;
	   float sigma;
	   while (gen < rounds) {
			totalFitness = 0;
			cout << "Fitness Scores" << endl;
			for (int i = 0; i < populationSize; i++) {
				Population.at(i).setFitness(fitness( Population.at(i) ));
				cout << 1 + i << " : " << Population.at(i).getFitness() << endl;
				totalFitness += Population.at(i).getFitness();
			}						
	    }
	   
    }
private:
	void train () {
		
	}

	float fitness (Pop p) 
	{
		// do some math to find fitness
		return rand() % 26;	
	} 
    vector<Pop> Population;
};


int main(int argc, char ** argv) {
    //seeding rng with current time
    srand(time(0));
    
    int a = 0;
    
    GA(10, 0);
	
	//ifstream ct_input("ciphertext.txt");
	//string ct_str((istreambuf_iterator<char>(ct_input)), istreambuf_iterator<char>());
	
	//cout << ct_str << endl;
	
	//ifstream pt_input("plaintext.txt");
	//string pt_str((istreambuf_iterator<char>(pt_input)), istreambuf_iterator<char>());
	
	//cout << pt_str << endl;
	
	cin >> a;
	
	
    return 0;
}
