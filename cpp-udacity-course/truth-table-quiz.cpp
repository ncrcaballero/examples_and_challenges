/*Goal: use logical and relational operators in a C++ program. 
**Find all possible outputs for the given expression
**Hint: there are three inputs, so there are 8 possible input combinations (2^3)
**Which means there is an output for each combination of inputs.
**The expression: (A and B and C) or (A and( (not B) or (not C))) = Q
*/

#include<iostream>


int main()
{
    int a[] = {1, 0};
    int b[] = {1, 0};
    int c[] = {1, 0};
    int q;
    //(A and B and C) or (A and( (not B) or (not C))) = Q
    
    //Use this output format
    // std::cout<<"A\tB\tC\t(A && B && C)\t\t(!B||!C)\t\t(A&&(!B||!C))\t\tQ\n";
    
    for(int i = 0; i<2; ++i){
        for(int j = 0; j<2; ++j){
            for(int k = 0; k<2; ++k){
                q = ((a[i] && b[j] && c[k]) || a[i] &&( ( !b[j]) || ( !c[k]))) ;
                //std::cout<<"A\tB\tC\t(A && B && C)\t(!B||!C)\t(A&&(!B||!C))\tQ\n";
                std::cout<<a[i]<<"\t"<<b[j]<<"\t"<<c[k]<<"\t";
                std::cout<<(a[i] && b[j] && c[k]);
                std::cout<<"\t\t" << ( !b[j]) || ( !c[k]);
                std::cout<<"\t\t" << (a[i] &&( ( !b[j]) || ( !c[k]))) <<"\t\t";
                std::cout<<q << "\n";
            }
        }
    }
