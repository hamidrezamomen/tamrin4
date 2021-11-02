#include <iostream>
using namespace std;
 
int main(int argc, char** argv) {
    
    int a, b, n1, n2, temp, kmm;
    cout<<"adad aval ra vared konid : ";
    cin>>a;
    cout<<"adad dovom ra vared konid : ";
    cin>>b;
    n1 = a;
    n2 = b;
    
    while(true){
        
        if(b == 0) break;
        
        temp = a%b;
        a = b;
        b = temp;
    }
    
    kmm = (n1 * n2) / a;
    
    cout<<"K.M.M do adad vared shode barabar ast ba :"<<kmm;
    
    return 0;
}