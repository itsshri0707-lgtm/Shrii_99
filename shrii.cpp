void reverse(int arr[],int size){

    int start = 0;
    int end = size-1;

    while(start < end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main(){
    
    int size = 7;
    int arr[size] ={32,33,98,77,11,89,17};
    
    reverse(arr,size);

    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;

}
