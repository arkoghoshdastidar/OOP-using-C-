#include <iostream>
#include <iomanip>
using namespace std;
// Ex: 12.1:-
template <class T1, class T2>
void min_max(T1 x, T2 y)
{
    if (x >= y)
        cout << x << ">=" << y << endl;
    else
        cout << y << ">" << x << endl;
    return;
}
int main(void)
{
    min_max(23, 55.15);
    min_max(2.3, 55.15);
    min_max(23, 5.15);
    min_max(23.21, 0.15);
    min_max(3, 15);
    return (0);
}