#pragma once
#include <bits/stdc++.h>

using namespace std;using f64 = double;using i64=long long;using u64=unsigned long long;
template<typename T> using Arr=vector<T>;
#define hfor(v, s, e) for(int v=(s);(s)<=v&&v<(e);++v)//half-opened range
#define hfori(v, s, e) for(int v=(e)-1;(s)<=v&&v<(e);--v)//inversion
#define hforo(v, s, e) int v=(s);for(;(s)<=v&&v<(e);++v)//out declaration
#define hforoi(v, s, e) int v=(e)-1; for(;(s)<=v&&v<(e);--v)
#define cfor(v, s, e) hfor(v,(s),(e)+1)//closed range
#define cfori(v, s, e) hfori(v,(s),(e)+1)
#define cforo(v, s, e) hforo(v,(s),(e)+1)
#define cforoi(v, s, e) hforoi(v,(s),(e)+1)
#define rep(v,x) hfor(v,0,(x))
#define repi(v,x) hfori(v,0,(x))
#define repo(v,x) hforo(v,0,(x))
#define all(x) (x).begin(),(x).end()
#define sz(x) ((int)(x).size())
#define pushb push_back
#define pushf push_front
#define popb pop_back
#define popf pop_front
#define empl emplace
#define emplb emplace_back
#define emplf emplace_front
#define fi first
#define se second
#define cxp constexpr
#define PQ std::priority_queue

#ifndef DEBUG
	auto __PRE_RUN__=(ios::sync_with_stdio(0), cin.tie(0), cout.tie(0),(cout<<fixed<<setprecision(11)), 0);
#endif

template<typename T> cxp T inf() { return numeric_limits<T>::max() / 2; }
const f64 pi=acosl(-1);
