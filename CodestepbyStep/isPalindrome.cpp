#include<iostream>
using namespace std;
/**--------------------
[
    make_low is a function for 
    making capital letter to small letter
]
-----------------------**/
char make_low(char c)
{
    if (c >= 'A' && c <= 'Z')
    {
        //return char(c + 32);
        return c-'A'+'a';
    }
    else
        return c;
}
bool isPalindrome(string s)
{
    int slen = s.length();
    if (slen <= 2)
    {
        if (slen < 2)
        {
            return true;
        }
        else
        {
            return make_low(s[0]) == make_low(s[slen - 1]);//---frome there if s[0]==s[1] then it will return 1 else 0
        }
    }
    else
    {
        char left = s[0], right = s[slen - 1];
        if (make_low(left) == make_low(right))
        {
            s[slen - 1] = '\0'; //changing string length 
            s = &s[1]; //changing string initial character
            return isPalindrome(s); 
        }
        else
            return false;
    }
}
int main()
{
    cout<<isPalindrome("Madom");
}