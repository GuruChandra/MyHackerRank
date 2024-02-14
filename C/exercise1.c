/*
You are playing an online game. In the game, a list of N numbers is given. The player has to arrange the numbers so that all the odd numbers of the list come after the even numbers. Write an algorithm to arrange the given list such that all the odd numbers of the list come after the even numbers.

Input

The first line of the input consists of an integer numbers, representing the size of the list(N).
The second line of the input consists of N space-separated integers representing the values of the list
Output

Print N space-separated integers such that all the odd numbers of the list come after the even numbers

Example

Sample Input

8

10 98 3 33 12 22 21 11

Sample Output

10 98 12 22 3 33 21 11
*/

// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    //printf("Hello world");
    int N;
    scanf("%d",&N);
    int *data =(int*)malloc(N*sizeof(int));
    for (int i =0; i < N; i++)
    {
        scanf("%d",&data[i]);
        //printf("%d ",data[i]);
    }
    int temp=0;
    for (int i =0; i < N; i ++)
    {
        for (int j = 1; j < N; j++)
        {
            if (data[j-1]%2 == 0) // EVEN
            {
                
            }
            else // ODD
            {
               temp = data[j-1];
               data[j-1]=data[j];
               data[j] = temp;
            }
        }
        
    }
    for (int i =0; i < N; i++)
    {
        
        printf("%d ",data[i]);
    }
    
    return 0;
}