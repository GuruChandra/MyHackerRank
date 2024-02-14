/*Dinesh is fond of video games. Due to the pandemic, he designs a video game called Corona world. In this game, the player enters the game with a certain energy. The player should defeat all the corona infected zombies to reach the next level. When time increases the zombies will increase double the previous minute. Anyhow the player can manage to fight against all the zombies. In this case, definitely the player can not achieve the promotion. Hence the player gets a superpower to destroy all the zombies in the current level when the current game time is a palindrome. Anyhow the player can manage only if he knows the time taken to get the superpower. Help the player by providing the minimum minutes needed to get the superpower by which he can destroy all the zombies. You will be provided with the starting time of the game.

Input Format:
First-line contains a string representing the starting time.

Output:
A string representing the minimum minutes needed to get the superpower.

Constraints:
Input time will be in 24 hours format

Sample Input:
05:39

Sample Output:
11

Explanation:
It takes 11 minutes for minute value to become 50, 05:50 is a palindromic time.

Sample Input :
Input
04:45

Sample Output:
65
*/

// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    printf("Hello world");
    char data[100];
    scanf("%s",data);
    printf("%s",data);
    //printf("%c, %c, %c, %c",data[0],data[1],data[3],data[4]);
    
    int hour_0 = data[0]-'0';
    int hour_1 =data[1]-'0';
    int min_0 = (data[3])-'0';
    int min_1 = (data[4])-'0';
    int hour = (hour_0*10+ hour_1) ;
    int minutes = (hour * 60) + ((min_0*10)+min_1);
    int reversed_hr = (hour_1*10) + hour_0;
    int flag = 1;
    int minCount = ((min_0*10)+min_1);
    while(flag)
    {
        if (reversed_hr != minCount)
        {
            minCount++;
            if(minCount >60)
            {
                minCount = 0;
                //increase the hour
                hour = hour +1;
                if (hour >24)
                {
                    hour =0;
                }
                reversed_hr = (hour%10)*10+(hour/10);
                printf("hour:%d, reversed hr:%d \n", hour, reversed_hr);
            }
        }
        else
        {
            printf("Found the palidrome");
            printf("%d:%d", hour, minCount);  
            
            printf("diff : %d", ((hour * 60) + minCount) - minutes );
            flag=0;
        }
        
    }
    
    
    
    return 0;
}