#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double a,b,c,x;

    cin>>a>>b>>c;
    if((c-b)!=0 && a==0)cout<<"BR";
    else if (a==0 && (c-b)==0)cout<<"NWR";
    else
     {
     x= (c-b)/a;

cout.setf (ios::fixed);
  cout << fixed << setprecision(2) << x << endl;
     }

    return 0;
}
