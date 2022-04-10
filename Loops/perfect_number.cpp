#include <iostream>
using namespace std;

int main()
{
    int start,end;
    cout<<"Enter the starting point: ";
    cin>>start;
    cout<<"Enter the ending point: ";
    cin>>end;
    for (int i = start; i <= end; i++)
    {
        int sum = 0;
        for (int n = 1; n < i; n++)
        {
            if (i % n == 0)
            {
                // cout<<n<<endl;
                sum = sum + n;
            }
        }
        if (sum == i && i>=2)
        {
            cout <<"Perfect Number is: "<<sum<<endl;
        }
    }
    return 0;
}