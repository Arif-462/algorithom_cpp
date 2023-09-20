
 case-1         case-2             str s and t
 ayc            yc
 aby            by

formula of bruteforce:

LCS(i,j) = {
    if(i==s.size() 0r j==t.size())
        return 0;


    if(s[i] == t[i])
    {
        return 1+LCS(i+1, j+1);
    }


    else
    {
        return max(LCS(i+1, j), LCS(i, j+1))
    }
}
