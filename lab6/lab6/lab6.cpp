
#include <iostream>
#include <string>

using namespace std;

void userinput(double &cp, double &oyp, double &typ);
void calcinflation(double &cp, double &oyp, double &typ, double &r1, double &r2);
void printresults(double &r1, double &r2);

int main()
{
    double currentprice = 0;
    double oneyearprice = 0;
    double twoyearprice = 0;
    double rate1 = 0;
    double rate2 = 0;

    userinput(currentprice, oneyearprice, twoyearprice);
    calcinflation(currentprice, oneyearprice, twoyearprice, rate1, rate2);
    printresults(rate1, rate2);

}

void userinput(double &cp, double &oyp, double &typ)
{
    cout << "Enter current price: $";
    cin >> cp;

    cout << "Enter price one year ago: $";
    cin >> oyp;

    cout << "Enter price two years ago: $";
    cin >> typ;
}

void calcinflation(double &cp, double &oyp, double &typ, double &r1, double &r2)
{
    r1 = (oyp - typ) / typ;
    r2 = (cp - oyp) / oyp;
}

void printresults(double &r1, double &r2)
{
    cout << "The inflation rate for last year is: " << r1 * 100 << "%" << endl;
    cout << "The inflation rate for this year is: " << r2 * 100 << "%" << endl;

    cout << " " << endl;

    if (r2 > r1)
        cout << "Therefore, the rate of inflation is increasing." << endl;
    else if (r2 < r1)
        cout << "Therefore, the rate of inflation is decreasing." << endl;
    else
        cout << "Therefore, there is no change in the rate of inflation." << endl;
}