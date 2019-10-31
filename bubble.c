#include <stdio.h>

int getInput(int array[]);
void swap(int array[], int index1 , int index2);
void printArray(int arr[] , int len);
void bubbleSort(int array[], int len);

int main(){
  int array[100], len;
 
  
  len = getInput(array);
  bubbleSort(array , len);
  printArray(array , len);
  
 
  return 0;
}

void printArray(int arr[] , int len){
    int index;
    printf("Sorted list in ascending order:\n");

    for ( index = 0 ; index < len ; index++ )
        printf("%d  ", arr[index]);
}

void bubbleSort(int array[], int len){

    int index , j ;

    for (index = 0 ; index < ( len - 1 ); index++)
        for (j = 0 ; j < len - index - 1; j++)
            if (array[j] > array[j+1]) /* For decreasing order use < */
                swap(array , j, j+1);

}

int getInput(int array[]){
    int len , index;
    printf("Enter number of elements\n");
    scanf("%d", &len);

    printf("Enter %d integers\n", len);

    for (index = 0; index < len ; index++)
        scanf("%d", &array[index]);


    return len;
    
}

void swap(int array[] , int index1 , int index2){
    int temp;
    temp = array[index1];
    array[index1]  = array[index2];
    array[index2] = temp;
}