main(){

	int maxValue = 0, maxCount = 0, i, j;
	int n = 5;
   	int a[] = {0,6,7,2,7};
	for (i = 0; i < n; ++i) {
		int count = 0;
      
		for (j = 0; j < n; ++j) {
			if (a[j] == a[i])
         		++count;
      	}
      
		if (count > maxCount) {
			maxCount = count;
			maxValue = a[i];
      	}
	}
	printf("Mode = %d ", maxValue);
}
