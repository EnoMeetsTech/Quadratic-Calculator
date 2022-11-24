#include <iostream>
#include <cmath>

using namespace std;


int main()
{

    int a;
    int b;
    int c;
    int bnegative;
    int bsquare;
    int ac4;
    int insideRoot;
    int squareRoot;
    int numeratorNegative;
    int numeratorPostive;
    int a2;
    int answerPostive;
    int answerNegative;

    cout << "Enter the value for A" << endl;
    cin >> a;


    cout << "Enter the value for B" << endl;
    cin >> b;

    cout << "Enter the value for C" << endl;
    cin >> c;

    bnegative = -b; bsquare = pow(b,2);
    ac4 = a * c * 4;
    insideRoot = bsquare - ac4;
    squareRoot = sqrt(insideRoot);
    numeratorNegative = bnegative - squareRoot;
    numeratorPostive = bnegative + squareRoot;
    a2 = a * 2;


    //FINAL CALCULATION

    answerNegative = numeratorNegative / a2;
    answerPostive = numeratorPostive / a2;


    cout << "The answer for the quadratic equation is : " << answerNegative << "  and  " << answerPostive << endl << endl;





}
