#include<iostream>
using namespace std;
const int MAX = 100; 
struct Term { int row, col, val; }; 
class SparseMatrix{
     private: 
     Term data[MAX];
      int size;
       public: 
       // Read sparse matrix from user input
        void readSparse() 
     { int r, c, value, count = 0;
     cout << "Enter number of rows and columns: ";
     cin >> r >> c; 
     data[0].row = r; 
     data[0].col = c; 
     cout << "Enter matrix elements:\n"; 
     for (int i = 0; i < r; i++) 
     { 
     for (int j = 0; j < c; j++)
     { 
       cin >> value;
        if (value != 0) 
     {
        count++;
        data[count].row = i; 
         data[count].col = j; 
         data[count].val = value;
     } 
     }
             
     }
     data[0].val = count; 
     size = count + 1;
    } 
    // Display sparse matrix in triplet form 
    void displaySparse() { 
    cout << "Row\tCol\tVal\n"; 
    for (int i = 0; i < size; i++)
     { 
    cout << data[i].row << "\t" << data[i].col << "\t" << data[i].val << endl;
      }
   }
   // Transpose the sparse matrix 
  void transposeSparse(SparseMatrix &t)
   {
     t.data[0].row = data[0].col; 
     t.data[0].col = data[0].row;
     t.data[0].val = data[0].val;
     int k = 1;
     for (int i = 0; i < data[0].col; i++) 
        { 
        for (int j = 1; j < size; j++)
         { if (data[j].col == i) 
            {
             t.data[k].row = data[j].col;
             t.data[k].col = data[j].row;
             t.data[k].val = data[j].val;
             k++; 
            }
         }
        }
        t.size = size;
    }
    // Add two sparse matrices 
    void addSparse(SparseMatrix &b, SparseMatrix &sum) 
    {
     if (data[0].row != b.data[0].row || data[0].col != b.data[0].col)
      { cout << "Addition not possible. Dimensions don't match.\n";
        return;
     }
     sum.data[0].row = data[0].row;
     sum.data[0].col = data[0].col;
     int i = 1, j = 1, k = 1;
     while (i < size && j < b.size)
     {
     if (data[i].row == b.data[j].row && data[i].col == b.data[j].col)
      {
      sum.data[k] = data[i];
      sum.data[k].val = data[i].val + b.data[j].val; 
      i++;
       j++;
        k++;
     }
      else if (data[i].row < b.data[j].row || (data[i].row == b.data[j].row && data[i].col < b.data[j].col))
       { 
        sum.data[k++] = data[i++];
     }
      else 
      
      { 
        sum.data[k++] = b.data[j++];
     }
     }
      while (i < size) sum.data[k++] = data[i++]; 
      while (j < b.size) sum.data[k++] = b.data[j++]; 
      sum.data[0].val = k - 1; 
      sum.size = k;
     } 
     // Getter for size 
     int getSize()
      { 
        return size;
     } 
    };
     int main()
      { 
       SparseMatrix A, B, sum, trans; 
       cout << "Enter first sparse matrix:\n";
       A.readSparse();
       cout << "\nEnter second sparse matrix:\n";
       B.readSparse();
       cout << "\nSparse Matrix A:\n"; A.displaySparse();
       cout << "\nSparse Matrix B:\n"; B.displaySparse();
        // Addition
        A.addSparse(B, sum);
         cout << "\nAddition Result:\n"; 
         sum.displaySparse();
       // Transpose
        A.transposeSparse(trans); 
         cout << "\nTranspose of Matrix A:\n";
       trans.displaySparse();
        B.transposeSparse(trans); 
         cout << "\nTranspose of Matrix B:\n";
       trans.displaySparse();
        return 0;
         }