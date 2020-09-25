 bool areRotations(string s1,string s2){
        string h=s1+s1;
        if(s1.length()!=s2.length())
        	return false;
        if(h.find(s2)!=string::npos)
            return true;
        else
            return false;
}
