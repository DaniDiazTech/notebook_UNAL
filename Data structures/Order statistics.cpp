#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> ordered_set;
//methods
tree.find_by_order(k) //returns pointer to the k-th smallest element
tree.order_of_key(x)  //returns how many elements are smaller than x
//if element does not exist
tree.end() == tree.find_by_order(k) //true

// Using less equal to create an ordered multiset
typedef tree<long long, null_type, less_equal<>, rb_tree_tag, tree_order_statistics_node_update> indexed_multiset;

// Using a custom datatype, e.g an struct
template<typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
