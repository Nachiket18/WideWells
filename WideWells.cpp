#include <bits/stdc++.h>
using namespace std;


set< set<int> > wideWellsSubset(int arr[],int n)
{


    set< set<int> > outer;

    for(int i = 0; i < n ; i++)
    {
        for(int j=i+1;j < n;j++)
        {
            set<int> inner1;
            if(arr[j] < arr[i]) // The value of the element is lesser than value
            {
                break;
            }

            if(arr[i] == arr[j])
            {
                inner1.insert(i);
                inner1.insert(j);
                outer.insert(inner1);
            }
        }
    }

return outer;

}


int main()
{
	int n;
	set< set<int> > output;
	set< set<int> >:: iterator new_it;
    set<int>::iterator it;


	cout << "Enter size of the set\n";
	cin >> n;

	int arr[n];
	cout << "Enter Elements of the set\n";
	for(int i=0;i<n;i++)
		cin >> arr[i];

	output=wideWellsSubset(arr,n);

    for(new_it=output.begin();new_it!=output.end();new_it++)
    {
        for(it = new_it->begin(); it!=new_it->end(); it++)
        {
            cout << ' ' << *it;
        }
        cout << "\n";
    }



	return 0;
}
