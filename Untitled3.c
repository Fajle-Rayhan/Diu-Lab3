#include<stdio.h>
#define MAX 10
#define INF

int adjacent [MAX][MAX];
void enqueue(int item)(
 if rear==MAX-1){
 printf("Queue Overflow \n");
}else{
 if(front==-1){
    front=0;
 }
 rear = rear +1;
 queue[rear] = item;
}
}

int dequeue(){adjacent
  int item;
  if(front == -1 || front>rear)


}
int main()
{
    int nov,i,j;
    printf("Enter Number of vertex: ");
    scanf("%d", &nov);
     printf("Enter 1 if it is adjacent to next or enter 0 \n");
     for(i=0;i<nov;i++){
            for(j=0;j<nov;j++){
                printf("adjacency between %d and %d",i,j);
                scanf("%d",&adjacent[i][j]);
            }
     }
    for(i=0;i<nov;i++){
        for(j=0;j<nov;j++){
            printf("%d\t", adjacent[i][j]);
        }
        printf("\n");
    }
    BFS 0
    return 0;
}
