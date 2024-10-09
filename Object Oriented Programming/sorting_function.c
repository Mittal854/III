#include <stdio.h>

void input (int *arr, int n) {
    printf ("Enter the elements: \n");
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
}

void display(int *arr, int n) {
    printf ("Elements in array are: ");
    for (int i=0; i<n; i++) 
        printf (" %d", arr[i]);
}

void sort (int *arr, int n) {
    int temp;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int arr[10];
    int n;
    void (*fun)(int*,int);
    printf ("Enter number of elements: ");
    scanf ("%d", &n);
    fun=input;
    (*fun)(arr, n);
    fun=display;
    (*fun)(arr, n);
    fun=sort;
    (*fun)(arr, n);
    printf("\n");
    fun=display;
    (*fun)(arr, n);

    return 0;
}