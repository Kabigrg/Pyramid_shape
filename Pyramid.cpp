 #include <iostream>
using namespace std;
int main()
{
   int n;
   while(1){
      cout << "Enter an integer between 3 and 25: ";
      cin >> n;
      if(n>=3&&n<=25)
      break;
   }
   for(int i=n;i>=1;i--){
      for(int j=n;j>i;j--)
      cout << " ";
      for(int k=1;k<=2*i-1;k++)
   cout << '*';
   cout <<"\n";
   }
   
   for(int i=1;i<=n;i++){
      for(int j=n;j>i;j--)
         cout << " ";
      for(int k = 1;k<=2*i-1;k++)
      cout<< '*';
      cout<<"\n";
   }
   for(int i=i;i<n;i++){
      for(int j=1;j<=i;j++)
          cout<<"*";
      for(int j=i;j<n;j++)
          cout<<" ";
      for(int j=i;j<n;j++)
          cout<<" ";
      for(int j=1;j<=i;j++)
          cout<<"*";
   cout << endl;
}
      for(int i=1;i<n;i++){
      for(int j=i;j<n;j++)
          cout<<"*";
      for(int j=1;j<=i;j++)
          cout<<" ";
      for(int j=1;j<=i;j++)
          cout<<" ";
      for(int j=i;j<n;j++)
          cout<<"*";
   cout << endl;
      }

       return 0;
}