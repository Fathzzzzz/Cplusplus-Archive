#include <iostream>
using namespace std;

bool sequentiasearch(int ar[10]){
    bool yes=false;
 for(int i=0;i<10;i++){
    if(ar[i]==6){
        return yes=true;
    }
 }
 return yes;
}
bool binary(int ar[10]){
    bool yes=false;
    int mid=10/2;
    while()do{}
}
int main(){
    int ar[10]={1,2,3,4,5,6,7,8,9,10};
    bool check=sequentiasearch(ar);
    bool check=binary(ar);
    if(check){
        cout<<"berhasil";
    } else cout<<"gagal";

    return 0;
}