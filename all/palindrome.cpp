#include <iostream>
using namespace std;
int main()
{
   char str[];
   for (int i = 0; i <= str.length(); i++)
   {
      cout << str[i];
      if (str[i] == str[i - 1])
      {
         cout << "string is palindrome";
      }
      else
      {
         cout << "string is not palindrome"
      }
   }
}
