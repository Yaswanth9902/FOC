#include<stdio.h>
#define ROW 3
#define COL 3
int main(){
   int i, j, mat[ROW][COL], trans[COL][ROW];
   printf("Enter matrix: ");
   for(i = 0; i < ROW; i++){
      for(j = 0; j < COL; j++){
         scanf("%d", &mat[i][j]);
      }
   }

   for(i = 0; i < ROW; i++){
      for(j = 0; j < COL; j++){
         trans[j][i] = mat[i][j];
      }
   }
   printf("Transpose matrix:\n");
   
   for(i = 0; i < COL; i++){
      for(j = 0; j < ROW; j++){
         printf("%d",trans[i][j]);
      }
      printf("\n");
   }
   return 0;
}
