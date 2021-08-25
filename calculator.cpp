//
//calculator.cpp
//jia
//
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
//this is the function code of the calculator
const int MonPerYear = 12;
const double MinPerHour = 60;
const double SecPerMin = 60;
const double SecPerHour = 3600;
int howmany2 = 1, getout = 1;
int main();
string name;
void Ltriangle();
void exittime();
void exitmachine2();
void more();
void spacing(); // script to make it look better
void exitmachine();
int menu();
void Ltriangle()
{
    int a, b, c, a2, b2, c2, triangle = 1;
    cout << "Enter value for side a: ";
    cin  >> a;
    cout << "Enter value for side b: ";
    cin  >> b;
    cout << "Enter value for side c: ";
    cin  >> c;
    a2 = a * a;
    b2 = b * b;
    c2 = c * c;
    if (a2 == b2 + c2)
    {
        cout << "It is a right triangle" << endl;
        triangle = 2;
    }
    if (b2 == c2 + a2)
    {
        cout << "It is a right triangle" << endl;
        triangle = 2;
    }
    if (c2 == a2 + b2)
    {
        cout << "It is a right triangle" << endl;
        triangle = 2;
    }
    if (triangle == 1)
    {
        cout << "It is not a right triangle" << endl;
    }
    if(howmany2 == 1)
    {
        name = "Ltriangle";
        more();
    }
}
void time()
{   string Tanswer;
    double seconds, hours, sec1, min1, min2, hour1;
    cout << "Enter seconds: ";
    cin  >> seconds;
    cout << "you entered " << seconds << " seconds." << endl;
    if(seconds >= SecPerMin)
    {
        min1 = (seconds / SecPerMin);
        min2 = static_cast<int>(min1);
        sec1 = seconds - min2 * SecPerMin;
        cout << "There are " << min2 << " minutes and " << sec1 << " seconds "
             << " in " << seconds << " seconds." << endl;

    }
    if(seconds >= SecPerHour)
    {
        hours = min2 / MinPerHour;
        hour1 = static_cast<int>(hours);
        min1  = min2 - hour1 * MinPerHour;
        cout << "There are " << hour1 << " hours " << min1 << " minutes and "
             << sec1 << " seconds." << endl;
    }
    if(howmany2 == 1)
    {
        name = "time";
        more();
    }

}
void mortgage()
{
    string Manswer;
    double m, r, n; // M for loan #, r for rate, n more # of years in mortgage
    double p, o; //p for payment, o for power
    cout << "Enter loan amount:" << flush;
    cin >> m;
    cout << "Enter annual interest rate:" << flush;
    cin >> r;
    cout << "Enter # of years:" << flush;
    cin >> n;
    o = pow(1 + r / MonPerYear, MonPerYear * n);
    p = ( m * o * (r / MonPerYear)) / (o - 1);
    cout << "Monthly payment is:" << showpoint << fixed << setprecision(2) << p
         << endl;
    if(howmany2 == 1)
    {
        name = "mortgage";
        more();
    }

}
void convert()
{
    string C2answer;
    int feet;
    float inchesA, inchesB, meters, inches, cm;
    cout << "How many inches: " << flush;
    cin >> inchesA;
    cout << "How many feet: " << flush;
    cin >> feet;
    inchesB = feet*12;
    inches = inchesB + inchesA;
    cm = inches*2.54;
    meters = cm / 100;
    cout << "There are " << meters <<" meters in " << inchesA << " inches and "
    << feet << " feet." << endl;
    if(howmany2 == 1)
    {
        name = "convert";
        more();
    }
}
void convertmenu() //this is the covert function
{   int Canswer;
    cout << "Available conversions:1.ft+in-->meters, 2.Sec--> hours and min"
         << endl;
    cout << "enter number for the corresponding conversion wanted:" << flush;
    cin  >> Canswer;
    spacing();
    if(Canswer == 1)
    {
        convert();
    }
    if(Canswer == 2)
    {
        time();
    }
    else
    {
        cout << Canswer << " is an invalid number. Try again" << endl;
        convertmenu();
    }
}
void calculator()
{   string var2;
    float var1, var3, solution;
    cout << "num 1:" << flush;
    cin  >> var1;
    cout << "operation:" << flush;
    cin  >> var2;
    cout << "num 2:" << flush;
    cin  >> var3; //order it puts stuff
    if (var2 == "x") //these are functions for the diff operations
    {
       solution = var1 * var3;
    }
    else if (var2 == "/")
    {
        solution = var1 / var3;
    }
    else if( var2 == "-")
    {
        solution = var1 - var3;
    }
    else if (var2 == "+")
    {
        solution = var1 + var3;
    }
    else if (var2 == "^")
    {
        solution = pow(var1, var3);
    }
    else
    {
        cout << "invalid operation. Try again" << endl;
        calculator();
    }
    cout << var1 << var2 << var3 <<"=" << solution<< endl;
    if(howmany2 == 1)// if not repeating should remain 1
    {
        name = "calculator";
        more();
    }
}
int menu()
{
    string answer, confirm, fixy;
    cout << "Available apps:convert,calculator, exit, mortgage, triangle"
         << endl;
    cout << "What app do you wanna open?"<< flush;
    cin >> answer;
    spacing();
    if(answer == "calculator")
    {
        calculator();
    }
    if(answer == "exit")
    {
       return 0;
    }
    if(answer == "convert")
    {
        convertmenu();
    }
    else if(answer == "mortgage")
    {
        mortgage();
    }
    else if(answer == "triangle")
    {
        Ltriangle();
    }
    else
    {
        cout << "No app under the name:" << answer << " exists." << endl <<
        "Please try again" << endl;
        spacing();
        menu();
    }
    return 0;
}
int main()
{
    if (getout == 1)
    {
        cout << getout << flush;
        menu();
    }
    return 0;
}
void exitmachine()
{   string Eanswer;
    cout << "Are you sure?" << endl;
    cin >> Eanswer;
    if(Eanswer == "yes")
    {
        spacing();
        menu();
    }
    if(Eanswer == "no")
    {
        spacing();
        if(name == "time")
        {
            time();
        }
        if(name == "mortgage")
        {
            mortgage();
        }
        if(name == "convert")
        {
            convert();
        }
        if(name == "calculator")
        {
            calculator();
        }
    }


}
void spacing()
{
    cout << endl;
    cout << "_______________________________________________________________"
         << endl;
    cout << endl;
}
void more()
{
    string Manswer;
    cout << "Do you want more?" << endl;
    cin >> Manswer;
    if(Manswer == "yes")
    {
        exitmachine2();
    }
    if(Manswer == "no")
    {
        exitmachine();
    }


}
void exitmachine2()
{
    int howmany, many = 2;
    spacing();
    cout << "How many more times?" << flush;
    cin  >> howmany;
        if(name == "time")
        {
            while(many <= howmany)
            {
                howmany2 = 5;
                time();
                many++;
            }
            many = 1;
            howmany2 = 1;
            howmany = 0;
            time();
        }
        if(name == "mortgage")
        {
            while(many <= howmany)
            {
                howmany2 = 5;
                mortgage();
                many++;
            }
            many = 1;
            howmany2 = 1;
            howmany = 0;
            mortgage();
        }
        if(name == "convert")
        {
            while(many <= howmany)
            {
                howmany2 = 5;
                convert();
                many++;
            }
            many = 1;
            howmany2 = 1;
            howmany = 0;
            convert();
        }
        if(name == "calculator")
        {
            while(many <= howmany)
            {
                howmany2 = 5;
                calculator();
                many++;
            }
            many = 1;
            howmany2 = 1;
            howmany = 0;
            calculator();
        }
        if(name == "Ltriangle")
        {
            while(many <= howmany)
            {
                howmany2 = 5;// 5 is is just a random number so wont run more()
                Ltriangle();
                many++;
            }
            many = 1;
            howmany2 = 1;
            howmany = 0;
            Ltriangle();

        }
}
void exittime()
{
    cout << "bye" << flush;
}
