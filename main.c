//
//  main.c
//  else
//
//  Created by Vikram Venkatesh on 7/10/20.
//  Copyright © 2020 Vikram Venkatesh. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int n;
    int d;
    printf("Enter a number:");
    scanf("%d", &n);
    
    while(n!=0)
    {
        d = n%10;
        printf("%d \n", d);
        
        n = n/10;
        
        
        
    }
}
