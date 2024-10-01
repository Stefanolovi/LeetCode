int removeDuplicates(int* nums, int numsSize) {
    int cnt = 0;
    int number_of_reallocations = 0;  
    int prev_num = 157;
    int k; 
    int repeat = 1;

    for (int i = 0; i<numsSize - number_of_reallocations; i++){
        printf("\n number: %d\n", *(nums+i));
        if (*(nums+i) == prev_num) {cnt = cnt + 1;} 
        else cnt = 0; 
        prev_num = *(nums+i);
        printf("cnt: %d \n", cnt); 
        if (cnt>1) {            //reallocat(*nums, numsSize, i); 
            
            do {
                printf("reallocating...\n");
                for (int j = i; j<(numsSize-1) ; j++) { 
                        *(nums+j)=*(nums+j+1);
                }
                number_of_reallocations ++;
            } while (*(nums+i)==*(nums+i-1)); 
        }
    }
    k = numsSize - number_of_reallocations; 
    return k; 
}

