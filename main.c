#include <stdio.h>
#include <string.h>
#include <math.h>
#include <curses.h>
#include <stdlib.h>


float ResistorA, ResistorB,  ResistorC, ResistorD,  ResistorE,  ResistorF,  Receptor,  Gerador, TensaoPrimariaA, Numero_Espiras1A, Numero_Espiras2A, CapacitanciaA, Resistencia_CargaA, FrequenciaA, TensaoPrimariaB, Numero_Espiras1B, Numero_Espiras2B, CapacitanciaB, Resistencia_CargaB, FrequenciaB, TensaoPrimariaC, Numero_Espiras1C, Numero_Espiras2C, CapacitanciaC, Resistencia_CargaC, FrequenciaC;
int numero;

int main (){
    
    int Loop=1;
    
    while ( Loop == 1){
        system("clear");
        printf("  Circuitos \n\n");
        printf("  1 - Circuito elétrico composto de seis resistores, um gerador e um receptor. \n");
        printf("  2 - Circuito elétrico com  filtro capacitivo (Meia Onda).\n");
        printf("  3 - Circuito elétrico com transformador Center Tap.\n");
        printf("  4 - Circuito elétrico com retificador em ponte e  filtro capacitivo.\n");
        printf("\n  Escolha a opcao desejada |  ");
        scanf("%d", &numero);
        switch (numero){
            case 1:
                printf("\n  Informe os dados solicitados: \n\n");
                void Diagrama_A (void);
                Diagrama_A();
                
                void EntradaValores_A (void);
                EntradaValores_A();
                
                void CalculoCircuito_A (void);
                CalculoCircuito_A();
                
                
                break;
                
            case 2:
                printf("  Informe os dados solicitados: \n\n");
                void Diagrama_B (void);
                Diagrama_B();
                
                void EntradaValores_B (void);
                EntradaValores_B();
                
                void CalculoCircuito_B (void);
                CalculoCircuito_B();
               
                
                break;
                
            case 3:
                printf("  Informe os dados solicitados: \n\n");
                void Diagrama_C (void);
                Diagrama_C();
                
                void EntradaValores_C (void);
                EntradaValores_C();
                
                void CalculoCircuito_C (void);
                CalculoCircuito_C();
               
                
                break;
                
            case 4:
                printf("  Informe os dados solicitados: \n\n");
                void Diagrama_D (void);
                Diagrama_D();
                
                void EntradaValores_D (void);
                EntradaValores_D();
                
                void CalculoCircuito_D (void);
                CalculoCircuito_D();
                
                break;
                
            default:
                printf("  Opção invalida \n");
                
                
        }
        
        printf("\n Pressione ENTER para voltar ao menu ");
        getchar();
        
        
    }

}

  void Diagrama_A (void){

            printf ("    ----------------| | | |----------------------------| | | |--------------   \n");
            printf ("    |              RESISTOR A           |             RESISTOR B           |   \n");
            printf ("    |                                   |                                  |   \n");
            printf ("    |                                   |                                ----- \n");
            printf ("    |                                   |                              RECEPTOR\n");
            printf ("    |                                   |                                 ---  \n");
            printf ("    |                                   |                                  |   \n");
            printf ("    |                                   |                                  |   \n");
            printf ("    |                                  ---                                 |   \n");
            printf ("  -----                                --- RESISTOR F                      |   \n");
            printf ("  GERADOR                              ---                                 |   \n");
            printf ("   ---                                 ---                                 |   \n");
            printf ("    |                                   |                                  |   \n");
            printf ("    |                                   |                                  |   \n");
            printf ("   ---                                  |                                  |   \n");
            printf ("   --- RESISTOR E                       |                                  |   \n");
            printf ("   ---                                  |                                  |   \n");
            printf ("   ---                                  |                                  |   \n");
            printf ("    |                                   |                                  |   \n");
            printf ("    |             RESISTOR D            |             RESISTOR C           |   \n");
            printf ("    ---------------| | | |-----------------------------| | | |--------------   \n\n");
      
            
   
}


  void EntradaValores_A (void){
            
      
      float Retorno = -1;
      char Palavra;
      
      do{
           printf ("  Digite  o valor da resistência do resistor A |  ");
           Retorno = scanf ("%f", &ResistorA);
           if (Retorno == 0){
            printf ("\n\n  *********************************************\n");
            printf ("  Entrada inválida, por favor digite um número \n");
            printf ("  *********************************************\n\n");
              
          }
           do { Palavra = getchar ();
           }
          while (Palavra != '\n');
      }while (Retorno == 0);
      do{
           printf ("  Digite  o valor da resistência do resistor B |  ");
           Retorno = scanf ("%f", &ResistorB);
          if (Retorno == 0){
              printf ("\n\n  *********************************************\n");
              printf ("  Entrada inválida, por favor digite um número \n");
              printf ("  *********************************************\n\n");
              
          }
           do {
              
              Palavra = getchar ();
          }while (Palavra != '\n');
      }while (Retorno == 0);
      do{
           printf ("  Digite  o valor da resistência do resistor C |  ");
           Retorno = scanf ("%f", &ResistorC);
           if (Retorno == 0){
               printf ("\n\n  *********************************************\n");
               printf ("  Entrada inválida, por favor digite um número \n");
               printf ("  *********************************************\n\n");
              
          }
           do {
              
              Palavra = getchar ();
          }while (Palavra != '\n');
      }while (Retorno == 0);
      do{
           printf ("  Digite  o valor da resistência do resistor D |  ");
           Retorno = scanf ("%f", &ResistorD);
           if (Retorno == 0){
               printf ("\n\n  *********************************************\n");
               printf ("  Entrada inválida, por favor digite um número \n");
               printf ("  *********************************************\n\n");
              
          }
           do {
              
              Palavra = getchar ();
          }while (Palavra != '\n');
      }while (Retorno == 0);
      do{
           printf ("  Digite  o valor da resistência do resistor E |  ");
           Retorno = scanf ("%f", &ResistorE);
          if (Retorno == 0){
              printf ("\n\n  *********************************************\n");
              printf ("  Entrada inválida, por favor digite um número \n");
              printf ("  *********************************************\n\n");
              
          }
           do {
              
              Palavra = getchar ();
          }while (Palavra != '\n');
      }while (Retorno == 0);
      do{
           printf ("  Digite  o valor da resistência do resistor F |  ");
           Retorno = scanf ("%f", &ResistorF);
           if (Retorno == 0){
               printf ("\n\n  *********************************************\n");
               printf ("  Entrada inválida, por favor digite um número \n");
               printf ("  *********************************************\n\n");
              
          }
           do {
              
              Palavra = getchar ();
          }while (Palavra != '\n');
      }while (Retorno == 0);
      do{
           printf ("  Digite  a tensão do Gerador                  |  ");
           Retorno = scanf ("%f", &Gerador);
           if (Retorno == 0){
               printf ("\n\n  *********************************************\n");
               printf ("  Entrada inválida, por favor digite um número \n");
               printf ("  *********************************************\n\n");
              
          }
           do {
              
              Palavra = getchar ();
          }while (Palavra != '\n');
      }while (Retorno == 0);
      do{
           printf ("  Digite  a tensão do Receptor                 |  ");
           Retorno = scanf ("%f", &Receptor);
           if (Retorno == 0){
               printf ("\n\n  *********************************************\n");
               printf ("  Entrada inválida, por favor digite um número \n");
               printf ("  *********************************************\n\n");
              
          }
           do {
              
              Palavra = getchar ();
          }while (Palavra != '\n');
      }while (Retorno == 0);
              
}
    
  void CalculoCircuito_A (void){
       
            float Somador_4R = ResistorA+ResistorD+ResistorE+ResistorF;
            float Somador_3R = ResistorB+ResistorC+ResistorF;
   

            float Corrente_B =(ResistorF*Gerador-Somador_4R*Receptor)/(ResistorF*ResistorF-Somador_3R*Somador_4R);
            float  Corrente_A = (Gerador-ResistorF*Corrente_B)/Somador_4R;
            float  Corrente_C = Corrente_A+Corrente_B;
             
            float Potencia_DissipadaA = ResistorA*pow (Corrente_A, 2);
            float Potencia_DissipadaB = ResistorB*pow (Corrente_B, 2);
            float Potencia_DissipadaC = ResistorC*pow (Corrente_B, 2);
            float Potencia_DissipadaD = ResistorD*pow (Corrente_A, 2);
            float Potencia_DissipadaE = ResistorE*pow (Corrente_A, 2);
            float Potencia_DissipadaF = ResistorF*pow (Corrente_C, 2);
            float Potencia_DissipadaG = 1*pow (Corrente_A, 2);
            float Potencia_DissipadaR = 1*pow (Corrente_B, 2);
            float Tensao_FornecidaG = Gerador - 1*Corrente_A;
            float Potencia_ProduzidaG = Tensao_FornecidaG*Corrente_A;
            
     
             printf ("\n                                                                            \n");
             printf ("  ----------------------------------------------------------------------------\n");
             printf ("  -------------------------------- RESULTADOS --------------------------------\n");
             printf ("  ----------------------------------------------------------------------------\n\n");
             printf ("\n  --------------- Corrente que Percorre os Resistores/Circuito ---------------\n");
             printf ("  ----------------------------------------------------------------------------\n\n");
             printf ("  Corrente que percorre o resitor A = %.2fA\n", Corrente_A);
             printf ("  Corrente que percorre o resitor B = %.2fA\n", Corrente_B);
             printf ("  Corrente que percorre o resitor C = %.2fA\n", Corrente_B);
             printf ("  Corrente que percorre o resitor D = %.2fA\n", Corrente_A);
             printf ("  Corrente que percorre o resitor E = %.2fA\n", Corrente_A);
             printf ("  Corrente que percorre o resitor F = %.2fA\n", Corrente_C);
             printf ("  Corrente total do Circuito        = %.2fA\n", Corrente_C);
             printf ("\n  ---------- Potência Dissipada/Produzida nos Elementos do Circuito ----------\n");
             printf ("  ----------------------------------------------------------------------------\n\n");
             printf ("  Potência dissipada no Resistor A = %.2fw\n", Potencia_DissipadaA);
             printf ("  Potência dissipada no resistor B = %.2fw\n", Potencia_DissipadaB);
             printf ("  Potência dissipada no resistor C = %.2fw\n", Potencia_DissipadaC);
             printf ("  Potência dissipada no resistor D = %.2fw\n", Potencia_DissipadaD);
             printf ("  Potência dissipada no resistor E = %.2fw\n", Potencia_DissipadaE);
             printf ("  Potência dissipada no resistor F = %.2fw\n", Potencia_DissipadaF);
             printf ("  Potência dissipada no Gerador    = %.2fw\n", Potencia_DissipadaG);
             printf ("  Potência dissipada no Receptor   = %.2fw\n", Potencia_DissipadaR);
             printf ("  Potência produzida pelo gerador  = %.2fw\n", Potencia_ProduzidaG);

     }


  void Diagrama_B (void){
    
      printf ("                              |--------------|>|-----|--------------|          \n");
      printf ("                              |             Diodo    |              |          \n");
      printf ("                              |                      |              |          \n");
      printf ("                              |                      |              |          \n");
      printf ("                              |                      |              |          \n");
      printf ("                              |                      |              |          \n");
      printf ("                              |                      |              |          \n");
      printf ("                              |                      |              |          \n");
      printf ("                              |                      |              |          \n");
      printf ("                              |                      |              |          \n");
      printf ("               |-------------| |                   -----            |          \n");
      printf ("               |           ( | |(                 Capacito          |          \n");
      printf ("               |            )| | )                 -----            |          \n");
      printf ("             |---|         ( | |(                    |              \\         \n");
      printf ("             | V |          )| | )                   |              /          \n");
      printf ("             |---|         ( | |(                    |        Carga \\         \n");
      printf ("               |            )| | )                   |              /          \n");
      printf ("               |           ( | |(                    |              \\         \n");
      printf ("               |-------------| |                     |              |          \n");
      printf ("               |              |                      |              |          \n");
      printf ("               |              |                      |              |          \n");
      printf ("               |              |                      |              |          \n");
      printf ("             -----            |                      |              |          \n");
      printf ("              ---             |----------------------|--------------|          \n");
      printf ("               -                                                    |          \n");
      printf ("                                                                    |          \n");
      printf ("                                                                  -----        \n");
      printf ("                                                                   ---         \n");
      printf ("                                                                    -        \n\n");
    
  }

 void EntradaValores_B (void){
     float Retorno = -1;
     char Palavra;
       
       do{
            printf ("\n  Digite a tensão no enrolamento primário              | ");
            Retorno = scanf ("%f", &TensaoPrimariaB);
           if (Retorno == 0){
               printf ("\n\n  *********************************************\n");
               printf ("  Entrada inválida, por favor digite um número \n");
               printf ("  *********************************************\n\n");
              
          }
            do {
               
               Palavra = getchar ();
           }while (Palavra != '\n');
       }while (Retorno == 0);
     do{
          printf ("  Digite número de espiras do enrolamento primário     | ");
          Retorno = scanf ("%f", &Numero_Espiras1B);
         if (Retorno == 0){
             printf ("\n\n  *********************************************\n");
             printf ("  Entrada inválida, por favor digite um número \n");
             printf ("  *********************************************\n\n");
            
        }
          do {
             
             Palavra = getchar ();
         }while (Palavra != '\n');
     }while (Retorno == 0);
     do{
          printf ("  Digite o número de espiras do enrolamento secundário | ");
          Retorno = scanf ("%f", &Numero_Espiras2B);
         if (Retorno == 0){
             printf ("\n\n  *********************************************\n");
             printf ("  Entrada inválida, por favor digite um número \n");
             printf ("  *********************************************\n\n");
            
        }
          do {
             
             Palavra = getchar ();
         }while (Palavra != '\n');
     }while (Retorno == 0);
     do{
          printf ("  Digite o valor do filtro capacitivo em µf            | ");
          Retorno = scanf ("%f", &CapacitanciaB);
         if (Retorno == 0){
             printf ("\n\n  *********************************************\n");
             printf ("  Entrada inválida, por favor digite um número \n");
             printf ("  *********************************************\n\n");
            
        }
          do {
             
             Palavra = getchar ();
         }while (Palavra != '\n');
     }while (Retorno == 0);
     do{
          printf ("  Digite o valor da resistência da carga em Kohms      | ");
          Retorno = scanf ("%f", &Resistencia_CargaB);
         if (Retorno == 0){
             printf ("\n\n  *********************************************\n");
             printf ("  Entrada inválida, por favor digite um número \n");
             printf ("  *********************************************\n\n");
            
        }
          do {
             
             Palavra = getchar ();
         }while (Palavra != '\n');
     }while (Retorno == 0);
     
     do{
          printf ("  Digite o valor da Frequência                         | ");
          Retorno = scanf ("%f", &FrequenciaB);
         if (Retorno == 0){
             printf ("\n\n  *********************************************\n");
             printf ("  Entrada inválida, por favor digite um número \n");
             printf ("  *********************************************\n\n");
            
        }
          do {
             
             Palavra = getchar ();
         }while (Palavra != '\n');
     }while (Retorno == 0);
    }

 void CalculoCircuito_B (void){
            float V2 = TensaoPrimariaB*Numero_Espiras2B/Numero_Espiras1B;
            float V2P = V2*sqrt(2);
            float VCP = V2P-0.7;
            
            float C = CapacitanciaB*0.000001;
            float RL = Resistencia_CargaB*1000;
            float i = VCP/RL;
            float Vond = i/(FrequenciaB*C);
            
            float Vminimo = VCP - Vond;
            float Vmedio = (Vminimo+VCP)/2;
            
            
             printf ("\n                                                                          \n");
             printf ("  ----------------------------------------------------------------------------\n");
             printf ("  -------------------------------- RESULTADO ---------------------------------\n");
             printf ("  ----------------------------------------------------------------------------\n\n");
             printf ("  Tensão de pico no capacitor = %.2f\n", VCP);
             printf ("  Tensão de Ripple            = %.2f\n", Vond );
             printf ("  Tensão  média na carga      = %.2f\n", Vmedio);
        }
          
  void Diagrama_C (void){
      
      
      printf ("                                                     |-----------|                                 \n");
      printf ("                                                     | S |||||||||                                 \n");
      printf ("                                                     |------|--|-|                                 \n");
      printf ("                                                            |  |                                   \n");
      printf ("                                  |-------------------------|  |                                   \n");
      printf ("                                  |                            |                                   \n");
      printf ("                                  |                            |                                   \n");
      printf ("                                |-o------|>|-------|-----------o--|                                \n");
      printf ("                                |       Diodo 1    |              |                                \n");
      printf ("                                |                  |              o---------|------------|         \n");
      printf ("                                |                  |              |         |            |         \n");
      printf ("                                |                  |              |         |            |         \n");
      printf ("     |--------------------------|                  |             ---      -----    |-----------|   \n");
      printf ("     |                       ( | |(                |          RL ---    Capacitor  |           |   \n");
      printf ("     |                        )| | )               |             ---      -----    |-----------|   \n");
      printf ("   |---|                     ( | |( ----|          |             ---        |            |         \n");
      printf ("   | V |                      )| | )    |          |              |         |            |         \n");
      printf ("   |---|                     ( | |(     |          |              |         |            |         \n");
      printf ("     |                      |---|       |          |              o---------|------------|         \n");
      printf ("     |                      |   |       |          |              |                                \n");
      printf ("     |----------o-----------|   |       |          |              |                                \n");
      printf ("                |               |       | Diodo 2  |              |                                \n");
      printf ("                |               |-------|--|>|-----|              |                                \n");
      printf ("                |                       |                         |                                \n");
      printf ("              -----                     |                         |                                \n");
      printf ("               ---                      |------------o------------|                                \n");
      printf ("                -                                    |                                             \n");
      printf ("                                                     |                                             \n");
      printf ("                                                   -----                                           \n");
      printf ("                                                    ---                                            \n");
      printf ("                                                     -                                           \n\n");
     
    
    
  }


 void EntradaValores_C (void){
     float Retorno = -1;
     char Palavra;
       
       do{
            printf ("\n Digite a tensão no enrolamento primário              | ");
            Retorno = scanf ("%f", &TensaoPrimariaC);
           if (Retorno == 0){
               printf ("\n\n  *********************************************\n");
               printf ("  Entrada inválida, por favor digite um número \n");
               printf ("  *********************************************\n\n");
              
          }
            do {
               
               Palavra = getchar ();
           }while (Palavra != '\n');
       }while (Retorno == 0);
     do{
          printf (" Digite número de espiras do enrolamento primário     | ");
          Retorno = scanf ("%f", &Numero_Espiras1C);
         if (Retorno == 0){
             printf ("\n\n  *********************************************\n");
             printf ("  Entrada inválida, por favor digite um número \n");
             printf ("  *********************************************\n\n");
            
        }
          do {
             
             Palavra = getchar ();
         }while (Palavra != '\n');
     }while (Retorno == 0);
     do{
          printf (" Digite o número de espiras do enrolamento secundário | ");
          Retorno = scanf ("%f", &Numero_Espiras2C);
         if (Retorno == 0){
             printf ("\n\n  *********************************************\n");
             printf ("  Entrada inválida, por favor digite um número \n");
             printf ("  *********************************************\n\n");
            
        }
          do {
             
             Palavra = getchar ();
         }while (Palavra != '\n');
     }while (Retorno == 0);
     do{
          printf (" Digite o valor do filtro capacitivo em µf            | ");
          Retorno = scanf ("%f", &CapacitanciaC);
         if (Retorno == 0){
             printf ("\n\n  *********************************************\n");
             printf ("  Entrada inválida, por favor digite um número \n");
             printf ("  *********************************************\n\n");
            
        }
          do {
             
             Palavra = getchar ();
         }while (Palavra != '\n');
     }while (Retorno == 0);
     do{
          printf (" Digite o valor da resistência da carga em Kohms      | ");
          Retorno = scanf ("%f", &Resistencia_CargaC);
         if (Retorno == 0){
             printf ("\n\n  *********************************************\n");
             printf ("  Entrada inválida, por favor digite um número \n");
             printf ("  *********************************************\n\n");
            
        }
          do {
             
             Palavra = getchar ();
         }while (Palavra != '\n');
     }while (Retorno == 0);
     
     do{
          printf (" Digite o valor da Frequência                         | ");
          Retorno = scanf ("%f", &FrequenciaC);
         if (Retorno == 0){
             printf ("\n\n  *********************************************\n");
             printf ("  Entrada inválida, por favor digite um número \n");
             printf ("  *********************************************\n\n");
            
        }
          do {
             
             Palavra = getchar ();
         }while (Palavra != '\n');
     }while (Retorno == 0);
    }
   

  void CalculoCircuito_C (void){
      
      float V2 = TensaoPrimariaC*Numero_Espiras2C/Numero_Espiras1C;
      float V2P = V2*sqrt(2);
      float VCP = V2P/2-0.7;

      float C = CapacitanciaC*0.000001;
      float RL = Resistencia_CargaC*1000;
      float F = 2*FrequenciaC;
      float i = VCP/RL;
      float Vond = i/(F*C);

      float Vminimo = VCP - Vond;
      float Vmedio = (Vminimo+VCP)/2;
      
      printf ("\n                                                                          \n");
      printf ("  ----------------------------------------------------------------------------\n");
      printf ("  -------------------------------- RESULTADO ---------------------------------\n");
      printf ("  ----------------------------------------------------------------------------\n\n");
      printf ("  Tensão de pico no capacitor = %.2f\n", VCP);
      printf ("  Tensão de Ripple            = %.2f\n", Vond );
      printf ("  Tensão  média na carga      = %.2f\n", Vmedio);
      
}

  void Diagrama_D (void){

        printf ("                                     |---------------|-------------|------|   \n");
        printf ("                                     |               |             |      |   \n");
        printf ("                                     |               |             |      |   \n");
        printf ("                                     |               |             |      |   \n");
        printf ("                                    ___             ___            |      |   \n");
        printf ("                                     ^   D1          ^    D3       |      |   \n");
        printf ("                                    /_\\             /_\\            |      | \n");
        printf ("                                     |               |             |      |   \n");
        printf ("                                     |               |           -----    |   \n");
        printf ("                                     |               |         Capacitor  |   \n");
        printf ("     |-------------| |---------------o               |           -----    |   \n");
        printf ("     |           ( | |(              |               |             |      |   \n");
        printf ("     |            )| | )             |               |             |      |   \n");
        printf ("   |---|         ( | |(          --------------------o             |      \\  \n");
        printf ("   | V |          )| | )         |   |               |             |      /   \n");
        printf ("   |---|         ( | |(          |   |               |             | Carga\\  \n");
        printf ("     |            )| | )         |   |               |             |      /   \n");
        printf ("     |           ( | |(          |   |               |             |      \\  \n");
        printf ("     |-------------| |-----------|  ___             ___            |      |   \n");
        printf ("                                     ^               ^             |      |   \n");
        printf ("                                    /_\\ D2          /_\\ D4         |      | \n");
        printf ("                                     |               |             |      |   \n");
        printf ("                                     |               |             |      |   \n");
        printf ("                                     |---------------|-------------|------|   \n\n");
        
    
}

  void EntradaValores_D (void){
      
      float Retorno = -1;
      char Palavra;
        
        do{
             printf ("\n Digite a tensão no enrolamento primário              | ");
             Retorno = scanf ("%f", &TensaoPrimariaA);
            if (Retorno == 0){
                printf ("\n\n  *********************************************\n");
                printf ("  Entrada inválida, por favor digite um número \n");
                printf ("  *********************************************\n\n");
               
           }
             do {
                
                Palavra = getchar ();
            }while (Palavra != '\n');
        }while (Retorno == 0);
      do{
           printf (" Digite número de espiras do enrolamento primário     | ");
           Retorno = scanf ("%f", &Numero_Espiras1A);
          if (Retorno == 0){
              printf ("\n\n  *********************************************\n");
              printf ("  Entrada inválida, por favor digite um número \n");
              printf ("  *********************************************\n\n");
             
         }
           do {
              
              Palavra = getchar ();
          }while (Palavra != '\n');
      }while (Retorno == 0);
      do{
           printf (" Digite o número de espiras do enrolamento secundário | ");
           Retorno = scanf ("%f", &Numero_Espiras2A);
          if (Retorno == 0){
              printf ("\n\n  *********************************************\n");
              printf ("  Entrada inválida, por favor digite um número \n");
              printf ("  *********************************************\n\n");
             
         }
           do {
              
              Palavra = getchar ();
          }while (Palavra != '\n');
      }while (Retorno == 0);
      do{
           printf (" Digite o valor do filtro capacitivo em µf            | ");
           Retorno = scanf ("%f", &CapacitanciaA);
          if (Retorno == 0){
              printf ("\n\n  *********************************************\n");
              printf ("  Entrada inválida, por favor digite um número \n");
              printf ("  *********************************************\n\n");
             
         }
           do {
              
              Palavra = getchar ();
          }while (Palavra != '\n');
      }while (Retorno == 0);
      do{
           printf (" Digite o valor da resistência da carga em Kohms      | ");
           Retorno = scanf ("%f", &Resistencia_CargaA);
          if (Retorno == 0){
              printf ("\n\n  *********************************************\n");
              printf ("  Entrada inválida, por favor digite um número \n");
              printf ("  *********************************************\n\n");
             
         }
           do {
              
              Palavra = getchar ();
          }while (Palavra != '\n');
      }while (Retorno == 0);
      
      do{
           printf (" Digite o valor da Frequência                         | ");
           Retorno = scanf ("%f", &FrequenciaA);
          if (Retorno == 0){
              printf ("\n\n  *********************************************\n");
              printf ("  Entrada inválida, por favor digite um número \n");
              printf ("  *********************************************\n\n");
             
         }
           do {
              
              Palavra = getchar ();
          }while (Palavra != '\n');
      }while (Retorno == 0);
     }
    
    
  void CalculoCircuito_D (void){
    
            float V2 = TensaoPrimariaA*Numero_Espiras2A/Numero_Espiras1A;
            float V2P = V2*sqrt(2);
            float VCP = V2P-1.4;
      
            float C = CapacitanciaA*0.000001;
            float RL = Resistencia_CargaA*1000;
            float F = 2*FrequenciaA;
            float i = VCP/RL;
            float Vond = i/(F*C);
      
            float Vminimo = VCP - Vond;
            float Vmedio = (Vminimo+VCP)/2;
            
            
          printf ("\n                                                                          \n");
          printf ("  ----------------------------------------------------------------------------\n");
          printf ("  -------------------------------- RESULTADO ---------------------------------\n");
          printf ("  ----------------------------------------------------------------------------\n\n");
          printf ("  Tensão de pico no capacitor = %.2f\n", VCP);
          printf ("  Tensão de Ripple            = %.2f\n", Vond );
          printf ("  Tensão  média na carga      = %.2f\n", Vmedio);

  
    
}
    

   

             
