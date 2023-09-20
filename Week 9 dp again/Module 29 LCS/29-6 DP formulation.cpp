

-dp state: LCS(i,j) = Longest common sequence of n and m string


- dp recurrence: LCS(i,j) => {
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

-base LCS(i,j) =
