#pragma once
#include <bits/stdc++.h>
using namespace std;

// Settings
#define INT64 1  // MLE?
#define INTERACTIVE 0
#define FP_PRECISION 11

// Optional
#if !(DEBUG)
auto __PRE_RUN__ = (ios::sync_with_stdio(0), cin.tie(0), cout.tie(0),
                    (cout << fixed << setprecision(FP_PRECISION)), 0);
#if !(INTERACTIVE)
#define endl '\n'  // interactive?
#endif
#endif
#if INT64
#define int i64
#endif

#define pushb push_back
#define pushf push_front
#define popb pop_back
#define popf pop_front
#define empl emplace
#define emplb emplace_back
#define emplf emplace_front
#define fi first
#define se second
#define mkp make_pair
#define mkt make_tuple
#define cxp constexpr
#define PQ std::priority_queue
#define lb lower_bound
#define ub upper_bound
#define reduce accumulate
using i64 = long long;
using u64 = unsigned long long;
using f64 = double;
using pint = pair<int, int>;
using tint = tuple<int, int, int>;
template<class T> using Arr = vector<T>;
template<class T> using Func = function<T>;
template<class T> using Str = basic_string<T>;
template<class T> using PQMax = PQ<T>;
template<class T> using PQMin = PQ<T, Arr<T>, greater<T>>;
template<class T> int sz(const T& x) { return x.size(); }
template<class T> cxp T inf() { return numeric_limits<T>::max() / 2; }
template<class... A> auto ARR(auto n, A&&... a) {
	if constexpr(sizeof...(a) == 0) return n;
	else
		return vector(n, ARR(a...));
}
template<class T> T dupl(const T& x, int n) {
	T r;
	for(int _ = 0; _ < n; _++) r.insert(r.end(), all(x));
	return r;
}
template<class T> T fp(const T& a, int p) {
	if(!p) return T(1);
	T z = fp(a, p / 2);
	return z * z * (p % 2 ? a : 1);
}
template<class T> inline T sq(T x) { return x * x; }
cxp int lg2f(int x) { return 63 - __builtin_clzll(x); }
cxp int lg2c(int x) { return 64 - __builtin_clzll(x - 1); }
Arr<int> range(int n) {
	Arr<int> r(n);
	for(int i = 0; i < n; i++) r[i] = i;
	return r;
}
const f64 pi = acosl(-1), eps = 1e-10;