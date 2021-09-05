public:
    int minThrow(int N, int arr[]){
        // code here
        unordered_map<int,int>m;
        for(int i = 0; i < 2*N; i+=2){
            m[arr[i]] = arr[i+1];
        }
        queue<int>q;
        q.push(1);
        int moves = 0;
        while(!q.empty()){
            int sz = q.size();
            while(sz--){
                int x = q.front();
                q.pop();
                for(int i = 1; i <= 6; i++){
                    int npos = x+i;
                    if(npos == 30){
                        return moves+1;
                    }
                    if(npos < 30){
                        if(m.count(npos)){
                            q.push(m[npos]);
                        }
                        else{
                            q.push(npos);
                        }
                    }
                }
            }
            moves++;
        }
        return 30;
    }
