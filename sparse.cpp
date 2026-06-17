#include <iostream>
using namespace std;
struct Node
{
    int row, col, val;
    Node *next;
};
Node *createNode(int r, int c, int v)
{
    Node *temp = new Node;
    temp->row = r;
    temp->col = c;
    temp->val = v;
    temp->next = NULL;
    return temp;
}
void insert(Node *&head, int r, int c, int v)
{
    Node *newNode = createNode(r, c, v);
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}
void display(Node *head)
{
    while (head != NULL)
    {
        cout << head->row << "\t" << head->col << "\t" << head->val << endl;
        head = head->next;
    }
}
Node *addsparse(Node *A, Node *B)
{
    Node *result = NULL;
    while (A && B)
    {
        if (A->row == B->row && A->col == B->col)
        {
            int sum = A->val + B->val;
            if (sum != 0)
            {
                insert(result, A->row, A->col, sum);
                A = A->next;
                B = B->next;
            }
        }
        else if (A->row < B->row || (A->row == B->row && A->col < B->col))
        {
            insert(result, A->row, A->col, A->val);
            A = A->next;
        }
        else
        {
            insert(result, B->row, B->col, B->val);
            B = B->next;
        }
    }
    while (A)
    {
        insert(result, A->row, A->col, A->val);
        A = A->next;
    }
    while (B)
    {
        insert(result, B->row, B->col, B->val);
        B = B->next;
    }
    return result;
}
Node *transpose(Node *head)
{
    Node *trans = NULL;
    for (Node *temp = head; temp != NULL; temp = temp->next)
    {
        insert(trans, temp->row, temp->col, temp->val);
    }
    return trans;
}
int main()
{
    Node *A = NULL, *B = NULL, *sum = NULL, *trans = NULL;
    int r, c, val, n;
    cout << "Enter number of non-zero elements in Matrix A: ";

    cin >> n;

    cout << "Enter (row col value): <<endl";

    for (int i = 0; i < n; i++)

    {

        cin >> r >> c >> val;

        insert(A, r, c, val);
    }

    cout << "Enter number of non-zero elements in Matrix B: ";

    cin >> n;

    cout << "Enter (row col value): " << endl;

    for (int i = 0; i < n; i++)

    {
        cin >> r >> c >> val;

        insert(B, r, c, val);
    }

    cout << endl
         << "Matrix A: " << endl;

    display(A);

    cout << endl
         << "Matrix B: " << endl;

    display(B);

    sum = addsparse(A, B);

    cout << endl
         << "Sum of Sparse Matrices: " << endl;

    display(sum);

    trans = transpose(A);

    cout << endl
         << "Transpose of Matrix A: " << endl;

    display(trans);
    trans = transpose(B);

    cout << endl
         << "Transpose of Matrix B: " << endl;

    display(trans);

    return 0;
}