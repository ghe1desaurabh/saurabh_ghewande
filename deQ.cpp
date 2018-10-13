#include<iostream>
#include<deque>
using namespace std;
void displayDQf(deque<int>dq);
void displayDQr(deque<int>dq);
int main()
{
   deque<int>d;
   int val;
  int op;
  do
  {
    cout<<"\nEnter\n1 :Insert element from front\n2 :Insert rear\n3 :Display front\n4 :Display rear\n5 :Remove front\n6 :Remove Rear\n7 :Exit\nChoice  ";
    cin>>op;
       switch(op)
         {
          case 1:{
                    if(d.size()==10)
                      cout<<"\nDeQ is full\n";
                    else
                     {
                       cout<<"\nEnter the value: ";
                       cin>>val;
                      d.push_front(val);
                     }
          	}break;
         
         case 2:{
                   if(d.size()==10)
                     cout<<"\nDeQ is full\n";
                   else
                     {
                       cout<<"\nEnter the value: ";
                       cin>>val;
                       d.push_back(val);
                     }
          	}break;
         
         case 3:{ 
                     if(d.size()==0)
                        cout<<"\nDQ is empty\n";
                      else
                         displayDQf(d);
          	}break;
         
         case 4:{
         	      if(d.size()==0)
                        cout<<"\nDQ is empty\n";
                      else
                         displayDQr(d);
          	 }break;
         
         case 5:{
                   if(d.size()==0)
                        cout<<"\nDQ is empty\n";
                   else
                      {
                        int j;
                        j=d.front();
                        cout<<"\nPopped element: "<<j;
                        d.pop_front();
                      }
          	 }break;
          	 
         case 6:{
                     if(d.size()==0)
                        cout<<"\nDQ is empty\n";
                   else
                      {
                        int j;
                        j=d.back();
                        cout<<"\nPopped element: "<<j;
                        d.pop_back();
                      }
          	 }break;
         
         case 7:break;
         }
  }while(op!=7);
 return 0;
}
void displayDQf(deque<int>dq)
{
   while(!dq.empty())
    {
      int j=dq.front();
      cout<<"|"<<j;
      dq.pop_front();
    }
   cout<<"|"<<endl;
}
void displayDQr(deque<int>dq)
{
   while(!dq.empty())
    {
      int j=dq.back();
      cout<<"|"<<j;
      dq.pop_back();
    }
   cout<<"|"<<endl;
}
