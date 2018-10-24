#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S = "JOHN PAUL JONES";
    string T = "A THING OF BEAUTY IS A JOY FOREVER";
    string input;


    while (1)
    {
        cout<<"\nWhich position you want to know (enter 'e' to exit):...?   ";
        getline(cin, input);

        if (input == "e") break;

        size_t found_S = S.find(input);
        size_t found_T = T.find(input);

        if (found_S != string::npos)
            cout<<"Position in S: "<<found_S+1<<endl;
        else
            cout<<"Position in S: Not found"<<endl;
        if (found_T != string::npos)
            cout<<"Position in T: "<<found_T+1<<endl;
        else
            cout<<"Position in T: Not found"<<endl;
    }


    return 0;
}
