#include<iostream>
#include"Complex.h"
#include<cmath>
using namespace std;
int main()
{
    cout << "Complex:" << endl;
    Complex a;
    Complex b;
    bool Result;
    do
    {
        try
        {
            Result = true;
            cin >> a;
            cin >> b;
        }
        catch (invalid_argument e)
        {
            Result = false;
            cout << e.what() << endl;
        }
        catch (bad_exception e)
        {
            Result = false;
            cout << e.what() << endl;
        }
        catch (Error& e) //за посиланням
        {
            Result = false;
            cout << e.what() << endl;
        }
        catch (const char* e) //за вказівником
        {
            Result = false;
            cerr << e << endl;
        }
    } while (!Result);
    cout << "a1 + a2 = " << a.GetA() + b.GetA();
    cout << endl;
    cout << "b1 + b2 = " << a.GetB() + b.GetB();
    cout << endl << endl;

    cout << "a1 - a2 = " << a.GetA() - b.GetA();
    cout << endl;
    cout << "b1 - b2 = " << a.GetB() - b.GetB();
    cout << endl << endl;

    cout << "a1 * a2 - b1 * b2 = " << (a.GetA() * a.GetB() - b.GetA() * b.GetB());
    cout << endl;
    cout << "a1 * b2 + a2 * b1 = " << (a.GetA() * b.GetB() + a.GetB() * b.GetA());
    cout << endl << endl;

    cout << "(a1 * a2 + b1 * b2) / (a2 * a2 + b2 * b2) = " << (a.GetA() * a.GetB() + b.GetA() * b.GetB()) / (a.GetB() * a.GetB() + b.GetB() * b.GetB());
    cout << endl;
    cout << "(a2 * b1 - a1 * b2) / (a2 * a2 + b2 * b2) = " << (a.GetB() * b.GetA() - a.GetA() * b.GetB()) / (a.GetB() * a.GetB() + b.GetB() * b.GetB());
    cout << endl << endl;
    Complex* pz = new Complex();
    cout << endl;
    cout << typeid(pz).name() << endl;
    cout << typeid(*pz).name() << endl;
    delete pz;
    return 0;

}
