#include <iostream>
#include <stdio.h>
#iclude <string.h>
using namespace std;
 

int maxPrefix(char s[], char t[])
{
    int count = 0;
 
    
    for (int i = 0; i < strlen(t); i++)
    {
        
        if (count == strlen(s))
            break;
 
    
        if (t[i] == s[count])
            count++;
        }
     return count;
 
}
 

int main()
{
    char S[] = "digger";
    char T[] = "biggerdiagram";
 
    cout << maxPrefix(S, T)
         << endl;
 
    return 0;
}
