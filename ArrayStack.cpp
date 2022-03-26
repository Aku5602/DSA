#include<iostream>
using namespace std;
int Stack[3],top=-1;


int push(int n)
{
  if(top<3 )
  {
  top++;
  cout<<top;
  if(top>2)
  {
    cout<<"\t\t\t\n\n****OVERFLOW**** \n Plz first pop out the number";
    top--;
    cout<<top;
  }
  Stack[top]=n;
  }
  return 0;
}


int pop()
{
    Stack[top]==0;
    top--;
    if(top<=-1)
    cout<<"\t\t\t\n\n****UNDERFLOW****  \n Plz first push in some number";
    
    return 0;
}

int display()
{
   for(int i=0;i<=top;i++)
   {
       cout<<"\nElement : "<<Stack[i];
   }
   return 0;
}

int main()
{
  int choice,no;
  int push(int);
  int pop();
  int display();
  cout<<"\n1. Push \n2. Pop\n3. Display\n0. Exit";
  
  do
  {
      cout<<"\nEnter choice : ";
      cin>>choice;

    switch(choice)  
     {
        case 1: cout<<"\nEnter Element : ";
                cin>>no;
                push(no);
                break;
        case 2: pop();
                break;
        case 3: display();
                break;

     };
  
  } while (choice!=0);

   return 0;
}
