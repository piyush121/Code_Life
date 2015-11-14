#include <iostream>
using namespace std;

struct node{
int key;
node* left;
node* right;
};
node* root=NULL;

void insertbst(node *item,node *nroot=NULL){
    if (nroot == NULL)
    {   nroot=item;
        if(root==NULL) {root=nroot;}
    }
    else
    {   node* curr=nroot;
        if (item->key > curr->key)
        {
            if(curr->right==NULL){curr->right=item;}
            else
                insertbst(item,curr->right);
        }

        else
        {   if(curr->left==NULL){curr->left=item;}
            else
            insertbst(item,curr->left);
        }
    }
    cout<<"Success"<<endl;
    cout<<"Root value :"<<root->key<<endl;

//  return item;
}
node* createnode(int val,node* name)
{
    name->key=val;
    name->left=NULL;
    name->right=NULL;
    return name;
   }


void inorder( node* main)
{       node* parent;
        node* ptr;
        ptr=main;
    if (ptr==NULL)
        cout<<"Empty Tree"<<endl;
    else
       {

        if (ptr->left!=NULL)
           {
            parent=ptr;
            inorder(ptr->left);
            cout<<parent->key<<endl;
            }
        else
            cout<<ptr->key<<endl;
        if(ptr->right!=NULL)
               { parent=ptr;
                 //cout<<"going right"<<endl;
                 inorder(ptr->right);
               }
       }
 }

 void preorder(node* main)
 {
        node* ptr;
        ptr=main;

    if (ptr==NULL)
        cout<<"Empty Tree"<<endl;
    else
    {   cout<<ptr->key<<endl;
        if (ptr->left!=NULL)
        {
           preorder(ptr->left);
        }

        if(ptr->right!=NULL)
               {
                // cout<<"going right"<<endl;
                 preorder(ptr->right);
               }

    }

 }

 void postorder(node* main)
 {      node* ptr;
        ptr=main;

    if (ptr==NULL)
        cout<<"Empty Tree"<<endl;
    else
        if (ptr->left!=NULL)
           postorder(ptr->left);

        if(ptr->right!=NULL)
        {
           // cout<<"going right"<<endl;
            postorder(ptr->right);
        }

        cout<<ptr->key<<endl;

 }
int main()

{   cout<<"Insert new node ?"<<endl;
    int val,val1,val2,val3,val4;
    cin>>val;
    node* mnode=new node;
    mnode=createnode(val,mnode);
    insertbst(mnode,root);
    cout<<"Insert another"<<endl;
    cin>>val1;
    node *rnode=new node;
    rnode=createnode(val1,rnode);
    insertbst(rnode,root);
    cout<<"Insert another"<<endl;
    cin>>val2;
    node *lnode=new node;
    lnode=createnode(val2,lnode);
    insertbst(lnode,root);
    cout<<"Insert another?"<<endl;
    cin>>val3;
    node *llnode=new node;
    llnode=createnode(val3,llnode);
    insertbst(llnode,root);
     cout<<"Insert another?"<<endl;
    cin>>val4;
    node *rlnode=new node;
    rlnode=createnode(val4,rlnode);
    insertbst(rlnode,root);
    cout<<"Root value :"<<root->key<<endl;
   /* cout<<"root-right: "<<root->right->key<<endl;
    cout<<"root-left: "<<root->left->key<<endl;
    cout<<"root-left-left: "<<root->left->left->key<<endl;
    cout<<"root-right-left: "<<root->right->left->key<<endl;
    */

  //
    cout<<"\n\nRunning In order"<<endl;
    inorder(root);
    cout<<"\nRunning pre order"<<endl;
    preorder(root);
    cout<<"\nRunning post order"<<endl;
    postorder(root);



}

