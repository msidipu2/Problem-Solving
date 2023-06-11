#include<bits/stdc++.h>
using namespace std;

int main()

{
    int testCase, i = 1; cin>>testCase;

    while (testCase--)
    {
    
    
        int maxSpeed = 0;
        int numberOfStudent; cin>>numberOfStudent;

        while (numberOfStudent--)
        {
            int speedOfPerson; cin>>speedOfPerson;
            maxSpeed = max(maxSpeed, speedOfPerson);
        }
        cout<<"Case "<<i<<": "<<maxSpeed<<endl;
        i++;
    
    }
 
    return 0;

}