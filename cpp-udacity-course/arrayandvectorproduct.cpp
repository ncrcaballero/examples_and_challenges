/*Goal: practice using multidimensional arrays.
**Write a program that will accept values for a 4x4 array 
**and a vector of size 4. 
**Use the dot product to multiply the array by the vector. 
**Print the resulting vector. 
*/

#include<iostream>

int main()
{
    //TODO: multiply a 4x4 array with vector of size 4. 
    //Print the resultant product vector
    
    std::cout << "insert 16 values for first array\n";
    int arr1[4][4];
    int arr2[4];
    int arr3[4];
    for(int x=0;x<4;x++){
        for(int y=0;y<4;y++){
            std::cin >> arr1[x][y];
        }
    }
    std::cout << "insert 4 values for second array\n";
    for(int a=0;a<4;a++)
        std::cin >> arr2[a];
    
    
    std::cout << "printing first array\n";
    for(int q=0;q<4;q++){
        for(int w=0;w<4 ;w++){
            std::cout << arr1[q][w] << "\t";
        }
        std::cout << "\n";
    }
    std::cout << "printing second array\n";
    for(int e=0;e<4;e++){
        std::cout <<"["<< e <<"]"<< arr2[e] << "\n";
    }
    //setting 0 the array
    for(int xx=0;xx<4 ;xx++){
            arr3[xx] = 0;
        }
    
    for(int o=0;o<4;o++){
        for(int p=0;p<4 ;p++){
            arr3[o] = arr3[o] + (arr1[o][p] * arr2[o]);
        }
    }
    
    std::cout << "\nprinting thrid array\n";
    for(int u=0;u<4;u++){
        std::cout <<"["<< u <<"]"<< arr3[u] << "\n";
    }
    
    return 0;
}
