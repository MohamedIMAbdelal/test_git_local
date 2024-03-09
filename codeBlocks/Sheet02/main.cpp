#include<iostream>
//#include "headers.h"
#include<string>
#include"functions.cpp"
#include"C++ Class.cpp"
using namespace std;

int main(void)
{
    /*
    //Question 01
    int ticketInfo[2][3] = {{25,20,25}, {25,20,25}};
    print_ticketInfo(ticketInfo , 1 , 0);

    string seatingInfo[][2] = {{"Jamal", "Maria"}, {"Jake", "Suzy"},{"Emma", "Luke"}};
    print_seatingInfo(seatingInfo , 2 , 1);
    print_seatingInfo(seatingInfo , 0 , 1);
    */
    //======================================================================================
    //Question 02


    //int a[2][4] = {{2, 4, 6, 8}, {1, 2, 3, 4}};
    //print_2dArray(a , 2 , 4);
    //print_2dArray_usingPointers(a , 2 , 4);
    //print_element(a , 2 , 3);// user input position not index

    //======================================================================================
    //Question 03

    //int arry [3][3] = {1,2,3,4,5,6,7,8,9};
    //cout<<"Largest number in the 2d array of \"arry\" equals "<<getLargest(arry , 3 , 3)<<endl;

    //print_largest_usingPointers(arry , 3 , 3);

    //======================================================================================
    //Question 04

    //int matrix[][4] = {{1,1,2,2},{1,2,2,4},{1,2,3,4},{1,4,1,2}};
   // printSum_cols(matrix , 4 , 2);//input the col you want to sum
    //printSum_rows(matrix , 3 , 4);//input the row you want to sum

    //======================================================================================
    //Question 05
    //printArray_content();

    //======================================================================================
                                //programming projects
    //Question 01

    int test_arr[] = {1,2,10,5,6,7,8,9};
    //cout<<getMaxNum(test_arr , 3);

    //Question 02
    //deleteMaxNum(test_arr , 8);
    //sort1DArray(test_arr , 8);
    //Question 04
    //int test_Arr[] = {1,2,3,4,1,3,6,7,6,5,4,2};
    //int ArraySize = sizeof(test_Arr) / sizeof(test_Arr[0]);
    //removeDupes(test_Arr , ArraySize);
    //sort1DArray(test_Arr , ArraySize);
    //cout<<getMinNum(test_Arr , ArraySize)<<endl;
    //int testArray[20] = {17, 5, 11, 9, 20, 4, 2, 6, 14, 8, 18, 15, 3, 10, 12, 1, 7, 16, 19, 13};
    //sorting1DArray_byMinMax(testArray ,20);
    //sort1DArray(testArray ,20);

    //int array1[] = {1, 3, 5, 7, 9};
    //int array2[] = {2, 4, 6, 8, 10, 11, 12};
    //mergeTwoSorted1DArrays(array1 , 5 , array2 , 7);
    //mergeTwoUnsortedArrays(array1 , 5 , array2 , 7);

    //int array1[] = {9, 3, 7, 2, 6, 1, 4, 8, 5};
    //int size1 = sizeof(array1) / sizeof(array1[0]);

    //int array2[] = {11, 15, 13, 12, 20, 14, 16, 17, 18, 10};
    //int size2 = sizeof(array2) / sizeof(array2[0]);

    //mergeTwoUnsortedArrays(array1, size1, array2, size2);

    //int Array2D[][3] = {5,8,6,5,4,4,1,2,9,9,12,11};
    //int* ptr = Array2D[0];
    //sorting2DArray(&ptr , 4 , 3);
    //delete2DArray(&ptr , 4 , 3);
    //removeDupes2DArray(&ptr , 4 , 3);
    int arry1 [][3] = {1,3,4,7,8,9};
    int arry2 [][3] = {6,5,2,12,10,11,15,16,20};
    int* ptr1 = arry1[0];
    int* ptr2 = arry2[0];
    //mergeTwo2DArrays(&ptr1 , 2 , 3, &ptr2 , 3,3);
    //getInput1DArray(3);
    //getInput2DArray(1,3);

    //===============================CLASSES=================================================

    rectangle box;
    box.getLength(5);
    box.getWidth(10.2);
    box.printArea();
    return 0;
}
