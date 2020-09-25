

void rotateArr(int a[], int d, int n) {
	reverse(a, a + d);
	reverse(a + d, a + n);
	reverse(a, a + n);
}