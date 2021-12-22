#include<iostream>
using namespace std;
struct Node{
    int number;
    Node* left;
    Node* right; 
    Node* parent;
    char colour;
};
class Red_Black_Tree{
private:
    Node* Tree_Root;
    Node* ak;
public:	
    Red_Tree()
    {
        ak = NULL;
        Tree_Root= NULL;
    }
    void INSERTION();
    void SEARCHING();
    void Delete();
    Node*successor(Node*);
    void InserTionFix(Node*);
    void LeftSide(Node*);
    void RightSide(Node*);
    void delfix(Node*);
    void show();
    void DISPLAY(Node*);
};
void  Red_Black_Tree::INSERTION()
{
    int num, akr = 0;
    cout << "\nEnter Key of the Node to be Inserted: ";
    cin >> num;
    Node* akk, * ak;
    Node* temp = new Node;
    temp->number = num;
    temp->left = NULL;
    temp->right = NULL;
    temp->colour = 'R';
    akk = Tree_Root;
    ak = NULL;
    if (Tree_Root == NULL)
    {
        Tree_Root = temp;
        temp->parent = NULL;
    }
    else
    {
        while (akk != NULL)
        {
            ak = akk;
            if (akk->number < temp->number)
                akk = akk->right;
            else
                akk= akk->left;
        }
        temp->parent = ak;
        if (ak->number < temp->number)
            ak->right = temp;
        else
            ak->left = temp;
    }
    InserTionFix(temp);
}
void  Red_Black_Tree::InserTionFix(Node* akr)
{
    Node* a;
    if (Tree_Root == akr)
    {
        akr->colour = 'b';
        return;
    }
    while (akr->parent != NULL && akr->parent->colour == 'r')
    {
        Node* kh= akr->parent->parent;
        if (kh->left == akr->parent)
        {
            if (kh->right != NULL)
            {
                a = kh->right;
                if (a->colour == 'r')
                {
                    akr->parent->colour = 'b';
                    a->colour = 'b';
                   kh->colour = 'r';
                    akr = kh;
                }
            }
            else
            {
                if (akr->parent->right ==akr)
                {
                    akr = akr->parent;
                    LeftSide(akr);
                }
                akr->parent->colour = 'b';
                kh->colour = 'r';
                RightSide(kh);
            }
        }
        else
        {
            if (kh->left != NULL)
            {
                a = kh->left;
                if (a->colour == 'r')
                {
                    akr->parent->colour = 'b';
                    a->colour = 'b';
                    kh->colour = 'r';
                    akr = kh;
                }
            }
            else
            {
                if (akr->parent->left == akr)
                {
                    akr = akr->parent;
                    RightSide(akr);
                }
                akr->parent->colour = 'b';
                kh->colour = 'r';
                LeftSide(kh);
            }
        }
        Tree_Root->colour = 'b';
    }
}

void  Red_Black_Tree::Delete()
{
    if (Tree_Root == NULL)
    {
        cout << "\nTree is Empty.";
        return;
    }
    int num;
    cout << "\nEnter the Key of the Node to be Deleted: ";
    cin >> num;
    Node* kha;
    kha = Tree_Root;
    Node* m = NULL;
    Node* n = NULL;
    int found = 0;
    while (kha != NULL && found == 0)
    {
        if (kha->number == num)
            found = 1;
        if (found == 0)
        {
            if (kha->number <num)
                kha = kha->right;
            else
                kha = kha->left;
        }
    }
    if (found == 0)
    {
        cout << "\nElement Not Found.";
        return;
    }
    else
    {
        cout << "\nDeleted Element: " << kha->number;
        cout << "\nColour: ";
        if (kha->colour == 'b')
            cout << "Black\n";
        else
            cout << "Red\n";

        if (kha->parent != NULL)
            cout << "\nParent: " <<kha->parent->number;
        else
            cout << "\nThere is no Parent of the Node.  ";
        if (kha->right != NULL)
            cout << "\nRight Child: " << kha->right->number;
        else
            cout << "\nThere is no Right Child of the Node.  ";
        if (kha->left != NULL)
            cout << "\nLeft Child: " << kha->left->number;
        else
            cout << "\nThere is No Left Child of the Node.  ";
        cout << "\nNode has been Deleted.";
        if (kha->left == NULL || kha->right == NULL)
            m = kha;
        else
            m =successor(kha);
        if (m->left != NULL)
            n = m->left;
        else
        {
            if (m->right != NULL)
                n = m->right;
            else
                n = NULL;
        }
        if (n != NULL)
            n->parent = m->parent;
        if (m->parent == NULL)
            Tree_Root = n;
        else
        {
            if (m == m->parent->left)
                m->parent->left = n;
            else
             m->parent->right = n;
        }
        if (m != kha)
        {
            kha->colour = m->colour;
            kha->number=m->number;
        }
        if (m->colour == 'b')
            delfix(n);
    }
}

void  Red_Black_Tree::delfix(Node* A)
{
    Node* temp;
    while (A != Tree_Root && A->colour == 'b')
    {
        if (A->parent->left == A)
        {
            temp = A->parent->right;
            if (temp->colour == 'r')
            {
                temp->colour = 'b';
                A->parent->colour = 'r';
                LeftSide(A->parent);
                temp = A->parent->right;
            }
            if (temp->right->colour == 'b' && temp->left->colour == 'b')
            {
                temp->colour = 'r';
               A = A->parent;
            }
            else
            {
                if (temp->right->colour == 'b')
                {
                    temp->left->colour == 'b';
                    temp->colour = 'r';
                    RightSide(temp);
                    temp = A->parent->right;
                }
                temp->colour = A->parent->colour;
                A->parent->colour = 'b';
                temp->right->colour = 'b';
                LeftSide(A->parent);
                A = Tree_Root;
            }
        }
        else
        {
            temp = A->parent->left;
            if (temp->colour == 'r')
            {
                temp->colour = 'b';
                A->parent->colour = 'r';
                RightSide(A->parent);
                temp = A->parent->left;
            }
            if (temp->left->colour == 'b' && temp->right->colour == 'b')
            {
                temp->colour = 'r';
                A= A->parent;
            }
            else
            {
                if (temp->left->colour == 'b')
                {
                    temp->right->colour = 'b';
                    temp->colour = 'r';
                    LeftSide(temp);
                    temp = A->parent->left;
                }
                temp->colour = A->parent->colour;
                A->parent->colour = 'b';
                temp->left->colour = 'b';
                RightSide(A->parent);
                A = Tree_Root;
            }
        }
        A->colour = 'b';
        Tree_Root->colour = 'b';
    }
}

void  Red_Black_Tree::LeftSide(Node* A)
{
    if (A->right == NULL)
        return;
    else
    {
        Node* K = A->right;
        if (K->left != NULL)
        {
            A->right = K->left;
            K->left->parent= A;
        }
        else
            A->right = NULL;
        if (A->parent != NULL)
            K->parent = A->parent;
        if (A->parent == NULL)
            Tree_Root = K;
        else
        {
            if (A == A->parent->left)
                A->parent->left = K;
            else
                A->parent->right = K;
        }
        K->left = A;
        A->parent = K;
    }
}
void  Red_Black_Tree::RightSide(Node* A)
{
    if (A->left == NULL)
        return;
    else
    {
        Node* K = A->left;
        if (K->right != NULL)
        {
            A->left = K->right;
            K->right->parent = A;
        }
        else
            A->left = NULL;
        if (A->parent != NULL)
            K->parent= A->parent;
        if (A->parent== NULL)
            Tree_Root = K;
        else
        {
            if (A == A->parent->left)
                A->parent->left = K;
            else
                A->parent->right = K;
        }
        K->right = A;
        A->parent= K;
    }
}

Node*  Red_Black_Tree::successor(Node* A)
{
    Node* K = NULL;
    if (A->left != NULL)
    {
        K = A->left;
        while (K->right != NULL)
            K = K->right;
    }
    else
    {
        K = A->right;
        while (K->left != NULL)
            K = K->left;
    }
    return K;
}

void  Red_Black_Tree::show()
{
    DISPLAY(Tree_Root);
}
void  Red_Black_Tree::DISPLAY(Node* A)
{
    if (Tree_Root == NULL)
    {
        cout << "\nEmpty Tree.";
        return;
    }
    if (A != NULL)
    {
        cout << "\n\t NODE: ";
        cout << "\n Key: " << A->number;
        cout << "\n Colour: ";
        if (A->colour == 'b')
            cout << "Black";
        else
            cout << "Red";
        if (A->parent != NULL)
            cout << "\n Parent: " << A->parent->number;
        else
            cout << "\n No Parent Node.  ";
        if (A->right != NULL)
            cout << "\n Right Child: " << A->right->number;
        else
            cout << "\nNo Child Node.  ";
        if (A->left != NULL)
            cout << "\n Left Child: " << A->left->number;
        else
            cout << "\nNo Left Child Node.  ";
        cout << endl;
        if (A->left)
        {
            cout << "\n\nLeft:\n";
            DISPLAY(A->left);
        }
        if (A->right)
        {
            cout << "\n\nRight:\n";
            DISPLAY(A->right);
        }
    }
}
void  Red_Black_Tree::SEARCHING()
{
    if (Tree_Root == NULL)
    {
        cout << "\nTree is Empty \n";
        return;
    }
    int num;
    cout << "\nEnter value Searched: ";
    cin >> num;
    Node* k = Tree_Root;
    int found = 0;
    while (k != NULL && found == 0)
    {
        if (k->number == num)
            found = 1;
        if (found == 0)
        {
            if (k->number < num)
                k = k->right;
            else
                k= k->left;
        }
    }
    if (found == 0)
        cout << "\nTREE IS EMPTY.";
    else
    {
        cout << "\n\t FOUND NODE: ";
        cout << "\n DATA : " << k->number;
        cout << "\n Colour: ";
        if (k->colour == 'b')
            cout << "Black";
        else
            cout << "Red";
        if (k->parent != NULL)
            cout << "\n Parent: " << k->parent->number;
        else
            cout << "\n no parent Node.  ";
        if (k->right != NULL)
            cout << "\n Right Child: " << k->right->number;
        else
            cout << "\n no right child   ";
        if (k->left != NULL)
            cout<< "\n Left Child: " << k->left->number;
        else
            cout<< "\nNo left child.  ";
        cout<<endl;

    }
}
int main()
{
	cout<<"<<<=======*  AKRAM       *==>>>"<<endl;
	cout<<"<<<=======*  ID=12167    *==>>>"<<endl;
	cout<<"<<<==* MAJOR ASSIGNMENT   ==>>>"<<endl;
	cout<<"<<<==*         OF        *==>>>"<<endl;
   cout <<"<<<==*   RED BLACK TREE   *==>>>"<<endl;
	cout<<"<<<===*    MANZIR IQBAL  * ==>>>"<<endl;

    int your;
     Red_Black_Tree TREE;
    while(true){
    
        cout << "\n 1. Inserting_Tree* ";
        cout << "\n 2. Display tree*";
        cout << "\n 3. Searching _Tree Element*";
        cout << "\n 4. Delte tree";
        cout << "\n 5. Exit() ";
        cout << "\nEnter Your Choice: ";
        cin >> your;
        switch (your)
        {
           case 1: TREE.INSERTION();
            cout<<"\nNode Inserted.\n";
            break;
           case 2: TREE.show();
            break;
          case 3: TREE.SEARCHING();
            break;
          case 4: TREE.Delete();
            break;
        case 5: exit(0);
            break;
        default: cout<<"\nEnter a Valid Choice.";
        }
        cout << endl;

    }
    return 1;
}
