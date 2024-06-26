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
