#include <iostream>
#include <string>
#include <map>

using namespace std;

map<char, string> finger = {
    {'c', "0111001111"},
    {'d', "0111001110"},
    {'e', "0111001100"},
    {'f', "0111001000"},
    {'g', "0111000000"},
    {'a', "0110000000"},
    {'b', "0100000000"},
    {'C', "0010000000"},
    {'D', "1111001110"},
    {'E', "1111001100"},
    {'F', "1111001000"},
    {'G', "1111000000"},
    {'A', "1110000000"},
    {'B', "1100000000"},
};

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    while(n--)
    {
        string song;
        getline(cin, song);
        int counter[10] = {0};
        string pstate = "0000000000"; // 初始状态，所有按键都没有被按下

        for(int i = 0; i < song.length(); i++)
        {
            char note = song[i];
            string cstate = finger[note];
            for(int j = 0; j < 10; j++)
            {
                // 如果当前按键状态是'1'且前一个状态是'0'，表示按键从未按下到按下
                if(cstate[j] == '1' && pstate[j] == '0') counter[j]++;
            }
            pstate = cstate;
        }
        for(int i = 0; i < 10; i++)
        {
            cout << counter[i];
            if(i < 9) cout << " ";
            else cout << endl;
        }
    }
    return 0;
}
