#include <iostream>
using namespace std;

int main()
{
    int num;
    int n;

    cout << "\nEnter number :";
    cin >> n;
    cout << endl;

    int i;
    for (i = 0; i < n; i++)
    {
        cout << "\nEnter any number you wanted to Know :";
        cin >> num;
        cout << endl;

        if (cin.fail())
        {

            cin.clear();

            cin.ignore(1000, '\n');
            cout << "sorry it is not a number" << endl;
        }
        else if (num % 2 == 0)
        {

            cout << "It is an Even number" << endl;
        }
        else
        {
            cout << "It is an Odd Number" << endl;
        }
    }

    return 0;
}