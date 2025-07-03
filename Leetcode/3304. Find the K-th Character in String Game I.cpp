class Solution {
public:
    char kthCharacter(int k) {
        string w = "a";
        while(w.length()<k){
            string temp = "";
            for(int i=0;i<w.length();i++){
                if(w[i]=='z'){
                    temp+='a';
                }
                else{
                    temp+=(char)(w[i]+1);
                }
            }
            w.append(temp);
        }
        cout << w;
        return w[k-1];
    }
};
