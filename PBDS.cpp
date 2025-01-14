// Policy Based Data Stucture

#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

// Define PBDS 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; // find_by_order, order_of_key

int main() {
	pbds A; // declaration

	// Inserting elements 
	A.insert(1);
	A.insert(10);
	A.insert(2);
	A.insert(7);
    A.insert(5);
    A.insert(3);

	// A contains
	cout << "Set = ";
	for (auto i : A) cout << i << " ";
	cout << "\n";

	// finding kth element 
	cout << "3rd element: " << *A.find_by_order(2) << "\n";

    // finding number of eles smaller than k
    cout << "Eles smaller than 7: " << A.order_of_key(7) << "\n";

	// Remove element
    A.erase(2);

    // Also makes operations for lower and upper bound
}
