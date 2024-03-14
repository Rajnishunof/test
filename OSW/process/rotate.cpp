#include<iostream>
using namespace std;

int GCD(int a,int b)
{
    if(a==0)
    {
        return b;
    }
    return GCD(b%a,a);
}
void rotateArr(int arr[],int n,int t)
{
    t%=n;
    int gcd = GCD(n,t);

    for(int i = 0; i<gcd; i++)
    {
        int temp = arr[i];
        int j = i;
        while(1)
        {
            int k = j+t;
            if(k>=n)
            {
                k = k-n;
            }
            if(k==i)
            {
                break;
            }
            arr[j] = arr[k];
            j = k;
        }
        arr[j] = temp;
    }

}
int main()
{
    int arr[] = {1,2,3,4,5};
    rotateArr(arr,sizeof(arr)/sizeof(int),7);

    for(int i : arr)
    {
        cout<<i<<" ";
    }
    return 0;
}
