//
//  main.c
//  examples
//
//  Created by Nguyen Tam on 9/4/18.
//  Copyright © 2018 Nguyen Tam. All rights reserved.
//

#include <stdio.h>
#include <unistd.h>

int main() {
    
    printf("Before the fork, in a simpler time: ");
    
    while(1) {
        pid_t pid = fork();
        
        printf("both processes chcking in! \n");
        
        if(pid ==0) {
            printf("hello, I am te child!\n");
            
        }
        else {
            printf("I am the parent, the child's pid is %d\n", pid);
        }
    }
    return 0;
}

