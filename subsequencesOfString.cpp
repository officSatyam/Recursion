#include<iostream>

using namespace std;

int subs(string input,string output[])
{
    if(input.empty())
    {
        output[0]="";
        return 1;
    }
    string small = input.substr(1);
    int smallSize = subs(small,output);
    for(int i=0;i<smallSize;i++)
    {
        output[i+smallSize] = input[0] + output[i];
    }
    return smallSize*2 ;
}


int main()
{
    string s;
    cin >> s;
    string* output = new string[1000];
    int size = subs(s,output);
    for(int i=0;i<size;i++)
    {
        cout << output[i] << endl;
    }
}
