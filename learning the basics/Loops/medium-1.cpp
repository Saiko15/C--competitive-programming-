// ● Read an integer N, then print diamond of 2N rows as below
//      *
//     ***
//    ***** 
//   *******
//  *********  
//  *********  
//   *******
//    ***** 
//     ***
//      *
#include<iostream>
using namespace std;

int main() {
    int number_of_row, double_of_rows;
    cin >> number_of_row; // 5
    double_of_rows = number_of_row * 2; // 10
    int constant_rows = double_of_rows; // 10

    while ( double_of_rows > 0)   // 9 7 5 3  1
    {
        if (double_of_rows % 2 == 1){
            int numbers_of_stars = constant_rows - double_of_rows; // 1 3 5 7 9  
            int spaces = number_of_row - 1; // 4 3 2 1
            while (numbers_of_stars>0) {
                while (spaces>0)
                    {
                        cout << " ";
                        spaces--;
                    } 
                cout << "*";
                numbers_of_stars--;
            }
            cout<<"\n";    
            number_of_row--;
        } 
        double_of_rows--;  
    }
     
    double_of_rows = constant_rows; // 10
    number_of_row = constant_rows / 2; //5
    int just_a_num = 1;


    while ( double_of_rows > 0)   // 9 7 5 3  1
    {
        if (double_of_rows % 2 == 1){
            int numbers_of_stars =  double_of_rows ; // 9 7 5 3 1  
            int spaces = just_a_num - 1; // 1 2 3 4
            while (numbers_of_stars>0) {
                while (spaces>0)
                    {
                        cout << " ";
                        spaces--;
                    } 
                cout << "*";
                numbers_of_stars--;
            }
            cout<<"\n";    
            just_a_num++;
        } 
        double_of_rows--;  
    }
    
    
    
    
    
    
    
    
    // while (M>0)
    // {
    //     int line = 1;
    //     while (M> N)
    //     {
    //         while (line >0)
    //         {
    //             cout << " * ";
    //             line++;
    //         }
    //     }
    //     N = M / 2;
    //     while (N>0)
    //     {
    //         /* code */
    //     }
        
    // }
    
}