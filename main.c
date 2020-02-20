//
//  main.c
//  maxnumber
//
//  Created by Mert Kacir on 18.02.2020.
//  Copyright © 2020 Ömer Kacır. All rights reserved.
//

#include <stdio.h>
int fun(int array[], int n){
int x;
if (n == 1)
return array[0]; //base case – temel durum
else
 x = fun(array, n - 1);
if (x > array[n - 1])
return x;
else
return array[n - 1];
}

int main(int argc, const char * argv[]) {
   int arr[] = { 12, 10, 300, 50, 100, 600 };
   printf(" %d ", fun(arr, 6));
   getchar();
    return 0;
}
