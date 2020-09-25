 int converttoFive(int n){
     if(n==0)
     return 0;
      int digit;
      digit=n%10;
      if(digit==0)
       digit=5;
       return converttoFive(n/10)*10+digit;
       
 }
/*you are required to complete this method*/
int convertFive(int n) {
 
    if(n==0)
      return 5;
    else 
    return converttoFive(n);
    
}
