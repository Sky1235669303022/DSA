#include<iostream>
using namespace std;
void selectionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int smallest_index=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[smallest_index]){
            smallest_index=j;}
        } swap(arr[i],arr[smallest_index]);
    }
}
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n=5;
    int arr[]={4,1,5,2,3};
    selectionsort(arr,n);
    printarray(arr,n);
}