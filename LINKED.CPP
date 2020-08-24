#include<iostream.h>
#include<conio.h>
struct node
{
 int   data;
 node *next;
};
class LinkedList
{
 node *temp;
 node *start , *end;
 public:
    LinkedList()
    {
     start = null;
     end = null;
    }
   int insertNode(int item)
   { temp= new temp;
      cout<<"Enter element : "; cin>>temp->data;
       if(start == null)
      {
	   start = temp;
	   end   = temp;
      }
      else
      {

      }
     return 1;
   }
   int deleteNode()
   {
   }

};
void main()
{
  clrscr();
  getch();
}