#ifndef ulm_h;

class ulamek
{
private:
    int x, y;
public:
    ulamek();

    ulamek( int x_3, int y_3 );

    double getX() { return x; }
    double getY() { return y; }
    ulamek dodawanie( ulamek a )
    {
        ulamek c;
        int wsp = a.y * y;
        int u1 = a.x * y;
        int u2 = x * a.y;
        c.x = u1 + u2;
        c.y = wsp;
        return c;
    }
    ulamek odejmowanie( ulamek a )
    {
        ulamek d;
        int wsp = a.y * y;
        int u1 = a.x * y;
        int u2 = x * a.y;
        d.x = u1 - u2;
        d.y = wsp;
        return d;
    }
    ulamek mnozenie( ulamek a )
    {
        ulamek e;
        e.x = a.x * x;
        e.y = a.y * y;
        return e;
    }
    ulamek dzielenie( ulamek a )
    {
        ulamek f;
        f.x = a.y * x;
        f.y = a.x * y;
        return f;
    }
};

#endif
