#include<bits/stdc++.h>
using namespace std;
const int MOD = 998244353;
struct Mint {
private:
    int v;
public:
    Mint(): v(0) {}
    Mint(long x): v(((x % MOD) + MOD) % MOD) {}
    int val(){ return v; }
    Mint& operator+=(const Mint& rhs){ v += rhs.v; if(v >= MOD) v -= MOD; return *this;}
    Mint& operator-=(const Mint& rhs){ v -= rhs.v; if(v < 0) v += MOD; return *this;}
    Mint& operator*=(const Mint& rhs){ v = (1LL * v * rhs.v) % MOD; return *this;}
    Mint& operator/=(const Mint& rhs){ return *this = *this * rhs.inv(); }
    Mint operator+(){ return *this; }
    Mint operator-(){ return Mint(0) - *this; }
    Mint pow(long n) const{
        Mint x = *this, r = 1;
        while(n) {
            if(n & 1) r *= x;
            x *= x, n >>= 1;
        } return r;
    }
    Mint inv() const{ return pow(MOD-2); }
    friend Mint operator+(const Mint& a, const Mint& b){ return Mint(a) += b; }
    friend Mint operator-(const Mint& a, const Mint& b){ return Mint(a) -= b; }
    friend Mint operator*(const Mint& a, const Mint& b){ return Mint(a) *= b; }
    friend Mint operator/(const Mint& a, const Mint& b){ return Mint(a) /= b; }
};
