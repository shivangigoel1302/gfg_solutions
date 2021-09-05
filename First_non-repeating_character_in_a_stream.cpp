public:
		string FirstNonRepeating(string A){
		    // Code here
		    vector<int>m(26,0);
		    queue<char>q;
		    string ans = "";
		    for(int i = 0; i < A.size(); i++){
		        m[A[i]-'a']++;
		        if(m[A[i]-'a'] == 1){
		            q.push(A[i]);
		        }
		        while(!q.empty() && m[q.front()-'a'] > 1){
		            q.pop();
		        }
		        if(q.empty()){
		            ans += '#';
		        }
		        else{
		            ans += q.front();
		        }
		    }
		    return ans;
		}
