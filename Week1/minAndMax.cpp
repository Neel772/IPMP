 int findSum(int A[], int N)
    {
        int max=0,min=0,curr=1;
        while(curr<N){
            if(A[max] < A[curr]) max = curr;
            if(A[min] > A[curr]) min = curr;
            curr++;
        }
        return A[max] + A[min];
    }
