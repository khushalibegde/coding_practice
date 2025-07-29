void sortZeroesAndOne(int input[], int size)
{
    int j = size-1;
    for(int i=0;i<j;){
        if(input[i]==0){
            i++;
        }
        else{
            swap(input[i],input[j--]);
        }
    }
}
