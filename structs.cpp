//structure
#include <iostream>
#define m 5
struct s
{int a;
 struct s *next=NULL;
} A, L[5], top;

void init(struct s *ptr)
{int i; std::cin>>i; (*ptr).a=i; std::cout<<"I= "<<(*ptr).a;
}

void push(struct s *t,int el);
void pop(struct s *t);
void print(struct s *t)
{struct s *temp=new(struct s);
temp=t;std::cout<<"\n traversing \n"<<t<<"\t "<<temp <<"\n";
while(temp!=NULL)
	{std::cout<<"\n traversing \n";
	std::cout<< temp->a <<"  ";
	 temp=temp->next;
	}
delete(temp);	
}
int main()
{//init(&A);
print(&top);
 for(int i=0; i<3; i++)
 	{int v;std::cout<<"\nvalue: ";std::cin>>v;
 	 push(&top,v);
 	 std::cout<<"\n" <<&top<<"\n";
 	 print(&top);
 	}
}
void push(struct s *t,int el)
{struct s *temp= new(struct s );
if(temp!=NULL)
{
	
		   temp->a=el;
	 	  temp->next=t;
	 	  t=temp; std::cout<<t->a<<"\n";
		  
	
	 delete(temp);	
}
else
 std::cout<<"\nOVERFLOW\n";
}
