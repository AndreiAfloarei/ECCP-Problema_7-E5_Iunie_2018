#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;
ifstream in ("data.in");
ofstream out ("data.out");

int n, k, i, j, tip[10000], m[10000], mc, r[10000], rc, g[10000], gc, b[10000],bc;
float d[10000];
int main()
{in>>n>>k>>mc>>rc>>gc>>bc;
//out<<mc<<rc<<gc<<bc;
for(i=0;i<n;i++)
{
    in>>tip[i]>>m[i]>>r[i]>>g[i]>>b[i];
}
for(i=0;i<n;i++)
{
    d[i]=sqrt((mc-m[i])*(mc-m[i])+(rc-r[i])*(rc-r[i])+(gc-g[i])*(gc-g[i])+(bc-b[i])*(bc-b[i]));
}

for(i=0;i<n;i++)
    for(j=i+1;j<n;j++)
        if(d[i]>d[j])
{
    float aux1=d[i];d[i]=d[j];d[j]=aux1;
    int aux2=tip[i];tip[i]=tip[j];tip[j]=aux2;
    aux2=m[i];m[i]=m[j];m[j]=aux2;
    aux2=r[i];r[i]=r[j];r[j]=aux2;
    aux2=g[i];g[i]=g[j];g[j]=aux2;
    aux2=b[i];b[i]=b[j];b[j]=aux2;
}

out<<tip[0];

    return 0;
}
