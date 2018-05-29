#include <iostream>

using namespace std;



int main()

{

	int t, n, a[250], i, j, k;

	cin>>t;

	for(i=0; i<t; i++)

	    {

	        cin>>n;

	        for(j=0; j<n; j++)

	            cin>>a[j];

	        j=0;
 
	        k=n-1;

	        while (j<k)

	            {

	                if (a[j]<a[k])

	                    k--;

	                else

	                    j++;

	            }

	        cout<<a[j]<<"\n";

	    }

	return 0;
}