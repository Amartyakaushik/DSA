// Unit 4
/*
Single File Programming Question

Problem Statement

You work in a large warehouse where products are numbered from 0 to N-1. Your task is to identify any products that appear twice in the inventory list and report them in ascending order. This helps ensure accurate inventory management.

For instance, if you have N = 4 products with IDs {0, 1, 3, 2), and no duplicates exist, you report -1. However, if you have N = 5 products with IDs {1, 1, 2, 2, 3), you must report the duplicates in ascending order. 1 2. This ensures your warehouse maintains efficient inventory control. The input products must be listed in ascending order.


Now design a program using recursion to solve the given problem statement.

Input format:

The first line contains an integer N, the size of the array.

The second line contains N space-separated integers a[0], a[1], ..., a [N-1], representing the elements in the array in ascending order.

Output format:

The output should be a space-separated list of integers. 1815

If there are elements that occur twice in the given array, list them in ascending order.

If no such elements are found, the output should be "-1" to indicate that there are no duplicates.

Sample test cases:

Input 1:

4
0123
Output 1:

-1




Input 2:

5
11223


Output 2:
12
*/
#include <iostream>
#include <vector>
#include <set>
using namespace std;

// Function to recursively find duplicates
void find_duplicates(const vector<int>& arr, int index, set<int>& duplicates) {
    // Base case: if the index is at the end of the array, stop recursion
    if (index == arr.size() - 1) {
        return;
    }

    // Check if the current element is the same as the next element (which would mean a duplicate)
    if (arr[index] == arr[index + 1]) {
        // Add the duplicate to the set
        duplicates.insert(arr[index]);
    }

    // Recursively call the function for the next index
    find_duplicates(arr, index + 1, duplicates);
}

// Function to report duplicates
void report_duplicates(const vector<int>& arr) {
    set<int> duplicates;
    find_duplicates(arr, 0, duplicates);
    
    if (duplicates.empty()) {
        cout << -1 << endl;
    } else {
        for (int dup : duplicates) {
            cout << dup << " ";
        }
        cout << endl;
    }
}

int main() {
    // Input section
    int N;
    cin >> N;
    vector<int> arr(N);
    
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // Function call
    report_duplicates(arr);

    return 0;
}




/*
In this mystical kingdom, there were three enchanted pegs; the Source Peg, the Destination Peg and the Helper Peg. Each peg had unique magical properties essential for saving the kingdom from an evil sorceress's destructive curse.

To counter this spell and protect the kingdom, they had to transfer magical disks of varying sizes, represented by positive integers/from the Source Peg to the Destination Peg using the Helper Peg. Notably, each disk was smaller than the one beneath it.

I

According to the ancient legends, the Sorceress' curse could be broken only if the disks were transferred from the Source Peg to the Destination Peg following these rules:

1. Only one disk could be moved at a time.


2. A larger disk could never be placed on top of a smaller disk.


3. The Helper Peg could be used temporarily for disk movements.

The kingdom's wise sage had devised a solution using the Tower of Hanoi algorithm, a mysterious ritual that required the minimum number of moves to transfer all the magical dicke from the Source Bog to the DestinationPeg.

Write a program to calculate the minimum number of moves required to solve the Tower of Hanoi problem for n magical disks, thus breaking the Sorceress' curse and saving the kingdom from impending doom.

Sample test cases:

Input 1:

2

Output 1:

3

Input 2:

4

Output 2:

15
*/


#include <iostream>
using namespace std;

// Function to calculate the minimum number of moves required to solve Tower of Hanoi
int tower_of_hanoi(int n) {
    // The minimum number of moves required for n disks is 2^n - 1
    if (n == 1) {
        return 1;
    }
    return 2 * tower_of_hanoi(n - 1) + 1;
}

int main() {
    // Input section
    int n;
    cin >> n;  // Read the number of disks

    // Output the result (minimum number of moves)
    cout << tower_of_hanoi(n) << endl;

    return 0;
}