//
//  main.c
//  FizzBuzz
//
//  Created by Karlo Pagtakhan on 01/04/2016.
//  Copyright © 2016 AccessIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    //Loop 100 times
    for (int x=1; x<=100; x++) {
        
        //Multiples of 3 and 5
        if( x % 3 == 0 && x % 5 == 0 ){
            printf("FizzBuzz \n");
        }
        //Multiples of 3
        else if( x % 3 == 0 ){
            printf("Fizz \n");
        }
        //Multiples of 5
        else if (x % 5 == 0) {
            printf("Buzz \n");
        }
        //Others
        else {
            printf("%d \n",x);
        }
    }
    return 0;
}
