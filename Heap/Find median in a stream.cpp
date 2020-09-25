// Function to insert heap
void FindMedian::insertHeap(int &x){
	if (max.empty()) 
        max.push(x);
    else if (x > max.top()) 
        min.push(x);
    else if(min.empty())
    {
        min.push(max.top());
        max.pop();
        max.push(x);
    }
    else
        max.push(x);
    balanceHeaps();

}
// Function to balance heaps
void FindMedian::balanceHeaps(){
    if (abs(max.size() - min.size()) > 1){  
        if (max.size() > min.size()){
            min.push(max.top());
            max.pop();
        }
        
        else{
            max.push(min.top());
            min.pop();
        }
    }

	 
}

// Function to return getMedian
double FindMedian::getMedian(){
	 if((max.size()+min.size())%2==0){
	 	median=(max.top()+min.top());
	 	median/=2;
	 }
	 else{
	 	if (min.empty() || min.size() < max.size() )
            median = max.top();
        else
            median = min.top();
	 }
	 return median;
}