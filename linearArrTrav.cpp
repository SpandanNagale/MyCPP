#include <iostream> 
 using namespace std ;
 void arraytrav(int arr[],int size)
 {
    for(int i=0;i<size;i++){
        cout<<" element is :"<<arr[i]<<endl;
    };
 }
 int main(){
 int arr[]= {1,2,3,4,5,6,6,7,7,8,8,9};
int size = sizeof arr/ sizeof arr[0];

 arraytrav(arr, size);
return 0;
}