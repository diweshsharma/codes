#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node*link;
    struct node*first,*rpt;

}
struct node*first;
void create();
void display();
void insert_beg();
void insert_end();
void insert_given();
void delete_beg();
void delete_end();
void delete_data();
void main(){
    create();
    display();
    insert_beg();
    insert_end();
    insert_given();
    delete_beg();
    delete_end();
    delete_data();

}
void create(){

}
void display(){
    struct node*ptr=first;
    while(ptr!=null)
    printf("%d",ptr->info);
    ptr=ptr->rpt;
}
// INSERTING AN NEW NODE AT THE BEGINNING 
void insert_beg(){
    struct node*ptr;
    ptr=(struct node*)malloc(size of (struct node));
    printf("enter the beginning node info")
    scanf("%d\t",&ptr->info);
    ptr->lpt=NULL;
    ptr->rpt=first;
    first->lpt=ptr;
    first=ptr;
    display();

}
// INSERTING A NEW AT THE END
void insert_end(){
    struct node*ptr,*cpt;
    ptr=(struct node*)malloc(sizeof(struct node));
    print("enter the end node info");
    scanf("%d\t",&ptr->info);
    cpt=first;
    while(cpt->rpt!=NULL){
        cpt=cpt->rpt;
        ptr->rpt=cpt;
        cpt->rpt=ptr;
        ptr->rpt=NULL;
    }
display();

}
// INSERTING A NEW NODE AFTER A GIVEN DATA
void insert_given(){
    struct node*ptr,*cpt;
    int data;
    ptr=(struct node*)malloc(sizeof(struct node));
    printf("enter the node info");
    scanf("%d\t",&ptr->info);
    printf("enter the data");
    scanf("%d\t",&data);
    cpt=first;
    while(cpt->info!=data){
        cpt=cpt->rpt
    }
    ptr->lpt=cpt;
    ptr->rpt=cpt->rpt;
    cpt->rpt=ptr;
    ptr->rpt->lpt=ptr
}
// DELETING THE BEGINNING NODE
void delete_beg(){
    struct node*ptr;
    ptr=first;
    first=ptr->rpt;
    first->lpt=NULL;
free(ptr);
display();

}
// DELETING THE END NODE
void delete_end(){
    struct node*ptr;
    while(ptr->rpt!=NULL)
    ptr=ptr->rpt;
    ptr->lpt->rpt=NULL;
    free(ptr);
    display();
}
// DELETING THE NODE AFTER THE GIVEN DATA
void delete_data(){
    struct node*ptr,*cpt,int data;
    printf("enter the data");
    scanf("%d",&data);
    ptr=first;
    while(ptr->info!=data){
        ptr=ptr->rpt;}
        ptr->lpt->rpt=ptr->rpt;
        ptr->rpt->lpt=ptr->lpt;
        free(ptr);
        display();
}