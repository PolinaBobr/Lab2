#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <locale.h>
#include <time.h>
#include "bubble.h"
#include "sliyanie.h"

int main() 
{    
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    merge(0, n - 1);

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

   
	int* a;
	int n,i;

	srand(time(NULL));

	n = rand() % 500 + 10;
	a = new int[n];

	for ( i = 0; i < n; i++ )
		a[i] = rand() % 1000 - 500;

	bubble(a, n);

	for (i = 0; i < n; i++)
		printf("%d\t", a[i]);

system("pause");

return 0;

}