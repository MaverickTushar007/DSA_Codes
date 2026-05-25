// #include <iostream>
// #include <vector>
// using namespace std;
// void hanoi(int n, char a, char b, char c)
// {   if (n==0) return;
//     hanoi(n-1,a,c,b);
//     cout<<a<<"->"<<c<<endl;
//     hanoi(n-1,b,a,c);
// }

// int main()
// {
//     int n = 3;
//     hanoi(n, 'A','B','C');
// }

#include <iostream>
using namespace std;

/**
 * Recursive function to solve Tower of Hanoi puzzle
 * n: number of disks
 * from_rod: source rod (e.g., 'A')
 * to_rod: destination rod (e.g., 'C')
 * aux_rod: helper rod (e.g., 'B')
 */



void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod)
{
    // Base Case: If there is only one disk, move it directly
    if (n == 0)
        return;
    if (n == 1)
    {
        cout << "Move disk 1 from rod " << from_rod << " to rod " << to_rod << endl;
        return;
    }

    // Step 1: Move n-1 disks from source to auxiliary rod/helper
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);

    // Step 2: Move the nth (largest) disk from source to destination rod
    cout << "Move disk " << n << " from rod " << from_rod << " to rod " << to_rod << endl;

    // Step 3: Move the n-1 disks from auxiliary rod to destination rod
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}

int main()
{
    int n = 4; // You can change the number of disks here
    towerOfHanoi(n, 'S', 'D', 'H');
    return 0;
}
