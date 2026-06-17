
#include <iostream>
using namespace std;
 
const int MAX = 100;
 
struct Term {
     int x_exp, y_exp;
     int coeff;
 };
 
void inputPolynomial(Term poly[], int &n) {
     cout << "Enter number of terms: ";
     cin >> n;
     for (int i = 0; i < n; i++) {
         cout << "Enter term " << i + 1 << " (x_exp y_exp coeff): ";
         cin >> poly[i].x_exp >> poly[i].y_exp >> poly[i].coeff;
     }
 }
 
void displayPolynomial(Term poly[], int n) {
     for (int i = 0; i < n; i++) {
         if (i > 0) {
             if (poly[i].coeff > 0) cout << " + ";
             else if (poly[i].coeff < 0) cout << " - ";
         } else if (poly[i].coeff < 0) {
             cout << "-";
         }
         
        int abs_coeff = abs(poly[i].coeff);
         if (abs_coeff != 1 || (poly[i].x_exp == 0 && poly[i].y_exp == 0)) {
             cout << abs_coeff;
         }
         
        if (poly[i].x_exp > 0) {
             cout << "x";
             if (poly[i].x_exp > 1) cout << "^" << poly[i].x_exp;
         }
         
        if (poly[i].y_exp > 0) {
             cout << "y";
             if (poly[i].y_exp > 1) cout << "^" << poly[i].y_exp;
         }
         
        if (poly[i].x_exp == 0 && poly[i].y_exp == 0 && abs_coeff == 1) {
             cout << "1";
         }
     }
     cout << endl;
 }
 
bool compareTerms(Term a, Term b) {
     return (a.x_exp == b.x_exp) && (a.y_exp == b.y_exp);
 }
 
void addPolynomials(Term poly1[], int n1, Term poly2[], int n2, Term result[], int &n3) {
     int k = 0;
     bool used[MAX] = {false};
 
    for (int i = 0; i < n1; i++) {
         bool found = false;
         for (int j = 0; j < n2; j++) {
             if (!used[j] && compareTerms(poly1[i], poly2[j])) {
                 result[k].x_exp = poly1[i].x_exp;
                 result[k].y_exp = poly1[i].y_exp;
                 result[k].coeff = poly1[i].coeff + poly2[j].coeff;
                 used[j] = true;
                 found = true;
                 k++;
                 break;
             }
         }
         if (!found) {
             result[k++] = poly1[i];
         }
     }
 
    for (int j = 0; j < n2; j++) {
         if (!used[j]) {
             result[k++] = poly2[j];
         }
     }
 
    n3 = k;
 }
 
int main() {
     Term poly1[MAX], poly2[MAX], result[MAX];
     int n1, n2, n3;
     
    cout << "Enter first polynomial:" << endl;
     inputPolynomial(poly1, n1);
     
    cout << "Enter second polynomial:" << endl;
     inputPolynomial(poly2, n2);
     
    cout << "\nPolynomial 1: ";
     displayPolynomial(poly1, n1);
     
    cout << "Polynomial 2: ";
     displayPolynomial(poly2, n2);
     
    addPolynomials(poly1, n1, poly2, n2, result, n3);
     
    cout << "\nSum of Polynomials: ";
     displayPolynomial(result, n3);
     
    return 0;
 }
