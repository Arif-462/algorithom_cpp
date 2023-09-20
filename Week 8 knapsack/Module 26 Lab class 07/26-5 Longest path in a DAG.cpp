


-state = f(n) -> longest distance from root to node n(destination)

- Recurence -> f(n) = max(f(p1),f(p2), f(p3).....f(pm))+1;
                        pm is the imidiate parent of node n

- base case - > f(root) = 0;


time complexity : O(v*e);
space complexity : O(n)
