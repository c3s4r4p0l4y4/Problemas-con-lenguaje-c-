/***
*   author: cesar
*   created: 07.06.2021 21:38:24
***/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //solucion a un problema, con c++

    double y1,y2,y,z1,z2,z,x;
    cin>>x;

    y1=x+5;
    y2=2*(x+1);
    y=y1/y2;

    z1=pow(y,2)+x*(x-2*y);
    z2=x*y;
    z=z1/z2;

    cout<<z;

    return 0;
}