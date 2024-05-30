#include <bits/stdc++.h>

using namespace std;

int m;
typedef struct dragao{
    int forca=0,experiencia=0;
}dra;
bool cmp(dra a, dra b){
    if(a.forca<b.forca) return 1;
    else if(a.forca==b.forca && a.experiencia>b.experiencia) return 1;
    return 0;
}
int main(){
  int n,s,x=0;
  cin>>s>>n;
  dra d[n];
  for (int i = 0; i < n; i++)
  {
    cin>>d[i].forca>>d[i].experiencia;
  }
  sort(d,d+n,cmp);cout<<endl;
  for (int i = 0; i <n; i++)
  {

        if(s>d[i].forca)
            s+=d[i].experiencia;    
        else{
            x=1;
            break;
        }
  } cout<<endl;
    if(x==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}


