#include <stdio.h>
#include <stdlib.h>

void selection_sort(int arr[],int n);
void print_array(int arr[],int n);

int main()
{
    int length;
    printf("Type the length of the array:\n");
    scanf("%d",&length);
    int array[length];
    printf("Type the array:\n");
    for(int i =0;i<length;i++){
        scanf("%d",&array[i]);
    }
    printf("\n");
    print_array(array,length);
    printf("The array has been sorted :D\n\n");
    selection_sort(array,length);
    print_array(array,length);

    return 0;

}

void selection_sort(int arr[],int n){   // Function for sorting the array
    int i,j,temp,min_idx;

    for(i=0;i<n-1;i++){
        min_idx = i;

        for(j=i+1;j<n;j++){
            if(arr[min_idx]>arr[j]){
                    min_idx = j;
            }
        }

        if(i!=min_idx){
            temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
        }
    }
}

void print_array(int arr[],int n){  // Function for printing the array
    printf("The current array is:\n");
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
     printf("\n");
}
