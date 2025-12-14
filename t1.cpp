#include <iostream>
#include <cmath/>
using namespace std;
int main()
{
    double s,a,f;
    cout<<"в ведіть s, a, f,:"
    cin >>s>>a>>f;
double D =a*a-4*s*f;

if=(D<0)

{
double y = (-a+sqrt(D))/(2*s);
double y2 = (-a-sqrt(D))/(2*s);
cout <<"D="<<D<<endl;
cout  << "2 корені: y="<<y<<"y2="<<y2;
}

    else  if (D=0)
{
double y3=-a/(2*s)
cout <<"D="<<D<<endl;
cout<< "1 корінь:y3="<<y3;
}else
{
cout <<"D="<<D<<endl;
cout << "коренів 0";

} 
return 0;

}