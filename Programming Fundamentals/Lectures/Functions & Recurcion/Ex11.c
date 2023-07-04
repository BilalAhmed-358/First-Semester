int multiply(int m, int n);
int main(){
	
	printf("%d",multiply(10,3));
}
int multiply(int m, int n){

	
	int ans;
	if (n == 1)
		ans = m;
	else
		ans = m+ multiply(m, n - 1);
		
	return ans;
}
