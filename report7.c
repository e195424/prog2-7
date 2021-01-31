#include<stdio.h>

void sort(int *scores, int SIZE){
    int i,j,l,n,m;
    int u=0; //入れ替え用変数
    m=SIZE;

    printf("scores:");
    for(l=0; l<m; l++){
        printf("%d ",scores[l]);
    }
    printf("\n");
    printf("result:");
    for(i=0; i<m; i++){
        for(j=m-1; j>=i; j--){
            if(scores[j-1]<scores[j]){
                u=scores[j-1];
                scores[j-1]=scores[j];
                scores[j]=u;
            }
        }
    }
    for(n=0; n<m; n++){
        printf("%d ",scores[n]);
    }
}
int main(void){   
    int t;
    int SIZE; //配列のサイズ]

    printf("count:");
    scanf("%d",&SIZE);
                
    int scores[SIZE];

    for(int s=0; s<SIZE; s++){
        printf("element:");
        scanf("%d",&t);
        scores[s]=t;
    }
    
    sort(scores, SIZE);
    return 0;
}