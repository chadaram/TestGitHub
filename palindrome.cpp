   #include<iostream>
   using namespace std;
   int main()
   {
   int i,n,first=1,second=1,next;
   cout<<"enter the limit\t";
   cin>>n;
   cout<<first<<"\t"<<second<<"\t";
   for(i=1;i<n-1;i++)
   {
  next=first+second;
  cout<<next<<"\t";
  first=second;
  second=next;
  }
  }
