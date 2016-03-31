// P Queue
#include <iostream>
#define M 5
using namespace std;
void push(int val, int Q[]);
void pop(int Q[]);
void print( int Q[]);
int f=-1,r=-1;
int main()
{
	int Q[M]={0};
	for(int i=0;i<6; i++)
	{int val;
	cout<<"Enter a value: ";cin>>val;
	push(val,Q);
	print(Q);
	}
	
}
void print( int Q[])
{for(int i=f; i<=r;i++)
	cout<< Q[i]<<" ";
	cout<<"\n F: "<< f<<"   R: "<< r;
 cout<<endl;	
}
void push(int val, int Q[])
{int j,i;
if(f==r&&r==-1)
	{f=r=0;
	 Q[r]=val;
	 
	}
else if( r<M-1)
	{if(Q[r]<val)
		{r++;
		 Q[r]=val;
		}
	else
		{for(i=f; i<r;i++)
		 	if(Q[i]>val)
		 		{break;
		 		}
		 for(j=r;j>=i;j--)	
		 	Q[j+1]=Q[j];cout<<"\n "<<Q[j+1];
		 
		 
		 r++;	 
		 Q[i]=val;	
		 cout<<"\n"<<Q[r]<<"\n";
		 
		}	
	}
else
	cout<<"\nOverflow!\n";		
}
