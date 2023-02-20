#include <bits/stdc++.h>
using namespace std;
string infix_to_postfix(string expression);

int main()
{
    string expp;
    cin >> expp;
string postfix = infix_to_postfix(expp);

    cout << "postfix expresion is: " << postfix << "\n";
    return 0;
}
string infix_to_postfix(string expp)
{

    stack<char> operators;

    string postfix = "";

    for (int i = 0; i < expp.length(); i++)
    {

        if (isalnum(expp[i]))
        {
            postfix += expp[i];
        }

        else if (expp[i] == '(')
        {
            operators.push(expp[i]);
        }

        else if (expp[i] == ')')
        {
            while (operators.top() != '(')
            {
                postfix += operators.top();
                operators.pop();
            }
            operators.pop();
        }

        else
        {
            while (!operators.empty() && operators.top() != '(' &&
                   (expp[i] == '*' || expp[i] == '/') <=
                       (operators.top() == '*' || operators.top() == '/'))
            {
                postfix += operators.top();
                operators.pop();
            }
            operators.push(expp[i]);
        }
    }

    while (!operators.empty())
    {
        postfix += operators.top();
        operators.pop();
    }

    return postfix;
}

