	void segregateEvenOdd(int arr[], int n) {
	    // code 
	     vector<int>even;
	     vector<int>odd;
	     for(int i=0;i<n;i++){
	         if(arr[i] % 2 ==0) even.push_back(arr[i]);
	         if(arr[i] % 2 ==1) odd.push_back(arr[i]);
	     }
	     sort(even.begin(),even.end());
	     sort(odd.begin(),odd.end());
	     int k =0;
	     for(int i: even){
	         arr[k++] = i; 
	     }
	      for(int i: odd){
	         arr[k++] = i; 
	     }
	}
