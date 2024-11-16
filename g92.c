/*Hemanth wants to write a function display() that has one local variable and one static variable. The function should increment both values by 3 and print them. Call the display function 3 times from the main function.

Input format :
The input consists of two space-separated integers representing the local variable m and static variable n, respectively.

Output format :
The output prints the following in three lines after calling the display() function:

"Local=x Static=y" where x is the current value of m and y is the current value of n after incrementing them by 3.*/

#include <stdio.h>

void display(){
    int n1;
    static int n2;
    scanf("%d%d",&n1,&n2);
    printf("Local=%d Static=%d\n", n1, n2);

    n1 = n1+3;  
    n2 = n2+3; 
}
int main(){
    display();
    display();
    display();
    return 0;
}
