//
//  main.c
//  FizzBizz
//
//  Created by Karlo Pagtakhan on 01/04/2016.
//  Copyright © 2016 AccessIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    //Loop
    for (int x=1; x<=100; x++) {
        if( x % 3 == 0 && x % 5 == 0 ){
            printf("FizzBizz \n");
        } else if( x % 3 == 0 ){
            printf("Fizz \n");
        } else if (x % 5 == 0) {
            printf("Bizz \n");
        }
        else {
            printf("%d \n",x);
        }
    }
    return 0;
}
