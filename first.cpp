#include<iostream>
using namespace std;
int main()
{
    int n,l,u;
    cin>>n>>l>>u;
    int* my_dynamic_array;
    my_dynamic_array = new int[n];
    for (int j = 0; j <n ; ++j)
        cin>>my_dynamic_array[j];


    for (int i = l; i<=u; ++i)
    {
        for(int j=0;j<n;j++)
            if(i==my_dynamic_array[j]){
                cout<<my_dynamic_array[j]<<" ";
                for(int k=j;k<n-1;k++)
                    my_dynamic_array[k]=my_dynamic_array[k+1];
                n--;
            }
    }
    return 0;
}
