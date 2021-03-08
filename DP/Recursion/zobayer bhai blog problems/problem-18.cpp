///Implemetation of
/*
strcat() :The strcat() function will append a copy of the source string to the end of destination string.
The strcat() function takes two arguments: 1) dest 2) src .It will append copy of the source string in the destination string.
The terminating character at the end of dest is replaced by the first character of src .
Return value: The strcat() function returns dest, the pointer to the destination string.
*/
#include<bits/stdc++.h>
using namespace std;

///Non-Recursive
void Strcat(char *dest,const char *src)
{

    /// Appends characters of source to the destination string
    while (*src != '\0')
    {
        *dest++ = *src++;
    }
    // null terminate destination string
    *dest = '\0';

    /// destination is returned by standard strcat()
    //return dest;
}
void Recur_Strcat(char *dest,const char *src)
{

}

int main()
{
    char *dest=(char*)calloc(100,sizeof(char));
    cout<<"How much string do you want to concatenate?"<<endl;
    int n;
    cin>>n;
    getchar();
    while(n--)
    {
        char s[50];
        gets(s);
        Strcat(dest,s);
    }
    cout<<dest<<endl;
    return 0;
}






/*
stracpy(), strcmp() and strlen() recursively.
*/

