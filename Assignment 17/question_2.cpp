// 2. Write a program to count the occurrence of a given character in a given string.
#include <iostream>
using namespace std;
#include <string.h>
#include<algorithm> // transfor() declaration
int main()
{
  char str[50];
  short alphabets[123]={0};
  cout << "Enter string to count occurence of character: ";
  cin.getline(str, sizeof(str));
  //strlwr(str); // It does not gives error while it is running on windows machine but it shows red line on strlwr()
  transform(str,&str[strlen(str)-1],str,::tolower); // this function is good for change upper to lower case in c++
  int i, j, count=0;
  for (i = 0; str[i]; i++)
  {
    count = 1;
    if (str[i] == 32)
      continue;
    for (j = i + 1; str[j]; j++)
    {
      if (str[i] == str[j])
      {
        str[j] = ' ';
        alphabets[str[i]] = ++count;
      }
    }
    if (j == strlen(str))
    {
      alphabets[str[i]] = count;
    }
  }
  for (i = 97; i < 123; i++) // print alphabets array(occurence of character)
  {
    if (alphabets[i] != 0)
      cout << (char)i << " ==> " << alphabets[i] << endl;
  }
  

      return 0;
}