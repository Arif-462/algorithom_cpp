#include <bits/stdc++.h>
using namespace std;


bool is_palindrome(string s)
{
    int count[27] = { 0 };

    for (int i = 0; i<s.size(); i++)
        count[s[i]-'a']++;


    int odd = 0;
    for (int i = 0; i < s.size() ; i++) {
        if (count[i] % 2 == 1)
            odd++;

        if (odd > 1)
            return false;
    }
    return true;
}


int main()
{
    string s;
    cin>>s;
    bool result = is_palindrome(s);

    if(result == true)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}


/*
#include <bits/stdc++.h>
using namespace std;


bool is_palindrome(string s)
{
    int count[26] = {0};
  for (char c : s) {
    count[c - 'a']++;
  }

  int oddCount = 0;
  for (int i = 0; i < 26; i++) {
    if (count[i] % 2 == 1) {
      oddCount++;
    }
  }

  if (oddCount > 1) {
    return false;
  } else {
    return true;
  }
}


int main()
{
    string s;
    cin>>s;
    bool result = is_palindrome(s);

    if(result == true)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}



*/
