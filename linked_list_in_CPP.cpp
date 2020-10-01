#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node* link;
};
node* head=NULL;
void insertbeg(int d)
{
    if(head==NULL)
    {
        head=new node();
        head->data=d;
        head->link=NULL;
    }
else
{
node* ptr=new node();
ptr->data=d;
ptr->link=head;
head=ptr;
}

}
void printnode()
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"~>";
        temp=temp->link;;
    }
    cout<<"NULL";
}
void insertend(int d)
{
    if(head==NULL)
    {
        head=new node();
        head->data=d;
        head->link=NULL;
    }
    else{
        node* ptr=new node();
        ptr->data=d;
        ptr->link=NULL;
        node *temp=head;
        while(temp->link!=NULL)
        {
            temp=temp->link;
        }
        temp->link=ptr;
        }
}
void deletefrombeg()
{
    if(head==NULL)
    {
        cout<<"sorry Boss!..no node to delete: ";
    }
    else{
        node *ptr=head;
        head=head->link;
        free(ptr);
        }
}
void deletefromend()
{node* ptr,*prev;
    if(head==NULL)
{
    cout<<"its empty BOss!";
}

else if(head->link==NULL) //only one node in list
{
ptr=head;
head=NULL;
free(ptr);
}
else{
    ptr=head;
   while(ptr->link!=NULL)
   {   prev=ptr;    //prev jo hai ptr ke node ka address rkhega!! 
       ptr=ptr->link;
   }
  
   prev->link=NULL;
   free(ptr);
}

}
void display_mid_element()
{
    node* slow=head;
    node* fast=head;
    if(head==NULL)
    {
        cout<<"list is empty Boss!";
    }
    else{
        while(fast!=NULL/*even*/ && fast->link!=NULL) //for even and odd cases
        {
            slow=slow->link;
            fast=fast->link;
            fast=fast->link;   //fast=fast->link->link;
        }
        cout<<"\nMID element is::) ~> "<<slow->data;
    }
}
void reverse_LL()
{
    node *prev,*current,*nextnode;
    prev=NULL;
    current=head;

    while(current!=NULL)
    {
        nextnode=current->link;
        current->link=prev;
        prev=current;
        current=nextnode;
    }
head=prev;
}
int find_loop()
{
    node *slow,*fast;
    slow=head;
    fast=head;
    while(fast!=NULL && fast->link!=NULL)
    {
        fast=fast->link;
        fast=fast->link;
        slow=slow->link;
        if(slow==fast)
        {
            return 1;
        }
    }
    return 0;
}

/*
void delete_pointergiven_to_node(node* ptr)
{
    node *temp;
    temp=ptr->link;                          ///delete middle node of a linked list...
    ptr->data=temp->data;
    ptr->link=temp->link;
    free(temp);
}
*/
/*
dettect_the_starting_of_loop(node* p)
{
    node* q=head;                   //q ko  head waale ka address dekr chaalo loop...;
    while(p!=q)
    {
        p=p->link;
        q=q->link;
    }    
    return p;
}
*/
/*
int intersection_of_two_ll()
{
node* a=ahead;
while(a!=NULL)
{
    node* b=bhead;
    while(b!=NULL)
    {
        if(a==b)
        {
            return a->data;
        }
        b=b->link;
    }
a=a->link;
}
return -1;
}
*/
int main()
{
cout<<"insert node at begning[ 10 ]\t\t";
insertbeg(10);
insertbeg(11);insertbeg(22);insertbeg(33);insertbeg(44);insertbeg(177);insertbeg(1220);
cout<<"\nso our LL is like this::\t";
printnode();
cout<<"\ninnsert at End of the list[ 55 ]\n";
insertend(55);
cout<<"so our LL is like this::\t";
printnode();
cout<<"\n delete from BEG::\t ";
deletefrombeg();printnode();
cout<<"\n delete from end::\t ";
deletefromend();
printnode();
cout<<"to display the middle element";
display_mid_element();cout<<"\n____\n";
printnode();cout<<"\n____________\n";
reverse_LL();
printnode();
int loopexist = find_loop();
if(loopexist==1)
{
    cout<<"\nloop is their";
}
else
{
    cout<<"\nloop is NOT their";
}

/*
delete_pointergiven_to_node(node* ptr);
*/
/*
dettect_the_starting_of_loop(struct *jhanprr_loop_exist_waale ne loop_hone_ka_pta_lgaaya_tha);
*/
/*intersection_of_two_ll();                   3~>4~>6~>7~..
                                                    33~>8~>\~>6~>88~>22~>NULL      //answer:--> [ 6 ]
                                             */

    return 0;
}
