/*Goal: Practice array manipulation in C++. 
**The user will input 40 integers. 
**Put them into an array. Then print the array in the order the numbers were
**entered. Then print in reverse order. Then sort the array in ascending order 
**and print it. 
**The each print of the array should separate the numbers in the array by
**one space. 
**For example: the array were [3,4,55] the printout would be 3 4 55
*/

#include <iostream>
#include <stdio.h>

int main()
{
    long temp;
    long userInput[40];
    
    for(int i = 0; i <40; i++)
        std::cin >> userInput[i];
    
    printf("printing like were given\n");
    for(int j=0; j<40 ; j++)
        printf("%ld ", userInput[j]);
    printf("\n");
    
    printf("reverse printing of like were given\n");
    for(int k=39; k>=0 ; k--)
        printf("%ld ", userInput[k]);
    printf("\n");
    
    printf("bubble sort ascending\n");
    for(int i=0; i<40-1 ; i++){
        for(int j=0; j<40-i-1 ; j++){
            if(userInput[j]> userInput[j+1]){
                temp            = userInput[j];
                userInput[j]    = userInput[j+1];
                userInput[j+1]  = temp;
            }
        }
    }

    for(int j=0; j<40 ; j++){
        printf("%ld ", userInput[j]);
    }
    printf("\n");
    
    
    return 0;
}
