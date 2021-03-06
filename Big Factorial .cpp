/*____________________________________
 
           CODE IS LIFE <@_@>
____________________________________*/
 
#include <bits/stdc++.h>
#include <cstdio>
#include <cmath>
#include <set>
#include<stack>
#include<array>
#include<string>
#include <numeric>
#define ll long long
#define ull unsigned long long
#define fai(i, a) for (ll i = 0; i < a; i++)
#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, min(b, c))
#define mxe(a, n)( * max_element(a, a + n))
#define mne(a, n)( * min_element(a, a + n))
#define vec vector < int >
#define vv vector < vi >
#define vll vector < ll >
#define pii pair < int, int >
#define pll pair < ll, ll >
#define vpi vector < pii >
 
///...Other Operations...///
#define pi 2.0 * acos(0.0)
#define eps 1e-11
#define sqr(n) n * n
#define all(a) a.begin(), a.end()
#define nl "\n"
#define check P("here\n")
#define gch getchar()
#define pb push_back
#define pp pop_back
#define sz() size()
#define SUM(a, n) accumulate(a, a + n, 0)
#define fin freopen("input.txt", "r", stdin);
#define fout freopen("output.txt", "w", stdout);
#define Dpos(n) fixed << setprecision(n)
#define w(t) cin >> t; while (t--)
 
#define count_bit(n) __builtin_popcount(n)
 
///...define mathematics...///
#define INF(int) 1e10
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define maxx 1000
 
using namespace std;
 
int multiply(int x, int result[], int result_size);
void factorial(ll n)
{
    int result[maxx];
    result[0] = 1;
    int result_size = 1;
    for (ll x = 2; x <= n; x++)
    {
        result_size = multiply(x, result, result_size);
    }
 
    for (int i = result_size - 1; i >= 0; i--)
        cout << result[i];
}
 
int multiply(int x, int result[], int result_size)
{
    int carry = 0;
    for (int i = 0; i < result_size; i++)
    {
        int temp = result[i] * x + carry;
        result[i] = temp % 10;
        carry = temp / 10;
    }
    while (carry)
    {
        result[result_size] = carry % 10;
        carry = carry / 10;
        result_size++;
    }
    return result_size;
}
 
int main()
{
    int n;
    cin >> n;
    factorial(n);
}