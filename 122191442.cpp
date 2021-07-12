#include <iostream>

using namespace std;

class Node {
    public:
        long long int data;
        Node *next;
};
Node *start = NULL;
int main()
{
   unsigned long int arr[4] = {0};
   for(int i=0; i<4; i++){
       cin>>arr[i];
   }
   for(int i=0; i<4; i++){
       int temp = arr[i];
       int count = 0;
       int found = 1;
       if(start==NULL){
           Node *ptr = new Node();
           ptr->data=temp;
           ptr->next=NULL;
           start=ptr;
       }else{
           Node *ptr = start;
           while(ptr->next!=NULL){
               if(ptr->data == temp){
                   found = 2; //2 means success, means found
               }
               ptr=ptr->next;
           }
            if(ptr->data == temp){
                   found = 2; //2 means success, means found
            }
            if(found!=2){
                Node *ptr2 = new Node();
                ptr2->data = temp;
                ptr2->next = NULL;
                ptr->next = ptr2;
            }
       }
   }
   int total_shoes=0;
       Node *ptr = start;
       while(ptr!=NULL){
           int count=0;
           int temp = ptr->data;
           for(int j=0; j<4; j++){
               if(arr[j]==temp){
                   count++;
               }
           }
           if(count>1){
               total_shoes = total_shoes + (count-1);
           }
           ptr=ptr->next;
       }
   /*
   Node *ptr = start;
   while(ptr!=NULL){
       cout<<ptr->data <<" ";
       ptr=ptr->next;
   }
   */
   cout<<total_shoes;
   return 0;
}
