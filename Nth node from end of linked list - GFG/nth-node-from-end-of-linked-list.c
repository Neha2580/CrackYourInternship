// { Driver Code Starts
//Initial Template for C
#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    
}*start;

void insert();


 // } Driver Code Ends
//User function Template for C

// //Function to find the data of nth node from the end of a linked list.
// int length(struct Node *head){
//     if(head==NULL){
//         return 0;
//     }
    
//     return 1+length(head->next);
// }
int getNthFromLast(struct Node *head, int n)
{
   struct Node* temp = head;
   int l = 0;
   while(temp!=NULL){
       temp= temp->next;
       l++;
   }
    if(n>l){
        return -1;
    }
    for(long long int i=0; i<l-n && head!=NULL; i++){
        head = head->next;
    }
    
    return head->data;
    
}

// { Driver Code Starts.



int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
      start=NULL;
      int n,k;
      scanf("%d",&n);
      scanf("%d",&k);
      insert(n);
      int res = getNthFromLast(start,k);
      printf("%d\n",res);
    }
    return 0;

}


 void insert(int n)
 {   int value,i;
     struct Node *temp;
     for(i=0;i<n;i++)
     {
         scanf("%d",&value);
         if(i==0)
         {
              start=(struct Node *) malloc( sizeof(struct Node) );
              start->data=value;
              start->next=NULL;
              temp=start;
              continue;
         }
         else
         {
             temp->next= (struct Node *) malloc( sizeof(struct Node) );
             temp=temp->next;
             temp->data=value;
             temp->next=NULL;
         }
     }
 }
 




  // } Driver Code Ends