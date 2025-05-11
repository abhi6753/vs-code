// 8. Given a list of words followed by two words, the task is to find the minimum distance\
between the given two words in the list of words.\
(Example : s = {“the”,”quick”,”brown”,”fox”,”quick”}\
word1 = “the”, word2 = “fox”, OUTPUT : 2 )

//Distance ka mtlb hota hai ki hum us index pe kitna jump k baad pauche\
Na ki enterd word k bich me kitne indices(word) hai

#include <iostream>
#include <string>
#include <algorithm>
#include <string.h>
using namespace std;
void input(string str[], int size) // Input method
{
    cout << "\nEnter " << size << " words: " << endl;
    for (int i = 0; i < size; i++)
    {
        getline(cin, str[i]);
        if (!str[i].size()) // tackle prblm when we heat enter button without enter any character
        {
            i--;
            continue;
        }
    }
}
string remove_whitespaces(string str)
{
 
    string word="",sentence="";
    for(int i=0;str[i];i<str.size()&&i++)
    {
        word ="";
        while(str[i]!=32&&i<str.size())
        {
              word = word+str[i++];
        }
        if(word.size())
         sentence = sentence+" "+word;
    }
    sentence = sentence.substr(1);
    return sentence;
}
void mindis(string temp[], int size, string word1, string word2)
{
    // Agar hum chahe to bas alphabet (word) ko allow kre distance find krne ko uske liye hume simple sa\
      function likhna hai jo bta de ki given string me alphabet k alawa kuch or to ni agr kuch or hai to hum false return kr denge
    // or minimum distance find ni krenge
    // lekin mera logic kehta hai ki hum 2 string ka comparision kr rhe wo number v ho skta hai or alphanumeric v ya symbol k sath v
   
    string str[size]; // temp variable

    for (int i = 0; i < size; i++) // all string are converted into lowercase
    {
        str[i] = temp[i];

        transform(str[i].begin(), str[i].end(), str[i].begin(), ::tolower);
        str[i]=remove_whitespaces(str[i]);// it will remove all extra spaces ,hum chahe to ek functiton bna skte hai jo extra white space ko del kr de
    }
   
    transform(word1.begin(), word1.end(), word1.begin(), ::towlower); // given word converted into lowercase
    word1= remove_whitespaces(word1);
    transform(word2.begin(), word2.end(), word2.begin(), ::towlower);
    word2 = remove_whitespaces(word2);

    int word1index = -1, word2index = -1, dis2 = -1, dis1, j = 0; // -1 se initialise isiliye kiye q ki index 0 se start ho jata hai
   
    for (int i = 0; i < size; i++) // string me dono word agar hai to dono ka index store krwane ka kaam krega
    {
        if (str[i] == word1)
        {

            word1index = i;
        }
        if (str[i] == word2)
        {
            word2index = i;
        }
        if ((word1index >= 0) && (word2index >= 0)) // jaise hi variable me index ki value aa jayegi  hum loop break kr denge
            break;
    }
    if (word1index == -1 || word2index == -1) // agr dono word me se koi v ek word string me ni hoga to ye condition chlega
    {
        cout << "one of the word not found" << endl;
        goto exit;
    }
    if (word1index == word2index) // agar dono word same hi entered hoga then ye condition chlega
    {
        dis2 = 0;
    }
    if (word2index < word1index) //hum is condition k help se word2index ko greater rkhna chahte hai wordindex se
        swap(word1index, word2index);

    j = word2index + 1 >= size ? 0 : word2index + 1; // agar last index ka value word2index me ayega or usme +1 krenge to array of string\
                                             se bada ho jayega jo ki ilegal memory access ho skta hai isiliye humne ye condition lagay hai

    dis1 = word2index - word1index; // it determine distance left to right
    dis2 = size - word2index; //determine distance right to left
   

    while (j < word2index)  
    {
        if (j == word1index)
        {
            dis2;
            break;
        }
        j++;
        if (j >= size)
            j = 0;
        dis2++;
    }

    if (dis1 < dis2)
    {
        cout << "minimum distance = " << word2index - word1index << endl;
    }
    else
    {
        cout << "minimum distance = " << dis2 << endl;
    }
exit:
    return; // return control into main()
}
int main()
{
    int size;
    cout << "Enter number of words you want to enter :" << endl;
    cin >> size;
    fflush(stdin);
    string str[size], word1, word2;
    input(str, size);

    cout << "To find minimum distance b/w two words:" << endl;
    cout << "Enter first word : ";
    getline(cin, word1);
    cout << "Enter second word : ";
    getline(cin, word2);
    mindis(str, size, word1, word2); // minimum distance b/w two word
    return 0;
}