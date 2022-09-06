#include <iostream>
#include <string>
using namespace std;
class napis
{
    string s1;
public:
    napis ()
    {s1=" ";}
    napis (string slowo)
    {
        s1=slowo;
    }
    napis(napis& napis2)
    {
        s1=napis2.s1;
    }
    ~napis()
    {
        cout <<"niszcze" <<endl;
    }
    napis operator+(napis& napis2)
    {

        napis2.s1=s1+napis2.s1;
        return napis2;
    }
    friend ostream& operator<< (ostream& wyjsc,
                            napis& cos);
    friend istream& operator>>(istream& wejsc,
                            napis& cos);
};
ostream& operator<< (ostream& wyjsc,napis& napis)
{
    wyjsc<< "dane na wyjsciu: " << napis.s1;
    return(wyjsc);
}
istream& operator>> (istream& wejsc,napis& napis)
{
    wejsc>>napis.s1;
    return wejsc;
}
int main()
{
    napis s1("tak");
    napis s2=s1;
    cout << s1<<endl;
    cin>>s1;
    cin>>s2;
    s2=s1+s2;
    cout << s2<<endl;

    return 0;
}
