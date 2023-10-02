#include<stdio.h>
//#include<stdlib.h>
//#include <iostream>

//using namespace std;

//https://www.youtube.com/watch?v=5RhWr9wdFYI&list=PLrqNiweLEMonijPwsHckWX7fVbgT2jS3P
//https://www.youtube.com/watch?v=YRkQsH9G9fE


void matriz_unidimensional() {
   
   int matriz[2] = {1, 2};

    for (int i=0; i<2; i++) {
        printf("%d ", matriz[i]);
    }
}

void matriz_bidimensional() {
   
   //int matriz[2][2] = {1, 2, 3, 4};
    int matriz[2][2] = { {1, 2}, {3, 4} };

    for (int i=0; i<2; i++) {
       //printf("%d - ", i);
       for (int j=0; j<2; j++) {
          printf("%d ", matriz[i][j]);
       }
       printf("\n");
    }
}

void matriz_tridimensional() {
   
   // int matriz[2][2][2] = {1, 2, 3, 4, 5, 6, 7, 8 };  
   int matriz[2][2][2] = { { {1, 2}, 
                             {3, 4} },
                           { {5, 6}, 
                             {7, 8} } };

   printf("A posição oculta é %d \n", matriz[1][0][1]);                          

    for (int i=0; i<2; i++) {
       //printf("%d - ", i);
       for (int j=0; j<2; j++) {
          for (int K=0; K<2; K++) {
             printf("%d ", matriz[i][j][K]);
          }
          printf("\n");      
       }
       printf("\n");
    }
}

void matriz_tridimensional3x3() {

   //[l][c][p] l = linha; c=coluna ; p=profundiade
   //[3][3][3] 

  /*  int matriz[3][3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14,
                           15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27 }; */ 
 /*int matriz[3][3][3] = { { {1,   2,  3 }, 
                             {4,   5,  6 },   
                             {7,   8,  9 } },
                           { {10, 11, 12 }, 
                             {13, 14, 15 },
                             {16, 17, 18 } },
                           { {19, 20, 21 },
                             {22, 23, 24 },
                             {25, 26, 27 } } }; */
    int matriz[3][3][3];

    int cont = 1;
    for (int linha=0; linha<3; linha++) {
       for (int coluna=0; coluna<3; coluna++) {
          for (int profundidade=0; profundidade<3; profundidade++) {
             matriz[linha][coluna][profundidade] = cont;
             cont++;
          }
       }
    }

   printf("{ \n");
   for (int linha=0; linha<3; linha++) {
       printf("   { \n");
       for (int coluna=0; coluna<3; coluna++) {
           printf("      { ");
          for (int profundidade=0; profundidade<3; profundidade++) {
             //printf("[%d %d %d]  %d ", linha, coluna, profundidade, matriz[linha][coluna][profundidade]);
             printf("%d ", matriz[linha][coluna][profundidade]);        
          }
          printf("} \n");
       }      
       printf("   } \n");
    }
    printf("} \n");
   
    //cubo
   printf("A primeira posição oculta é %d \n", matriz[1][0][1]);                          
   printf("A segunda posição oculta é %d \n", matriz[1][0][2]);                          
   printf("A terceira posição oculta é %d \n", matriz[1][1][1]);                          
   printf("A quarta posição oculta é %d \n", matriz[1][1][2]); 
}

void matriz_quadridimensional() {

   //[l][c][p][g] l = linha; c=coluna; p=profundiade; g=grupo
   //[2][2][2][2] 

 //   int matriz[2][2][2][2] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 };  
 /*int matriz[2][2][2][2] = {
                              { 
                                 { 
                                    { 1 2 }, 
                                    { 3 4 } 
                                 }, 
                                 { 
                                    { 5 6 },
                                    { 7 8 } 
                                 } 
                              } 
                              { 
                                 { 
                                    { 9 10 }, 
                                    { 11 12 } 
                                 } 
                                 { 
                                    { 13 14 },
                                    { 15 16 } 
                                 } 
                              } 
                           } */ 
 
    int matriz[2][2][2][2];

    int cont = 1;
    for (int linha=0; linha<2; linha++) {
       for (int coluna=0; coluna<2; coluna++) {
          for (int profundidade=0; profundidade<2; profundidade++) {
             for (int grupo=0; grupo<2; grupo++) {
               matriz[linha][coluna][profundidade][grupo] = cont;
               cont++;
             }
          }
       }
    } 

   printf("{ \n");
   for (int linha=0; linha<2; linha++) {
       printf("   { \n");
       for (int coluna=0; coluna<2; coluna++) {
          printf("      { \n");
          for (int profundidade=0; profundidade<2; profundidade++) {
             printf("         { ");
             for (int grupo=0; grupo<2; grupo++) {
                printf("%d ", matriz[linha][coluna][profundidade][grupo]);   
             }
             printf("} \n");
          }
          printf("      } \n");
       }      
       printf("   } \n");
    }
    printf("} \n");
    
    printf("%d \n", matriz[1][1][0][1]);   

    printf("Primeira posicao oculta %d \n", matriz[1][0][1][0]); //L C P G 
    printf("Segunda posicao oculta  %d \n", matriz[1][0][0][1]);
    printf("Terceira posicao oculta %d \n", matriz[1][0][1][1]);
     
}


void matriz_pentadimensional() {

   //[l][c][p][g] l = linha; c=coluna; p=profundiade; a=andar; g=grupo;
   //[2][2][2][2][2] 

   //int matriz[2][2][2][2][2] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32};

   /* int matriz[2][2][2][2][2] = { 
                                    { 
                                       { 
                                          { 
                                             { 1, 2 }, 
                                             { 3, 4 } 
                                          }, 
                                          { 
                                             { 5, 6 }, 
                                             { 7, 8 } 
                                          } 
                                       }, 
                                       { 
                                          { 
                                             { 9, 10 }, 
                                             { 11, 12 } 
                                          }, 
                                          { 
                                             { 13, 14 },
                                             { 15, 16 } 
                                          } 
                                       }, 
                                    }, 
                                    { 
                                       { 
                                          { 
                                             { 17, 18 }, 
                                             { 19, 20 } 
                                          }, 
                                          { 
                                             { 21, 22 },
                                             { 23, 24 } 
                                          } 
                                       }, 
                                       { 
                                          { 
                                             { 25, 26 },
                                             { 27, 28 } 
                                          }, 
                                          { 
                                             { 29, 30 }, 
                                             { 31, 32 } 
                                          } 
                                       } 
                                    } 
                                 };  */      
                          
 
    int matriz[2][2][2][2][2];

    int cont = 1;
    for (int linha=0; linha<2; linha++) {
       for (int coluna=0; coluna<2; coluna++) {
          for (int profundidade=0; profundidade<2; profundidade++) {
             for (int andar = 0; andar<2; andar++) {
               for (int grupo=0; grupo<2; grupo++) {
                  matriz[linha][coluna][profundidade][andar][grupo] = cont;
                  cont++;
               }
             }   
          }
       }
    } 

   printf("{ \n");
   for (int linha=0; linha<2; linha++) {
       printf("   { \n");
       for (int coluna=0; coluna<2; coluna++) {
          printf("      { \n");
          for (int profundidade=0; profundidade<2; profundidade++) {
            printf("         { \n");
            for (int andar = 0; andar<2; andar++) {
               printf("            { ");
               for (int grupo=0; grupo<2; grupo++) {
                  printf("%d ", matriz[linha][coluna][profundidade][andar][grupo]);   
               }
               printf("} \n");
            }
            printf("         } \n");  
          }
          printf("      } \n");
       }      
       printf("   } \n");
    }
    printf("} \n");
    
    printf("%d \n", matriz[1][1][0][1][1]);   

  /*  printf("Primeira posicao oculta %d \n", matriz[1][0][1][0]); //L C P A G 
    printf("Segunda posicao oculta  %d \n", matriz[1][0][0][1]);
    printf("Terceira posicao oculta %d \n", matriz[1][0][1][1]);*/


}

void matriz_hexadimensional() {

   //[l][c][p][g] l = linha; c=coluna; p=profundiade; f=fileira; a=andar; g=grupo;
   //[2][2][2][2][2][2] 

  //int matriz[2][2][2][2][2][2] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64};

   /* int matriz[2][2][2][2][2][2] = { 
                                       { 
                                          { 
                                             { 
                                                { 
                                                   { 1, 2 }, 
                                                   { 3, 4 } 
                                                }, 
                                                { 
                                                   { 5, 6 }, 
                                                   { 7, 8 } 
                                                } 
                                             }, 
                                             { 
                                                { 
                                                   { 9, 10 }, 
                                                   { 11, 12 } 
                                                }, 
                                                { 
                                                   { 13, 14 }, 
                                                   { 15, 16 } 
                                                } 
                                             } 
                                          }, 
                                          { 
                                             { 
                                                { 
                                                   { 17, 18 }, 
                                                   { 19, 20 } 
                                                }, 
                                                { 
                                                   { 21, 22 }, 
                                                   { 23, 24 } 
                                                } 
                                             }, 
                                             { 
                                                { 
                                                   { 25, 26 }, 
                                                   { 27, 28 } 
                                                }, 
                                                { 
                                                   { 29, 30 }, 
                                                   { 31, 32 } 
                                                } 
                                             } 
                                          } 
                                       }, 
                                       { 
                                          { 
                                             { 
                                                { 
                                                   { 33, 34 }, 
                                                   { 35, 36 } 
                                                }, 
                                                { 
                                                   { 37, 38 }, 
                                                   { 39, 40 } 
                                                } 
                                             }, 
                                             { 
                                                { 
                                                   { 41, 42 }, 
                                                   { 43, 44 } 
                                                }, 
                                                { 
                                                   { 45, 46 }, 
                                                   { 47, 48 } 
                                                } 
                                             } 
                                          }, 
                                          { 
                                             { 
                                                { 
                                                   { 49, 50 }, 
                                                   { 51, 52 } 
                                                }, 
                                                { 
                                                   { 53, 54 }, 
                                                   { 55, 56 } 
                                                } 
                                             }, 
                                             { 
                                                { 
                                                   { 57, 58 }, 
                                                   { 59, 60 } 
                                                }, 
                                                { 
                                                   { 61, 62 }, 
                                                   { 63, 64 } 
                                                } 
                                             } 
                                          } 
                                       } 
                                    };    */   
                          
 
   int matriz[2][2][2][2][2][2]; // L C P F A G

    int cont = 1;
    for (int linha=0; linha<2; linha++) {
       for (int coluna=0; coluna<2; coluna++) {
          for (int profundidade=0; profundidade<2; profundidade++) {
            for (int fileira=0; fileira<2; fileira++) { 
               for (int andar = 0; andar<2; andar++) {
                  for (int grupo=0; grupo<2; grupo++) {
                     matriz[linha][coluna][profundidade][fileira][andar][grupo] = cont;
                     cont++;
                  }
               }
            }
          }
       }
    }

   printf("{ \n");
   for (int linha=0; linha<2; linha++) {
       printf("   { \n");
       for (int coluna=0; coluna<2; coluna++) {
          printf("      { \n");
          for (int profundidade=0; profundidade<2; profundidade++) {
            printf("         { \n");              
            for(int fileira=0; fileira<2; fileira++) { 
               printf("            { \n");
               for (int andar=0; andar<2; andar++) {
                  printf("               { ");
                  for (int grupo=0; grupo<2; grupo++) {
                     printf("%d ", matriz[linha][coluna][profundidade][fileira][andar][grupo]);   
                  }
                  printf("} \n");
               }
               printf("            } \n");
            } 
            printf("         } \n");            
          }
          printf("      } \n");
       }      
       printf("   } \n");
    }
    printf("} \n");
    
   printf("%d \n", matriz[0][0][1][1][1][1]);   

  /*  printf("Primeira posicao oculta %d \n", matriz[1][0][1][0]); //L C P A G 
    printf("Segunda posicao oculta  %d \n", matriz[1][0][0][1]);
    printf("Terceira posicao oculta %d \n", matriz[1][0][1][1]);*/


}
 

int main() {

    //matriz_unidimensional();
    //matriz_bidimensional();
    //matriz_tridimensional();
    //matriz_tridimensional3x3();
    matriz_quadridimensional();
    //matriz_pentadimensional();
    //matriz_hexadimensional();
    

    return 0;

}