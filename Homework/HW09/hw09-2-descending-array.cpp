/*
    ให้ผู้ใช้กรอกค่าเข้ามาเก็บในอาเรย์ จากนั้นให้ทำการแสดงค่าข้อมูล 2 แบบคือ "เรียงข้อมูลจากมากไปน้อย" และ "เรียงข้อมูลจากน้อยไปมาก"
    
    Test case:
        Input : 
            1
        Input : 
            5
        Input : 
            1
        Input : 
            4
        Input : 
            6
        Input : 
            9
        Input : 
            13
        Input : 
            -1
    Output:
        0-99 : 1 1 4 5 6 9 13
        99-0 : 13 9 6 5 4 1 1

*/
#include <stdio.h>
int main() {
    
    int num[ 100 ], N = 0, i, j ;
    int min = 0, max = 0 ;

    for ( i = 0; i <= N; i++) {
        printf( "Input :\n" );
        scanf( "%d", &num[ i ] ) ;
        N++ ;
        if ( num[ i ] == -1 ) break;
    }// end for loop

    printf( "0-99 :" ) ;
    for ( i = 0 ; i < N - 1; i++) {
        for ( j = i + 1; j < N - 1; j++) {
            if ( num[ i ] > num[ j ] ) {
                min = num[ i ] ;
                num[ i ] = num[ j ] ;
                num[ j ] = min ;
            }// end if loop
        }// end for loop
    }// end for loop

    for ( i = 0; i < N - 1; i++) {
        printf( " %d", num[ i ] ) ;
    }// end for loop

    printf( "\n99-0 :" ) ;
    for ( i = 0 ; i < N - 1; i++) {
        for ( j = i + 1; j < N - 1; j++) {
            if ( num[ i ] < num[ j ] ) {
                max = num[ i ] ;
                num[ i ] = num[ j ] ;
                num[ j ] = max ;
            }// end if loop
        }// end for loop
    }// end for loop

    for ( i = 0; i < N - 1; i++) {
        printf( " %d", num[ i ] ) ;
    }// end for loop

    return 0;
}
