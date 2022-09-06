#include "vect.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
	using vector::vector;
	srand(time(0));
	double kierunek;
	vector step;
	vector wynik(0.0, 0.0);
	unsigned long kroki = 0;
	double cel;
	double dkroku;
	while(cin>>cel)
    {
        if(!(cin>>dkroku))
            break;
        while(wynik.magval()<cel)
        {
            kierunek=rand()%360;
            step.reset(dkroku,kierunek,vector::pol);
            wynik=wynik+step;
            kroki++;
            cout<<kroki<<endl;
        }
        cout << "po przej" <<kroki<<"polozenie wynioslo" <<endl;
        cout<<wynik<<endl;
    }



}
