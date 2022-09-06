#include "czas.h"

#include <iostream>
using namespace std;
czas::czas()
{
	godziny = minuty = 0;
}

czas::czas(int h, int m)
{
	godziny = h;
	minuty = m;

}
czas::czas(int h, int m, string nazwa)
{
	godziny = h;
	minuty = m;
	nazwa="brak";
}
czas::czas(const czas &czas)
  {
    godziny = czas.godziny;
    minuty = czas.minuty;
    nazwa = czas.nazwa;
}

void czas::dodajmin(int m)
{
	minuty += m;
	godziny += minuty / 60;
	minuty %= 60;
}

void czas::dodajgodz(int h)
{
	godziny += h;

}

void czas::reset(int h, int m, string nazwa)
{
	godziny = h;
	minuty = m;
	nazwa= nazwa;
}

czas czas::operator+(const czas& t) const
{
	czas po_dodaniu;
	po_dodaniu.minuty = minuty + t.minuty;
	po_dodaniu.godziny = godziny + t.godziny + po_dodaniu.minuty / 60;
	po_dodaniu.minuty %= 60;
	return po_dodaniu;
}

czas czas::operator-(const czas& t) const
{
	czas po_odjeciu;
	int ilosc_minut1,ilosc_minut2;
	ilosc_minut1 = godziny * 60 + minuty;
	ilosc_minut2 = t.godziny * 60 + t.minuty;
	ilosc_minut1 -= ilosc_minut2;
	po_odjeciu.godziny = ilosc_minut1 / 60;
	po_odjeciu.minuty = ilosc_minut1 % 60;
	return po_odjeciu;
}

czas czas::operator*(double n) const
{
	czas mnozenie;
	int wszystkie_min = godziny * 60 * n + minuty * n;
	mnozenie.godziny = wszystkie_min / 60;
	mnozenie.minuty = wszystkie_min % 60;
	return mnozenie;
}


void czas::poka() const
{
	cout << "godziny: " <<godziny << "  minuty: " << minuty;
}
ostream& operator<<(ostream& wyjs, czas& czas)
{
    cout<<"jestem" <<endl;
    wyjs<< "ilosc godz: "<< czas.godziny<< "ilosc minut: "<< czas.minuty<<endl;
    return wyjs;

}
ostream& operator<<(ostream& wyjs, czas& czas)
{
    cout<<"jestem" <<endl;
    wyjs<< "ilosc godz: "<< czas.godziny<< "ilosc minut: "<< czas.minuty<<czas.nazwa<<endl;
    return wyjs;

}
istream& operator>>(istream& wej,czas& czas)
{
    wej>>czas.godziny>>czas.minuty;

    return wej;
}

void czas::sprawdz(czas)
{

    if(minuty>60)
    {
        godziny+=minuty/60;
        minuty=minuty%60;
    }

}








