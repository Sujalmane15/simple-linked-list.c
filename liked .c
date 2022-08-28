#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node*next;
};
 struct node *head=NULL,*newnode,*temp;
 
void insert();                    //INSERT FIRST
void insert_beginning();         //INSERT START BEGINNING
void insert_pos();              //INSERT YOUR POSITION
void insert_end();             //INSERT END OF THE LINKED LIST
void delete_beginning();      //DELETE FOR START POINT
void delete_end();           //DELETE FOR END
void delete_pos();          //DELETE FOR POSITION
void length();             //LENGHT OF LIST
void reverse();           //REVERSE LIST


int main()                    //MAIN FACTION/*
{
int ch,fg=1;
while(fg==1)
{
printf("LINKED LIST MENU:");
printf("\n PRESS 1 FOR INSERT:");
printf("\n PRESS 2 FOR INSERT BEGINNING ELEMENT:");
printf("\n PRESS 3 FOR INSERT POSITION:");
printf("\n PRESS 4 FOR INSERT END ELEMENT:");
printf("\n PRESS 5 FOR DELETE FIRST ELEMENT:");
printf("\n PRESS 6 FOR DELETE POSITION ELEMENT:");
printf("\n PRESS 7 FOR DELETE END ELEMENT:");
printf("\n PRESS 8 FOR LENGTH OF A LINKED LIST:");
printf("\n PRESS 9 FOR REVERSE OF THE LINKED LIST:");



printf("\n ENTER THE YOUR OPTION:");
scanf("%d",&ch);

switch(ch)
{       
        case 1:insert();
		break;
        case 2:insert_beginning();
		break;
	 case 3:insert_pos();
	       break;	
        case 4:insert_end();
	       break;	
        case 5:delete_beginning();
              break;
        case 6:delete_pos();
              break;
        case 7:delete_end();
              break;
        case 8:length();
	       break;      
        case 9:reverse();
	        break;		
        default:printf("ENTER THE CORRECT OPTION:");
        break;

}
    printf("\n PRESS 1 FOR LINKED LIST MENU:");
    scanf("%d",&fg);

}
return 0;
}
void insert()           //INSERT FIRST
{     
	
  int ch,cout;
  head=0;
  while(ch) 
   {
  

  	newnode=(struct node*)malloc(sizeof(struct node));
  	printf("\n ENTER THE DATA:");
  	scanf("%d",&newnode->data);
  	newnode->next=0;
  	if(head==0)
       {
       	head=temp=newnode;
	  }  
	  else
	  {
	  	temp->next=newnode;
	  	temp=newnode;
	  }
	  printf("\n DO YOU WANT TO CONTINUE(PRESS 1):");
	  scanf("%d",&ch);
   }
   temp=head;
   while(temp!=0)
   {
   	printf("\n%d",temp->data);
   	temp=temp->next;
   	cout++;
   }
}
void insert_beginning()            //INSERT START BEGINNING
{  
	int cout;
       
        newnode=(struct node*)malloc(sizeof(struct node));
  	 printf("\n ENTER THE DATA:");
  	 scanf("%d",&newnode->data);
  	 newnode->next=head;
  	 head=newnode;
  	 
    temp=head;
     while(temp!=0)
   {
   	printf("\n%d",temp->data);
   	temp=temp->next;
   	cout++;
   }	
}
void insert_end()               //INSERT END OF THE LINKED LIST
{
	int ch,cout;
      
        newnode=(struct node*)malloc(sizeof(struct node));
  	 printf("\n ENTER THE DATA:");
  	 scanf("%d",&newnode->data);
  	 newnode->next=NULL;
  	 temp=head;
  	 while(temp->next!=0)
  	 {
  	 	temp=temp->next;
	   }
	   temp->next=newnode;
	   newnode=NULL;
  	 
    temp=head;
     while(temp!=0)
   {
   	printf("\n%d",temp->data);
   	temp=temp->next;
   	cout++;
   }	
}
void insert_pos()        //INSERT YOUR POSITION
{ 
       int pos,count,i,cout;

	printf("\n ENTER THE YOUR POSITION:");
	scanf("%d",&pos);
	
	
	        temp=head;
		while(i<pos)
		{
			temp=temp->next;
			i++;
		}
	
        newnode=(struct node*)malloc(sizeof(struct node));
  	 printf("\n ENTER THE DATA:");
  	 scanf("%d",&newnode->data);
  	 
  	 newnode->next=temp->next;
  	 temp->next=newnode;
  	 
  	 temp=head;
       while(temp!=0)
   {
   	printf("\n%d",temp->data);
   	temp=temp->next;
   	cout++;
   }
}
void delete_beginning()       //DELETE FOR START POINT
{ 
       int cout;
       
	struct node *temp;
	temp=head;
	head=head->next;
	printf("\n DELETE ELEMENT:%d",temp->data);
	free(temp);
	printf("\n DISPLAY THE ELEMENT:");
	
	temp=head;
       while(temp!=0)
   {
   	printf("\n%d",temp->data);
   	temp=temp->next;
   	cout++;
   }
	
}
void delete_end()             //DELETE FOR END
{
	int cout;
	struct node *temp,*prevnode;
	
	temp=head;
	while(temp->next!=NULL)
	{
		prevnode=temp;
		temp=temp->next;
	}
	prevnode->next=NULL;
	if(temp==head)
	{
		head=NULL;
	}
	else
	{
		prevnode->next=NULL;
	}
	printf("\n DELETE ELEMENT:%d",temp->data);
	free(temp);
	
     printf("\n DISPLAY THE ELEMENT:");
	
	temp=head;
       while(temp!=0)
     {
   	printf("\n%d",temp->data);
   	temp=temp->next;
   	cout++;
     } 
}
void delete_pos()           //DELETE FOR POSITION
{
	struct node *nextnode;
	int pos,i=1,cout;
	
	temp=head;
	printf("\n ENTER THE POSITION:");
	scanf("%d",&pos);
	
	while(i<pos-1)
	{
		temp=temp->next;
		i++;
	}
	nextnode=temp->next;
	temp->next=nextnode->next;
	printf("\nDELETE ELEMENT:%d",nextnode->data);
	free(nextnode);
        
      printf("\n DISPLAY THE ELEMENT:");
	temp=head;
       while(temp!=0)
   {
   	printf("\n%d",temp->data);
   	temp=temp->next;
   	cout++;
   }
	
	
	
}
 void length()      //LENGHT OF LIST
 {
 	int cout;
 	
 	struct node*temp;
 	temp=head;
 	while(temp!=NULL)
 	{
 	       cout++;
 		temp=temp->next;
	}
	printf("\n length is:%d",cout);
	
 }
 void reverse()        //REVERSE LIST
 {     
        int cout;
 	struct node*prevnode,*currentnode,*nextnode;
 	prevnode=0;
 	
 	currentnode=nextnode=head;
 	
 	while(nextnode!=0)
 	{
 		nextnode=nextnode->next;
 		currentnode->next=prevnode;
 		prevnode=currentnode;
 		currentnode=nextnode;
	 }
	 head=prevnode;
	 
	 temp=head;
       while(temp!=0)
   {
   	printf("\n%d",temp->data);
   	temp=temp->next;
   	cout++;
   }
	 
 }
 
             
