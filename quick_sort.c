#include<stdio.h>
void printarray(int* A,int n){
for(int i=0;i<n;i++)
{
  printf("%d ",A[i]);
}
printf("\n");


}

int partition(int A[],int low,int high)
{
  int key=A[low];
  int i=low+1;
  int j=high;
  int temp;
  do{
           while(A[i]<=key){
           
           			i++;
           			
                             }
            while(A[j]>key){
                                 j--;
                               }
               if(i<j){
 			temp=A[i];
 			A[i]=A[j];
 			A[j]=temp;
                      }

    }while(i<j);
    
    temp=A[low];
    A[low]=A[j];
    A[j]=temp;
    return j;
  
  



}

void quickSort(int A[], int low, int high)
{
    int partitionIndex; // Index of pivot after partition

    if (low < high)
    {
        partitionIndex = partition(A, low, high); 
        quickSort(A, low, partitionIndex - 1);  // sort left subarray 
        quickSort(A, partitionIndex + 1, high); // sort right subarray
    }
}


int main(){
int A[]={2,1,3,11,5,6};
int n=6;
printf("\n Given Array \n");
printarray(A,n);
quickSort(A,0,n-1);
printf("\n after quicksort the Array \n");
printarray(A,n);
return 0;

}
