bool isRotated(string s1, string s2){  //amazon    // azonam
    int n=s1.length();
    int m=s2.length();
    if(n!=m)
    	return false;
    if(n<=2||m<=2)
    	return (s1==s2);

    string clockwise="";
    string anticlockwise="";
    anticlockwise+=s2.substr(n-2,2)+s2.substr(0,n-2);
   // cout<<anticlockwise<<endl;        //  amazon
    clockwise+=s2.substr(2)+s2.substr(0,2);
    cout<<clockwise<<" "<<s2.substr(2)<<endl;
    //     onamaz            onam

    return (s1.compare(clockwise)==0||s1.compare(anticlockwise)==0);

}
 