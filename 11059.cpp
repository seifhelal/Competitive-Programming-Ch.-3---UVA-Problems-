//
//  main.cpp
//  khamsa_mwah
//
//  Created by SEIF on 5/23/17.
//  Copyright © 2017 SEIF. All rights reserved.
//
#include <stdio.h>
#include <vector>
#include <iostream>
#include <cmath>

#include<cstdio>
#include <string>
#include <iostream>
#include <iomanip>
#include <map>
#include <sstream>
#include <stack>
#include <deque>
#include <set>
#include <queue>
#include <list>
#include <algorithm>
#include <string.h>
#include <cstdio>
//#include "UFDS.h"

using namespace std;
vector<int> s;

int main()
{
    
    int n, cas=1;
    while (cin >> n)
    {
        long long arr[n];
        for (int i=0; i < n; i++)
            cin >> arr[i];
        long long  max=0;
        for (int i=0; i < n; i++)
            for (int j=i; j < n; j++)
            {
                long long p=1;
                for (int k=i; k <= j; k++)
                {
                    p*=arr[k];
                }
                if (p > max)
                    max=p;
            }
        
        cout << "Case #"
        << cas++
        << ": The maximum product is "
        << max
        << "."
        << endl
        << endl;

    }
    
}


/*

 
 
4
1 2 2 3
2 1 2 3
2 2 1 3
3 2 1 2
2
1 2
3 3
 
 
3
1 2 2
2 3 2
2 2 2
 
 */









