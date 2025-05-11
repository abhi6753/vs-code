// 9. Write a function to reverse a string word wise. (For example if the given string is\
    “Mysirg Education Services” then the resulting string should be “Services Education Mysirg” )

    
//Help taken:  Strings - Part 4 | Reverse Words in String by shradha mam
#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
string reverseword(string str)
{
    reverse(str.begin(), str.end());
    int n = str.length(); // lemght of input string
    string word, sen = "";
    for (int i = 0; i<n; i++)     // Time complexity = O(N) bcz we traverse all index one time only using both loop
    {
        word = "";
        while (str[i] != 32 &&i<n) // This condition discard all the extra whitespaces 
        {
            word = word+str[i];         // + operator working as append function
            i++;
        }
        reverse(word.begin(), word.end());
        if (word.length() > 0)
        {
            sen += " " + word; // + operator working as append function
        }
    }

    return sen.substr(1); // we use substr() bcz one white space added at index 0 bcz we want one whitespace b/w two word.
}

int main()
{
    string str, revStrWord ;
    cout << "Enter string to  seprate words: " << endl;
    getline(cin, str);
    // Call the function to reverse word of string
    revStrWord = reverseword(str);
    cout<< revStrWord << endl;

    return 0;
}