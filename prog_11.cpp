#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    int spoilt_count = 0, vote = 0;
    int *count = new int[5];
    for (int i = 0; i < 5; i++)
        count[i] = 0;
    cout << "BJP : 1" << endl
         << "INC : 2" << endl
         << "TMC : 3" << endl
         << "JNU : 4" << endl
         << "TN : 5" << endl;
    // vote = -1 will exit the while loop
    while (vote != -1)
    {
        cout << "Enter your vote : ";
        cin >> vote;
        cout << endl;
        if (vote >= 1 && vote <= 5)
        {
            count[vote - 1] += 1;
        }
        else if (vote == -1)
        {
            break;
        }
        else
        {
            cout << "spoilt count" << endl;
            spoilt_count += 1;
        }
    }
    cout << "Result" << endl;
    switch (0)
    {
    case 0:
        cout << "BJP : " << count[0] << endl;
    case 1:
        cout << "INC : " << count[1] << endl;
    case 2:
        cout << "TMC : " << count[2] << endl;
    case 3:
        cout << "JNU : " << count[3] << endl;
    case 4:
        cout << "TN : " << count[4] << endl;
    }
    cout << "Spoilt Count : " << (spoilt_count) << endl;
    delete count;
    return (0);
}