### Problem Name: I Like Pattern

## Source Code: 
//Problem: I Like Pattern
//Source Code Given Here.

#include<bits/stdc++.h>
using namespace std;

//function for pattern print
void pattern(unsigned int N, char T){

    //pattern for Number
    if( T == '1' && 1 <= N && N <= 26){
        //first row.
        for( unsigned int i = 1; i <= N; i++ ){
            printf("%d", i);
        }
        printf("\n");

        //middle rows
        for( unsigned int i = 1; i < N-1; i++ ){
            for(unsigned int j = 0; j < N; j++){
                if( j == 0 ) printf("%d", i + 1);
                else if(j == N-1) printf("%d", N-i);
                else printf(" ");
            }
            printf("\n");
        }

        //end row.
        for(int i = N; i >= 1; i--){
            printf("%d", i);
        }
        printf("\n");
    }

    //pattern for Characters
    else if( T == 'a' && 1 <= N && N <= 26){
        //first row.
        for( unsigned int i = 0; i < N; i++ ){
            printf("%c", char( T + i));
        }
        printf("\n");

        //middle rows
        for( unsigned int i = 1; i < N-1; i++ ){
            for(unsigned int j = 0; j < N; j++){
                if( j == 0 ) printf("%c", T + i);
                else if(j == N-1) printf("%c", T + N-1-i);
                else printf(" ");
            }
            printf("\n");
        }

        //end row.
        for(char ch = T + N-1; ch >= T; ch--){
            printf("%c", ch);
        }
        printf("\n");
    }
    //error message
    else{
        printf("Invalid Input!\n");
        printf("Your input must be 1 <= N <= 26 and T = a or T = 1\n");

    }
}

int main(){
    unsigned int N;
    char T;
    printf("Enter the value of N: ");
    cin >> N;

    printf("Enter the value of T: ");
    cin >> T;

    //pattern() function call here.
    pattern( N, T );

    return 0;
}

### Sample Outputs:

## Sample Input & Output-1: 
Enter the value of N: 5
Enter the value of T: a
abcde
b   d
c   c
d   b
edcba

Process returned 0 (0x0)   execution time : 4.046 s
Press any key to continue.

## Sample Input & Output-2: 
Enter the value of N: 7
Enter the value of T: 1
1234567
2     6
3     5
4     4
5     3
6     2
7654321

Process returned 0 (0x0)   execution time : 3.621 s
Press any key to continue.

## Sample Input & Output-3: 
abcdefghijklmnopqrstuvwxyz
b                        y
c                        x
d                        w
e                        v
f                        u
g                        t
h                        s
i                        r
j                        q
k                        p
l                        o
m                        n
n                        m
o                        l
p                        k
q                        j
r                        i
s                        h
t                        g
u                        f
v                        e
w                        d
x                        c
y                        b
zyxwvutsrqponmlkjihgfedcba

Process returned 0 (0x0)   execution time : 4.114 s
Press any key to continue.

## Sample Input & Output-4: 
Enter the value of N: 9
Enter the value of T: 1
123456789
2       8
3       7
4       6
5       5
6       4
7       3
8       2
987654321

Process returned 0 (0x0)   execution time : 4.268 s
Press any key to continue.

## Sample Input & Output-5: 
Enter the value of N: 27
Enter the value of T: 1
Invalid Input!
Your input must be 1 <= N <= 26 and T = a or T = 1

Process returned 0 (0x0)   execution time : 11.074 s
Press any key to continue.

## Sample Input & Output-6: 
Enter the value of N: 3
Enter the value of T: 1
123
2 2
321

Process returned 0 (0x0)   execution time : 3.148 s
Press any key to continue.

## Sample Input & Output-7: 
Enter the value of N: 13
Enter the value of T: a
abcdefghijklm
b           l
c           k
d           j
e           i
f           h
g           g
h           f
i           e
j           d
k           c
l           b
mlkjihgfedcba

Process returned 0 (0x0)   execution time : 3.672 s
Press any key to continue.

## Sample Input & Output-8: 
Enter the value of N: 2
Enter the value of T: a
ab
ba

Process returned 0 (0x0)   execution time : 3.640 s
Press any key to continue.

## Sample Input & Output-9: 
Enter the value of N: 1
Enter the value of T: a
a
a

Process returned 0 (0x0)   execution time : 12.484 s
Press any key to continue.

## Sample Input & Output-10: 
Enter the value of N: 26
Enter the value of T: 1
1234567891011121314151617181920212223242526
2                        25
3                        24
4                        23
5                        22
6                        21
7                        20
8                        19
9                        18
10                        17
11                        16
12                        15
13                        14
14                        13
15                        12
16                        11
17                        10
18                        9
19                        8
20                        7
21                        6
22                        5
23                        4
24                        3
25                        2
2625242322212019181716151413121110987654321

Process returned 0 (0x0)   execution time : 5.633 s
Press any key to continue.

### Myself:
* Name: SAIFUL ISLAM
* Phone: +8801521403128
* Email: saifulislamsaif797@gmail.com
* Address: Dhanmondi, Dhaka-1209 
