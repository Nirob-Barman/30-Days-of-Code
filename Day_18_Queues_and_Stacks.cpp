#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    stack<char> myStack;
    queue<char> myQueue;

    for (char ch : s)
    {
        myStack.push(ch);
        myQueue.push(ch);
    }

    bool isPalindrome = true;

    while (!myStack.empty() && !myQueue.empty())
    {
        char stackTop = myStack.top();
        char queueFront = myQueue.front();

        if (stackTop != queueFront)
        {
            isPalindrome = false;
            break;
        }

        myStack.pop();
        myQueue.pop();
    }

    if (isPalindrome)
    {
        cout << "The word, " << s << ", is a palindrome." << endl;
    }
    else
    {
        cout << "The word, " << s << ", is not a palindrome." << endl;
    }
    return 0;
}

// class Solution
// {
//     stack<char> myStack;
//     queue<char> myQueue;

// public:
//     void pushCharacter(char ch)
//     {
//         myStack.push(ch);
//     }

//     void enqueueCharacter(char ch)
//     {
//         myQueue.push(ch);
//     }

//     char popCharacter()
//     {
//         char ch = myStack.top();
//         myStack.pop();
//         return ch;
//     }

//     char dequeueCharacter()
//     {
//         char ch = myQueue.front();
//         myQueue.pop();
//         return ch;
//     }
// };

// int main()
// {
//     string s;
//     cin >> s;

//     Solution obj;

//     for (char ch : s)
//     {
//         obj.pushCharacter(ch);
//         obj.enqueueCharacter(ch);
//     }

//     bool isPalindrome = true;

//     for (int i = 0; i < s.length() / 2; i++)
//     {
//         char front = obj.dequeueCharacter();
//         char back = obj.popCharacter();

//         if (front != back)
//         {
//             isPalindrome = false;
//             break;
//         }
//     }

//     if (isPalindrome)
//     {
//         cout << "The word, " << s << ", is a palindrome." << endl;
//     }
//     else
//     {
//         cout << "The word, " << s << ", is not a palindrome." << endl;
//     }

//     return 0;
// }