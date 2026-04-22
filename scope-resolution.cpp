#include<bits/stdc++.h>
//access global variables
int x = 5;
class DeclareFun{
    public:
    static int x;
    void fun();
};
void DeclareFun::fun(){
 std::cout << "Hello maddy";
}
int DeclareFun::x = 8089;
namespace S{
  int n = 90;
}
int main(){
    int x = 10;
    std::cout<<::x;
    DeclareFun A;
    A.fun();
    std::cout<<S::n;
    std::cout<<DeclareFun::x;
}