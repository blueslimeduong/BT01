/**BasicStatistics*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    double sum = 0;
    int Max = 0, Min = 10000;
    for(int i=1; i<=n; i++)
    {
        int val;
        cin >> val;
        sum += val;
        if(val > Max) Max = val;
        else if (val < Min) Min = val;
    }
    cout << "Mean: " << sum/n << endl
         << "Max: " << Max << endl
         << "Min: " << Min;

}
