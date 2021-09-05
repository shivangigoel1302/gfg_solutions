int findindex(string temp){
	       int i = 0;
	       while(i < temp.size()){
	           if(temp[i] == '?'){
	               return i;
	           }
	           i++;
	       }
	       return i;
	   }
		vector<string> generate_binary_string(string s)
		{
		    // Code here
		     vector<string>v;
		     queue<string>q;
		     q.push(s);
		     while(!q.empty()){
		         string temp = q.front();
		         q.pop();
		         int i = findindex(temp);
		         if(i == temp.size()){
		             v.push_back(temp);
		         }
		         else{
		             temp[i] = '0';
		             q.push(temp);
		             temp[i] = '1';
		             q.push(temp);
		         }
		     }
		     return v;
		}
