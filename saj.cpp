#include <iostream>
#include <set>  // You need this to use the set data structure
using namespace std;

int main() {
    set<int> st;  // Set to store unique horseshoe colors
    int a, b, c, d;
    
    // Input the four horseshoe colors
    cin >> a >> b >> c >> d;
    
    // Insert the horseshoe colors into the set (duplicates are automatically removed)
    st.insert(a);
    st.insert(b);
    st.insert(c);
    st.insert(d);
    
    // Calculate the number of distinct horseshoes and print how many more Valera needs to buy
    int n = st.size();  // The size of the set gives the number of distinct colors
    cout << 4 - n << endl;  // Valera needs 4 distinct horseshoes
    
    return 0;
}
