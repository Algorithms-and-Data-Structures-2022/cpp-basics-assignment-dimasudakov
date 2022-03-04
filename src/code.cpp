/*
    @author Dmitriy S 
*/

#include <bits/stdc++.h>
//#include "assignment/code.hpp"
using namespace std;
 
#define fast_io         {ios::sync_with_stdio(0); cin.tie(0);}
#define all(v)          v.begin(),v.end()
#define pb              push_back
#define popb            pop_back
#define F               first
#define S               second
#define ccc             cout << " fuck " << endl;
#define prin(v)         {for(auto u : v) cout << u << ' '; cout << '\n';}
#define forn(i,n)       for(int i = 0; i < (n); i++)
#define len()           length()
#define fixed(n)        setprecision(n) << fixed
 
typedef long long ll;
typedef long double ld;
typedef vector<int> vint;
typedef vector<ll> vll;
typedef vector<bool> vbool;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
const ll MOD = 998244353;
//mt19937 rnd(chrono::steady_clock::now().time_since_epoch().count());

namespace assignment {

    // Task 1
    int squared_diff(int left, int right) {
        return (left - right) * (left - right);
    }

    // Task 2
    bool check_bit(int mask, int bit_pos) {
        if(mask < 0 || bit_pos < 0) return 0;
        return ((mask >> bit_pos) & 1);
    }

    // Task 3
    int max3(int left, int middle, int right) {
        return max(left, max(middle, right));
    }

    // Task 4
    void swap_args(int *left, int *right) {
        if(left == nullptr || right == nullptr) return;
        int mem = *left;
        *left = *right;
        *right = mem;
    }

    // Task 5
    int arr_sum(int *arr, int length) {
        if(length <= 0 || arr == nullptr) return 0;
        ll sum = 0;
        forn(i, length) sum += arr[i];
        return sum;
    }

    // Task 6
    int *find_max_elem(int *arr, int length) {
        if(length <= 0 || arr == nullptr) return nullptr;
        int *res;
        int mx = -1e9;
        forn(i, length) {
            if(arr[i] > mx) {
                mx = arr[i];
                res = &arr[i];
            }
        }
        return res;
    }

    // Task 7
    int *allocate_arr(int length, int init_value) {
        if(length <= 0) return nullptr;
        int *res = new int[length];
        fill(res, res + length, init_value);
        return res;
    }

    // Task 8
    int *clone_arr(int *arr_in, int length) {
        if(length <= 0 || arr_in == nullptr) return nullptr;
        int *res = new int[length];
        copy(arr_in, arr_in + length, res);
        return res;
    }

    // Task 9
    void print_kth_elements(int *arr, int length, int k, std::ostream &os) {
        if(length <= 0) cout << "Invalid argument: length\n";
        if(arr == nullptr) cout << "Invalid argument: arr\n";
        if(k <= 0) cout << "Invalid argument: k\n";
        if(length <= 0 || arr == nullptr || k <= 0) return;

        for(int i = 0; i < length; i += k) cout << arr[i] << '\t';
        return;
    }

}  // namespace assignment

/*
 
*/
