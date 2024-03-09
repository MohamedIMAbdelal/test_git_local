#include<iostream>
#include<string>
//#include "headers.h"
using namespace std;
//this is a source file for function defintions
//question 01

void print_ticketInfo(int arr[][3] , int row , int col)
{
    cout<<"the value of ticketInfo at row "<<(row + 1)<<" and column "<<(col + 1)<<" equals "<<arr[row][col]<<endl;
}

void print_seatingInfo(string arr [][2] , int row , int col)
{
    cout<<"the value of seatingInfo at row "<<(row + 1)<<" and column "<<(col + 1)<<" equals "<<arr[row][col]<<endl;
}
//question 02

void print_2dArray(int arr[][4] , int rows , int cols)
{
    for(int i = 0; i < rows;i++)
    {
        for(int j = 0;j < cols;j++)
            cout<<"element in row "<<(i + 1)<<" and column "<<(j + 1)<<" = " <<arr[i][j]<<endl;
    }
}

void print_2dArray_usingPointers(int arr[][4] , int rows , int cols)
{
    int arr_size = rows * cols;
    int* arr_ptr = *arr;// address of column
    for(int i = 0;i < arr_size;i++)
    {
        cout<<"element in row "<<(i + 1)<<" and column "<<(i + 1)<<" = " <<*(arr_ptr + i)<<endl;
    }
}

void print_element(int arr[][4] , int row , int col )
{
    row--;
    col--;
    cout<<"the value of Array A at row "<<(row + 1)<<" and column "<<(col + 1)<<" equals "<<arr[row][col]<<endl;
}

//question 03

int getLargest(int arr[][3] , int rows , int cols)
{
     int largest = arr[0][0];
     for(int i = 0; i < rows;i++)
    {
        for(int j = 0;j < cols;j++)
        {
            if(arr[i][j] > largest)
                largest = arr[i][j];
        }

    }
    return largest;
}

void print_largest_usingPointers(int arr[][3] , int rows , int cols)
{
    int arr_size = rows * cols;
    int* arr_ptr = *arr;// address of column
    int largest = *arr_ptr;
    for(int i = 0;i < arr_size;i++)
    {
        int arr_elem = *(arr_ptr + i);
        if(arr_elem > largest)
            largest = arr_elem;
    }
    cout<<"Largest number in the 2d array of \"arry\" equals "<<largest<<endl;

}
//question 04
void printSum_cols(int arr[][4] , int rows , int cols)
{

    int sum = 0;
    int col = cols;
    for (int i = 0; i < rows; i++)
    {
        sum += arr[i][col];
    }
    cout<<"THE SUM OF COLS OF COL "<<col<<" EQUALS "<<sum<<endl;
}

void printSum_rows(int arr[][4] , int rows , int cols)
{

    int sum = 0;
    int row = rows;
    for (int i = 0; i < cols; i++)
    {
        sum += arr[row][i];
    }
    cout<<"THE SUM OF ROWS OF ROW "<<row<<" EQUALS "<<sum<<endl;
}
//question 05
void print2DArray(int** arr , int rows , int cols)
{
    //using one for loop and pointers

    int arr_size = rows * cols;
    for(int i = 0;i< arr_size;i++)
    {
        cout<<*(*arr + i)<<" ";
    }
    cout<<"\n";
    /*
    // using two for loops
    for(int row = 0;row < rows;row++)
    {
        for(int col = 0;col < cols;col++)
        {
            cout<<"element in row "<<(row + 1)<<" and column "<<(col + 1)<<" = " <<arr[row][col]<<endl;
        }
    }
    */
}
void printArray_content()
{
    int arr[][3] = {{3,2,1},{1,2,3}};
    int value = 0;
    for (int row = 1; row <2; row++)
    {
        for (int col = 1; col < 2; col++)
        {
            value = arr[row][col];
            if (value % 2 == 1) {arr[row][col] = value + 1;}
            if (arr[row][col] % 2 == 0) {arr[row][col] = value * 2;}
        }
    }

    int* ptr = arr[0];
    print2DArray(&ptr , 2 , 3);
}
//==========================================================================
                        //Programming Projects
//Question 01

int getMaxNum(int* ptr , int arr_size)
{
    int maxNum = *ptr;
    for(int i = 0;i < arr_size;i++)
    {
        if(*(ptr + i) > maxNum)
            maxNum = *(ptr + i);
    }
    return maxNum;
}

int getMinNum(int* ptr , int arr_size)
{
    int minNum = *ptr;
    for(int i = 0;i < arr_size;i++)
    {
        if(*(ptr + i) < minNum)
            minNum = *(ptr + i);
    }
    return minNum;
}

//Question 02
void print1DArray(int* ptr , int arr_size)
{
    for(int k = 0;k < arr_size;k++)
    {
        cout<<*(ptr + k)<<" ";
    }
    cout<<"\n";
}
void deleteMaxNum(int* ptr , int arr_size)
{
    int shiftIndex = 0;
    int maxNum = getMaxNum(ptr , arr_size);
    for(int i = 0;i <  arr_size;i++)
    {
        if(*(ptr + i) == maxNum)
            shiftIndex = i;
    }
    for(int j = shiftIndex;j < arr_size - 1;j++)
        *(ptr + j) = *(ptr + j + 1);
    *(ptr + arr_size - 1) = 0;

    print1DArray(ptr , arr_size);
}

void removeDupes(int arr[] , int arr_size)
{
    int n = 0;// number of dupes or shifted elements
    for(int i = 0;i < arr_size;i++)
    {
        for(int j = i + 1;j < arr_size - n;j++)
        {
            if(arr[i] == arr[j])
            {
                n++;
                arr[arr_size - n] = 0;
                for(int k = j;k < arr_size - n;k++)
                {
                    arr[k] = arr[k + 1];
                }
            }
        }
    }
    print1DArray(arr , arr_size);
}

void sort1DArray(int arr[] , int arr_size)
{
    int temp = 0;
    bool NotSorted = true;
    while(NotSorted)
    {
    int sorted = true;
    for(int i = 0;i < arr_size - 1;i++)
    {
        if(arr[i] > arr[i + 1])
        {
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
            sorted = false;
        }
    }
    if(sorted == true)
        NotSorted = false;
    }

    print1DArray(arr , arr_size);
}
void swap_byRefernce(int &x , int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
/*
// my code has some flaws
void sorting1DArray_byMinMax(int arr[] , int arr_size)
{
    int n = arr_size / 2 , j = 0;
    while(n > 0)
    {
        int minNum = arr[j], maxNum = arr[j];
        int minIndex = j, maxIndex = j;

       for(int i = j;i < arr_size - (j+1) ;i++)
       {
            if(arr[i] > maxNum)
            {
                maxIndex = i;
                maxNum = arr[i];
            }

            if(arr[i] < minNum)
            {
                minIndex = i;
                minNum = arr[i];
            }
        }
        if(maxIndex != arr_size - (j + 1))
        {
            swap_byRefernce(arr[arr_size - (j + 1)] , arr[maxIndex]);
        }

        if(minIndex != j)
        {
            swap_byRefernce(arr[j] , arr[minIndex]);
        }

        j++;
        n--;

    }


    print1DArray(arr , arr_size);
}
*/
void sorting1DArray_byMinMax(int arr[], int arr_size)
 {
    int start = 0, end = arr_size - 1;

    while (start < end)
    {
        // Find minimum and maximum elements and their indices in the remaining array
        int minIndex = start , maxIndex = start;

        for (int i = start + 1; i <= end; i++)
        {
            if (arr[i] < arr[minIndex])
            {
                minIndex = i;
            }
            else if (arr[i] > arr[maxIndex])
            {
                maxIndex = i;
            }
        }

        // Swap minimum element with the start of the array (if not already there)
        if (minIndex != start)
        {
            swap_byRefernce(arr[minIndex], arr[start]);
        }

        // If the maximum element was at the start, its index is now at minIndex
        // So, update maxIndex if it was affected by the previous swap
        if (maxIndex == start)
        {
            maxIndex = minIndex;
        }

        // Swap maximum element with the end of the array (if not already there)
        if (maxIndex != end)
        {
            swap_byRefernce(arr[maxIndex], arr[end]);
        }

        // Move the pointers towards the center
        start++;
        end--;
    }

    print1DArray(arr, arr_size);
}

void mergeTwoSorted1DArrays(int arr1[] , int size1 , int arr2[] , int size2)
{
    int new_size = size1 + size2;
    int merged_arr[new_size] = {0};
    int j = 0;
    for(int i = 0;i < new_size;i++)
    {
        if(i < size1)
            merged_arr[i] = arr1[i];
        else
        {
             merged_arr[i] = arr2[j];
             j++;
        }
    }
    sorting1DArray_byMinMax(merged_arr , new_size);
}
void mergeTwoUnsortedArrays(int arry1[] , int size1 , int arry2[] , int size2)
{
   sort1DArray(arry1,size1);
   sort1DArray(arry2,size2);

   int new_size = size1 + size2;
   int merged_arr[new_size] = {0};
   int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2)
    {
        if (arry1[i] < arry2[j])
        {
            merged_arr[k] = arry1[i];
            i++;
        }
        else
        {
            merged_arr[k] = arry2[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements from arry1, if any
    while (i < size1)
    {
        merged_arr[k] = arry1[i];
        i++;
        k++;
    }

    // Copy remaining elements from arry2, if any
    while (j < size2)
    {
        merged_arr[k] = arry2[j];
        j++;
        k++;
    }
    print1DArray(merged_arr , new_size);

}
//======================================================
//Now We write 2d arrays
int getMaxNum_2DArray(int** ptr , int rows , int cols)
{
    int arr_size = rows * cols;
    int maxNum = 0;
    for(int i = 0;i < arr_size;i++)
    {
        if(*(*ptr + i) > maxNum)
            maxNum = *(*ptr + i);
    }
    return maxNum;
}
void delete2DArray(int** arr , int rows , int cols)
{
    int arr_size = rows * cols;
    int* ptr = arr[0];
    int target = getMaxNum_2DArray(&ptr , rows , cols);

    for(int i = 0;i < arr_size;i++)
    {
       if(*(*arr + i) == target)
       {
           for(int j = i;j < arr_size - 1;j++)
           {
               *(*arr + j) = *(*arr + j + 1);
           }
           *(*arr + arr_size - 1) = 0;
       }
    }
    print2DArray(&ptr , rows , cols);
}
void sorting2DArray(int** arr , int rows , int cols)
{
    int arr_size = rows * cols;
    int* ptr = arr[0];

    int temp = 0;
    bool NotSorted = true;
    while(NotSorted)
    {
    int sorted = true;
    for(int i = 0;i < arr_size - 1;i++)
    {
        if(*(*arr + i) > *(*arr + i + 1))
        {
            swap_byRefernce(*(*arr + i) , *(*arr + i + 1));
            sorted = false;
        }
    }
    if(sorted == true)
        NotSorted = false;
    }
    print2DArray(&ptr , rows , cols);
}
void removeDupes2DArray(int** arr , int rows , int cols)
{
    int arr_size = rows * cols;
    int* ptr = arr[0];
    int n = 0;// number of dupes or shifted elements
    for(int i = 0;i < arr_size;i++)
    {
        for(int j = i + 1;j < arr_size - n;j++)
        {
            if(*(*arr + i) == *(*arr + j))
            {
                n++;
                *(*arr + arr_size - n) = 0;
                for(int k = j;k < arr_size - n;k++)
                {
                    *(*arr + k) = *(*arr + k + 1);
                }
            }
        }
    }
    print2DArray(&ptr , rows , cols);
}
void mergeTwo2DArrays(int** arry1 , int rows1 , int cols1 , int** arry2 , int rows2 , int cols2)
{
    int* ptr1 = arry1[0];
    int* ptr2 = arry2[0];
   sorting2DArray(arry1, rows1 , cols1);
   sorting2DArray(arry2, rows2 , cols2);

   int size1 = rows1 * cols1;
   int size2 = rows2 * cols2;
   int new_size = size1 + size2;
   int merged_arr[5][3] = {0};
   int* merged_ptr = merged_arr[0];
   int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2)
    {
        if (*(*arry1 + i) < *(*arry2 + j))
        {
            *(*merged_arr + k) = *(*arry1 + i);
            i++;
        }
        else
        {
            *(*merged_arr + k) = *(*arry2 + j);
            j++;
        }
        k++;
    }

    // Copy remaining elements from arry1, if any
    while (i < size1)
    {
        *(*merged_arr + k) = *(*arry1 + i);
        i++;
        k++;
    }

    // Copy remaining elements from arry2, if any
    while (j < size2)
    {
        *(*merged_arr + k) = *(*arry2 + j);
        j++;
        k++;
    }
    print2DArray(&merged_ptr , 5,3);

}
void getInput1DArray(int size_arr)
{
    int arr[size_arr] = {0};
    for(int i = 0;i < size_arr;i++)
    {
        cout<<"Enter value of element #"<<(i+1)<<" : ";
        cin>>arr[i];
    }

    cout<<"FINISHED THANK YOU "<<"\n";
}

void getInput2DArray(int rows , int cols)
{
    int arr[rows][cols] = {0};
    for(int i = 0;i < rows;i++)
    {
        for(int j = 0;j < cols;j++)
        {
            cout<<"Enter value of element in ROW #"<<(i+1)<<" and in COL # "<<(j+1)<<" : ";
            cin>>arr[i][j];
        }
        cout<<"FINISHED THANK YOU "<<"\n";
    }


}
