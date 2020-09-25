def kadaens(a,n):
	max1=0;maxsofar=-1;
	for i in range(n):
		max1+=a[i]
		if (max1<0):
		    max1=0
		if(max1>maxsofar):
			maxsofar=max1
	return maxsofar
def circularSubarraySum(a,n):
	sum1=sum(a)
	sum2=kadaens(a,n)
	for i in range(n):
		a[i]=-1*a[i]
	sum3=kadaens(a,n)
	return max(sum2,(sum1+sum3))
	