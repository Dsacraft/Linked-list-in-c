#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};

//create a new node
struct node *s_createnode(int value)
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL){
        printf("Memory allocation failed\n");
        exit(1);
    }
    newnode->data = value;
    newnode->next=NULL;
    return newnode;
}
// display the list
void s_display(struct node *start)
{
    struct node *ptr;
    ptr=start;
    if(start==NULL){
        printf("\nlist is empty");
        return;
    }
    printf("\n linked list: ");

    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");

}
// insert at begining
void s_insertbeg(struct node **start,int value)
{
    struct node *newnode;
    
    newnode=s_createnode(value);
    newnode->next=*start;
    *start=newnode;
}
//insert at end
void s_insertend(struct node **start , int value)
{
    struct node *newnode,*ptr;
    newnode=s_createnode(value);
    if(*start==NULL){
        *start=newnode;
        return;
    }
    ptr=*start;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=newnode;
    newnode->next=NULL;
}
//insert at any position
void s_insertpos(struct node **start,int value,int pos)
{
    struct node *newnode,*ptr;
    int i;
    ptr=*start;
    if(ptr==NULL){
        printf("Invalid position\n");
        free(newnode);
        return;
    }
    if(pos==1){
        s_insertbeg(start,value);
        return;
    }
    newnode= s_createnode(value);
    
    for(i=1;i<pos-1 && ptr!=NULL;i++){
        ptr=ptr->next;
    }
    newnode->next=ptr->next;
    ptr->next=newnode;
}
//delete at begining
void s_deletebeg(struct node **start)
{
    struct node *ptr;
    ptr=*start;
    if(*start==NULL){
        printf("linkedlist is empty \n");
        return;
    }

    *start=(*start)->next;
    free(ptr);
    
}
//delete node at the end
void s_deleteend(struct node **start)
{
    struct node *ptr, *preptr;
    if(*start==NULL){
        printf("linked list is empty");
        return;
    }
    ptr=*start;
    preptr=NULL;

    while(ptr->next!=NULL){
        preptr=ptr;
        ptr=ptr->next;
    }
    preptr->next=NULL;
    free(ptr);
    
    
}
// delete node at any position
void s_deletepos(struct node **start,int pos)
{
    struct node *ptr,*preptr;
    int i;

    if(*start==NULL){
        printf("linked list is empty\n");
        return;
    }

    if(pos==1){
        s_deletebeg(start);
        return;
    }

    ptr=*start;
    for(i=1;i<pos && ptr != NULL;i++){
        preptr=ptr;
        ptr=ptr->next;
    }
    preptr->next=ptr->next;
    free(ptr);
    
}
// circular linked list


void c_traversal(struct node *start){
    struct node *ptr;
    ptr=start;

    if(start==NULL){
        printf("List is empty");
    }
    while(ptr->next!=start){
        printf("\t %d",ptr->data);
        ptr=ptr->next;
    }
    printf("\t %d",ptr->data);
}
// insert at begining
void c_insertbeg(struct node **start,int value){
       struct node *newnode,*ptr;
       newnode=(struct node *)malloc(sizeof(struct node));
       ptr=*start;
       newnode->data=value;
       if(*start==NULL){
        *start=newnode;
        newnode->next=*start;
        return;
       }
       while(ptr->next!=*start){
        ptr=ptr->next;
       }
       ptr->next=newnode;
       newnode->next=*start;
      * start=newnode;
       
}
//insert at end
void c_insertend(struct node **start,int value){
    struct node *ptr,*newnode;
    ptr=*start;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    if(*start==NULL){
        *start=newnode;
        newnode->next=*start;
        return;
    }
    while(ptr->next!=*start){
        ptr=ptr->next;
    }
    ptr->next=newnode;
    newnode->next=*start;
}
// insert at any position
void c_insertpos(struct node **start,int value,int pos){
    struct node *ptr,*newnode;
    int i;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=value;
    if(ptr==NULL){
        printf("Invalid position.");
        free(newnode);
        return;
    }
    if(pos==1){
        c_insertbeg(start,value);
        return;
    }
    for(i=1;i<pos-1 && ptr!=*start; i++){
        ptr=ptr->next;

    }
    newnode->next=ptr->next;
    ptr->next=newnode;
}
// delete a node from begining
void c_deletebeg(struct node **start)
{
    struct node *ptr;
    ptr=*start;

    while(ptr->next!=*start){
        ptr=ptr->next;

    }
    ptr->next=(*start)->next;
    free(*start);
    *start=ptr->next;
    

}
//delete a node from last
void c_deleteend(struct node **start){
    struct node *ptr,*preptr;
    ptr=*start;
    while(ptr->next!=*start){
        preptr=ptr;
        ptr=ptr->next;
    }
    preptr->next=ptr->next;
    free(ptr);
    
}
// delete a node from any podition
void c_deletepos(struct node **start,int pos){
    struct node *ptr,*preptr;
    int i;
    ptr=*start;
    if(*start==NULL){
        printf("linked list is empty\n");
        return;
    }

    if(pos==1){
        c_deletebeg(start);
        return;
    }
    for(i =1;i<pos&& ptr != *start;i++)
    {
        preptr=ptr;
        ptr=ptr->next;
    }
    preptr->next=ptr->next;
    free(ptr);
}

// circular menu
void circularmenu ()
{
    struct node *start;
    start=NULL;
    int choice;
    int value;
    int pos;

    while(1)
    {
        printf("\n-----circular list menu-----\n");
        printf("\n 1: Display the list.");
        printf("\n 2: Insert at begining.");
        printf("\n 3: Insert at end.");
        printf("\n 4: Insert at position.");
        printf("\n 5: Delete from begining.");
        printf("\n 6: Delete from end.");
        printf("\n 7: Delete from any position");
        printf("\n 8: exit\n");

        printf("Enter your choice:");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                 c_traversal(start);
                 break;

            case 2:
                 printf("Enter the value:");
                 scanf("%d",&value);
                 c_insertbeg(&start,value);
                 break;

            case 3:
                 printf("Enter the value:");
                 scanf("%d",&value);
                 c_insertend(&start,value);
                 break;

            case 4:
                 printf("Enter the value:");
                 scanf("%d",&value);
                 printf("Enter the position:");
                 scanf("%d",&pos);
                 c_insertpos(&start,value,pos);
                 break;

            

            case 5:
                 c_deletebeg(&start);
                 break;

            case 6:
                 c_deleteend(&start);
                 break;
            case 7:
                 printf("Enter the position:");
                 scanf("%d",&pos);
                 c_deletepos(&start,pos);
                 break;

            case 8:
                 return;

            default:
                 printf("Invalid choice.\n");
        }

    }
    
}
// singular menu
void singlymenu()
{
    struct node *start;
    start=NULL;

    int choice;
    int value;
    int pos;

    while(1)
    {
        printf("\n---singly Linked list menu---\n");
        printf("1.create \n");
        printf("2.Display \n");
        printf("3.insert at begining\n");
        printf("4.insert at end\n");
        printf("5.insert at position\n");
        printf("6.delete from begining\n");
        printf("7.delete from end\n");
        printf("8.delete from any position\n");
        printf("9.exit\n");

        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
              printf("Enter value:");
              scanf("%d",&value);
              s_insertbeg(&start,value);
              break;

            case 2:
              
              s_display(start);
              break;

            case 3:
              printf("Enter value: ");
                scanf("%d", &value);

                s_insertbeg(&start, value);
                break;

            case 4:
                printf("Enter value: ");
                scanf("%d", &value);

                s_insertend(&start, value);
                break;

            case 5:
                printf("Enter position: ");
                scanf("%d", &pos);

                printf("Enter value: ");
                scanf("%d", &value);

                s_insertpos(&start, value, pos);
                break;

            case 6:
                s_deletebeg(&start);
                break;

            case 7:
                s_deleteend(&start);
                break;

            case 8:
                printf("Enter position: ");
                scanf("%d", &pos);

                s_deletepos(&start, pos);
                break;

            case 9:
                return;

            default:
                printf("Invalid choice\n");

        }
    }
    
}

//main menu
 
int main (){
    int choice;

    while(1){
        printf("\n====LINKED LIST====\n");
        printf("1: Singly linked list\n");
        printf("2: circular linked kist\n");
        printf("3: Exit\n");

        printf("Enter choice:");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                singlymenu();
                break;

            case 2:
                circularmenu();
                break;

            case 3:
                exit(0);

            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}
