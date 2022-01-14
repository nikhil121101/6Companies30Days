vector<string> generate(int N)
{
    vector<string> res;
	for(int i = 1; i <= N; i++) {
	    string cur = bitset<32>(i).to_string();
	    int j = 0;
	    while(j < 31 && cur[j] == '0')
	        j++;
	    
	    res.push_back(cur.substr(j));
	}
	return res;
}