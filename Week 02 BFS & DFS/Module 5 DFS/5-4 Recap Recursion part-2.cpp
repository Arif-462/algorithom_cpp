#include<bits/stdc++.h>
using namespace std;
/*
    steps of palindrome:
    ------------------------
    1.-> can we solve smallest problem
    2-> can we solve the larger problem given the smaller problem
        is already solved?
    3-> Generalize the relation into an formula.
*/
bool is_palindrome(string str)
{
    if(str == "" || str.size() == 1)
        {
            return true;
        }

    int n = str.size();

    string small_str = str.substr(1, n-2); //first and last character bade j string thake is called substring
    return is_palindrome(small_str) && (str[0] == str.back());

    //or//
    //================//
//    int l = 0, r = n-1;
//    while(l<r)
//    {
//        if(str[l] != str[r])
//        {
//            return false;
//        }
//        l++;
//        r--;
//    }
//    return true;

    //================



}

int main()
{
    string s;
    cin>>s;
    cout<<is_palindrome(s);
    // palindrome = 1, not palindrome is = 0;
}



// second formula for palindrome check
/*
bool is_palindrome(string str)
{
    if(str == "" || str.size() == 1)
        {
            return true;
        }

    int n = str.size();
    int l = 0;
    int r = n-1;

    while(l<r)
    {
        if(str[l] == str[r])
        {
            return true;
        }
        l++;
        r--;
    }
    return false;
}

int main()
{
    string s;
    cin>>s;
    cout<<is_palindrome(s);
    // palindrome = 1, not palindrome is = 0;
}
//*/
