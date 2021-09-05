public:

	vector<int> barcketNumbers(string S)
	{
	    // Your code goes here
	    vector<int>ans(S.size(),0);
	    stack<int>s;
	    int next = 1;
	    for(int i =0; i < S.size(); i++){
	        if(S[i] == '('){
	            ans[i] = next++;
	            s.push(i);
	        }
	        else if(S[i] == ')'){
	            int idx = s.top();
	            s.pop();
	            ans[i] = ans[idx];
	        }
	    }
	    vector<int>res;
	    for(auto i: ans){
	        if(i){
	            res.push_back(i);
	        }
	    }
	    return res;
	}
