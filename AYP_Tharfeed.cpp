#include <iostream>

#include <math.h>

using namespace std;



int main()
{

	int t, a[100], i, j, z;

	cin>>t;

	for(i=0; i<t; i++)

	    cin>>a[i];

	for(i=0; i<t; i++)

	    {

	        for(j=0; ; j++)

	            {

	                z=sqrt(a[i]+j);

	                if(a[i]+j==z*z)

	                    break;

	                z=sqrt(a[i]-j);

	                if(a[i]-j==z*z)

	                    break;

	            }

	        cout<<z*z<<"\t"<<j<<"\n";

	    }

	return 0;

}