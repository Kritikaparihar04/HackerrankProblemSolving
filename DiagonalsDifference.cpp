#include<iostream>
using namespace std;
int main()
{   int arr[30][30];
    int n;
    int sum1=0;
    int sum2=0;
    cout<<"enter the size of square matrix";
    cin>>n;   
    cout<<"Please enter the Mattrix :\n";

 
//enter the elements in the matrix
    for(int i=0;i<n;i++)
      {
          for(int j=0;j<n;j++)
          {
              cin>>arr[i][j];
          }
      }

//display matrix
cout<<"The matrix is:\n";
for(int i=0;i<n;i++)
      {
          for(int j=0;j<n;j++)
          {
              cout<<arr[i][j]<<" ";
          }
          cout<<endl;
      }


//sum of the first diagnol

for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        if(i==j)
        {
            sum1+=arr[i][j];
        }

    }
}
cout<<"The sum of one diagonal 1 is :  "<<sum1<<endl;

//sum of the second diagonal is

for(int i=0;i<n;i++)
{
    for(int j=n-1;j>=0;j--)
    {   if((i+j)==(n-1))
       { 
           sum2+=arr[i][j];
       }
    }
}
cout<<"The sum of other diagonal 2 :"<<sum2<<endl;

//difference of the diagonals
int diff=0;
cout<<"The difference between the diagonals is:"<<abs(sum1-sum2);

 return 0;

}
