#include <stdio.h>
#include <stdlib.h>
#include<math.h>
 
 
int main(){
    int M, N, X1, Y1, E1, N1, F1, X2, Y2, E2, N2, F2;
    int i;
    int R1, R1_left, R2, R2_left, x1_next, y1_next, x2_next, y2_next, explode, t;

    scanf("%d%d%d%d%d%d%d%d%d%d%d%d", &M, &N, &X1, &Y1 , &E1, &N1, &F1, &X2, &Y2 , &E2, &N2, &F2);
    if((N>0 && N<10000) && (M>0 && M<10000) && (X1<M && X1>=0) && (X2<M && X2>=0) && (Y1<N &&Y1>=0) && (Y2<N&& Y2>=0) && (X1!=X2 || Y1!=Y2) && N1>0 && E1>0 && N2>0 && E2>0 && (F1>=0 && F1<=10000) && (F2>=0 && F2<=10000)){
        for(i=0;i<=F1 || i<=F2;i++){

            if(i<=F1){
                R1_left = i % (N1 + E1);
                R1 = i/(N1 + E1);
                if(R1_left<=N1){
                    x1_next = (X1 + E1*R1)%M;
                    y1_next = (Y1 + N1*R1 + R1_left)%N;    
                }
                else if(R1_left>N1){
                    x1_next = (X1 + E1*R1 + (R1_left-N1))%M;
                    y1_next = (Y1 + N1*(R1+1))%N;    
                }
            }

            if(i<=F2){
                R2_left = i % (N2+E2);
                R2 = i/(N2+E2);
                if(R2_left<=E2){
                    x2_next = (X2 + E2*R2 + R2_left)%M;
                    y2_next = (Y2 + N2*R2)%N;
                    
                }
                else if(R2_left>E2){
                    x2_next = (X2 + E2*(R2+1))%M;
                    y2_next = (Y2 + N2*R2 + (R2_left-E2))%N;
                }   
            }

            if(x1_next == x2_next && y1_next == y2_next){
                printf("robots explode at time %d\n", i);
                break;
            }
        }

        if(x1_next != x2_next || y1_next != y2_next){
            printf("robots will not explode");
        }
    return 0;
    }

}