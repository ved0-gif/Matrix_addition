#include <stdio.h>

// Function to take input values for Matrix 1 and Matrix 2
void matrix(int m,int n,int p,int q,int mat1[m][n],int mat2[p][q]);

// Function to print Matrix 1, Matrix 2, and their sum matrix
void print_mat(int m,int n,int p,int q,int mat1[m][n],int mat2[p][q],int mat3[m][n]);

// Function to add Matrix 1 and Matrix 2 and store the result in Matrix 3
void mat_add(int m,int n,int p,int q,int mat1[m][n],int mat2[p][q],int mat3[m][n]);
3
int main(){
   int m,n;
   int p,q;

   // Inform user that matrix addition requires same dimensions
   printf("The dimension of two matrices must be same!");

   // Read dimensions of first matrix
   printf("Enter the dimension of first matrix mxn: ");
   scanf("%d %d",&m,&n);

   // Read dimensions of second matrix
   printf("Enter the dimension of second matrix pxq: ");
   scanf("%d %d",&p,&q);

   // Check whether matrix addition is possible
   if(m != p || n != q){
      printf("Dimension of mtrices are not same addition not possible!");
   }
   else{
      // Declare matrices
      int mat1[m][n];
      int mat2[p][q];
      int mat3[m][n];

      // Take input for both matrices
      matrix(m , n , p , q , mat1 , mat2);

      // Add matrix 1 and matrix 2
      mat_add(m , n , p , q , mat1 , mat2, mat3);

      // Print matrices and their sum
      print_mat(m , n , p , q , mat1 , mat2, mat3);
   }

   return 0;
}

void matrix(int m,int n,int p,int q,int mat1[m][n],int mat2[p][q]){

   // Input elements of matrix 1
   for(int i = 0; i < m; i++){
      for(int j = 0; j < n; j++){
         printf("Enter the elements of matrix 1(%d,%d): ",i,j);
         scanf("%d",&mat1[i][j]);
      }
   }

   // Input elements of matrix 2
   for(int i = 0; i < p; i++){
      for(int j = 0; j < q; j++){
         printf("Enter the elements of matrix 2(%d,%d): ",i,j);
         scanf("%d",&mat2[i][j]);
      }
   }
}

void mat_add(int m,int n,int p,int q,int mat1[m][n],int mat2[p][q],int mat3[m][n]){

   // Add corresponding elements of matrix 1 and matrix 2
   for (int i = 0; i < m; i++){
      for (int j = 0; j < n; j++){
         mat3[i][j] = mat1[i][j] + mat2[i][j];
      }
   }
}

void print_mat(int m,int n,int p,int q,int mat1[m][n],int mat2[p][q],int mat3[m][n]){

   // Print matrix 1
   printf("\n Matrix 1\n");
   for(int i = 0; i < m; i++){
      for(int j = 0;j < n; j++){
         printf("%d\t",mat1[i][j]);
      }
      printf("\n");
   }

   // Print matrix 2
   printf("\n Matrix 2\n");
   for(int i = 0; i < p; i++){
      for(int j = 0; j < q; j++){
         printf("%d\t",mat2[i][j]);
      }
      printf("\n");
   }

   // Print sum of matrix 1 and matrix 2
   printf("\n Sum of matrix 1 and matrix 2\n");
   for(int i = 0; i < m; i++){
      for(int j = 0; j < n; j++){
         printf("%d\t",mat3[i][j]);
      }
      printf("\n");
   }
}