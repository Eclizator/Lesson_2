
#include <unistd.h>
#include <iostream>
#include <stdio.h>

char letter_one (int a){
 
    
    return (char) a;
}

char letter_two (int b){
   
    return (char) b;
    
}

void write_chars_and_return_sum (int a, int b, int c, int d){
    
if (a && b > 121){
    write(1, "-1\n", 3);
}
if (a && b < 66){
    write(1, "-1\n", 3);
}

if (c && d > 30){
    write(1, "-1\n", 3);
    
}
letter_one((int) a);
letter_two((int) b);


     int i = 0;
int j = 0; //width (width - 1) j
int k = 0;
int l = 0; //heigt () l
while( l < d ){

        while (l < d){
        ++i;
        write(1, "a" , 1);
        
        if (j == c) {
           write(1, "\n", 1); 
        }
    }

        write(1, "a", 1);
        // int j = 0;

        while( j < c - 2){
            write(1, "b", 1); 
            j++;
        }
        write(1, "a\n", 2); 
        
        d++;
        if( l == d){        //tut pezda
            // int j = 0;
            while(j < c){
            write(1, "a", 1);
            j++;
            if (j == c) {
            write(1, "\n", 1); 
                }  
            }
            
        }
    }
}

int main(){
    write_chars_and_return_sum (67, 67, 25, 25);
    
}