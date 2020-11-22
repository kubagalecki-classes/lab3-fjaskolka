#include <cmath>
#include <iostream>
#include <math.h>
using namespace std;

class Figura
{
public:
    Figura(double pole_p) : pole{pole_p}
    {
        void   set_p(double p) { pole = p; }
        double get_p() { return pole; }
    }

private:
    double pole;
};

class Kolo : public Figura
{
public:
    Kolo(double r) : Figura{3.14 * r * r} { get_p(); }
};

// class Kwadrat : public Figura
//{
// public:
//    Kwadrat(double a) : Figura{pole} { set_p(a * //a); }
//};

int main()
{
    Figura a();
    a.set_p(5);
    cout << a.get_p() << endl << endl;
    cout << Kolo ko1(67.45);
    // cout << ko1.get_p() << endl;
    // Kwadrat kw1(46.78);
    // cout << kw1.get_p() << endl;
}
