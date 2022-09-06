#include<iostream>
using namespace std;
int main()
{
    unsigned int i,p,a,b,ile;
    a=b=ile=0;
    cin >> i;
    int tab[i];
    while(a<i)
    {
        cin>>tab[a];
        a++;
    }
    a=0;
    cin>>p;
    int tabb[p];
    while(a<p)
    {
        cin>>tabb[a];
        a++;
    }

    for(b=0;b<p;b++)
    {
        for(int j=0;j<i;j++)
        {
            if(tab[j]<tabb[b])
                ile++;
        }
        cout<< ile<<endl;
        ile=0;
    }



    return 0;
}
