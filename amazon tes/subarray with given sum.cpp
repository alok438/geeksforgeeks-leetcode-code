void subarraySum(int a[], int n, int s) {
  int i = 0, j = 0, sum = 0, f = 0;
  while (i <= n) {
    if (sum < s) {
      sum += a[i];
      i++;
    }
    else if (sum > s) {
      sum -= a[j];
      j++;
    }
    if (sum == s) {
      f = 1;
      break;

    }

  }
  if (f == 1)
    cout << j + 1 << " " << i;
  else
    cout << "-1";

}