#include <iostream>

using namespace std;

int main()
{
    string input = "234567890-=ertyuiop[]\\dfghjkl;'cvbnm,./";
    string output = "`1234567890qwertyuiop[asdfghjklzxcvbnm,";

    string a;
    while(getline(cin, a))
    {
        for(int i = 0; i < a.length(); i++)
        {
            char c = a[i];
            if(c == ' ') cout << " ";
            else
            {
                c = tolower(c);
                for(int j = 0; j < input.length(); j++)
                {

                    if(c == input[j]) cout << output[j];
                }
            }
        }
        cout << endl;
    }
    return 0;
}
