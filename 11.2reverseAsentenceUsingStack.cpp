#include<iostream>
#include<stack>
using namespace std;
void reverseSentence(string s)
{
    stack<string>sentence;

    for(int i= 0;i<s.length();i++)
    {
        string word = "";
        while(s[i] != ' ' && i < s.length())
        {
            word += s[i];
            i++;
        }
        sentence.push(word);
    }
    while(!sentence.empty())
    {
        cout<<sentence.top()<<endl;
        sentence.pop();
    }
    cout<<endl;

}
int main()
{
    string s = "Hey! I am Samir Gautam.";
    reverseSentence(s);
    return 0;
}