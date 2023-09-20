

            suffix dp formulation:

-dp state LCS(i,j) -> length of the longest common subsequence between string [0...i] and [0..j]


- dp recurrence LCS(i,j) -> 1+ LCS(i-1, j-1) if(s[i] == t[j])
                    esle max {LCS(i-1, j), LCS(i, j-1)};

-dp base LCS(i, 0) = 0
         LCS(0, j) = 0;
