#include <iostream>
#include <vector>
using namespace std;
int stair_2jumps( int n )
{
    if (n==1) return 1;
    if (n==2) return 2;

    return stair_2jumps(n-1) + stair_2jumps(n-2);
}
int stair_3jumps(int n)
{
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;
    if (n==0)
        return 1;

    return stair_3jumps(n - 1) + stair_3jumps(n - 2) + stair_3jumps(n - 3);
}
int main()
{
    cout << stair_2jumps(4)<<endl;
    cout << stair_3jumps(3);

}

/*
---IMP NOTE:

🧩 Suppose you are standing on step n

How could you have landed there?

Option 1️⃣

Your last jump was 1 step
→ You came from step n-1

Option 2️⃣

Your last jump was 2 steps
→ You came from step n-2

Option 3️⃣

Your last jump was 3 steps
→ You came from step n-3

There are no other ways.
*/