string stringFilter(string str)
    {
        //code here.
        int i = -1,j = 0;
        int n = str.size();
        string temp = "";
        while(j < n){
            if(i < n-1 && str[j] == 'a' && str[j+1] == 'c'){
                j+=2;
            }
            else if(str[j] == 'b'){
                j++;
            }
            // else if(i >= 0 && str[j] == 'c' && str[i] == 'a'){
            //     i--;
            //     temp.pop_back();
            //     j++;
            // }
            else{
                temp += str[j];
                str[++i] = str[j++];
            }
        }

        return temp;
    }
