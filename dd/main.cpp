
#include "czas.h"

#include <iostream>
using namespace std;
int main()
{
    czas c1(5,4, "brak");
    czas c2=c1;
    c1.poka();
    cout<< endl;
    c2.poka();
    cout<< endl;
    cin >>c1 >> c2;
    c1.sprawdz(c1);
    cout<<c1<<endl<<c2<<endl;
	czas roboty(4, 54);
	cout<< "ile pracy" << roboty;
	czas opierdzielania(4, 43);
	czas caly;
	czas praca;
	czas ile_placic;
	cout<< "czas roboty: " ;
	roboty.poka();
	cout<<endl;
	caly=roboty+opierdzielania;
	caly.poka();
	cout << "co chcesz zrobic 1 dodaj " << endl;
	int n;
	cin>>n;
	switch(n)
	{
    case 1:
            {


            int b;
            int a;
            cin >>a >> b;
            czas nowy(a,b);
            nowy.poka();
            break;
            }
	}


}
