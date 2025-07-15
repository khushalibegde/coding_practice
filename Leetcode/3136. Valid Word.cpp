class Solution {
private:
    bool isVowel(char c) {
        c = tolower(c);
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
public:
    bool isValid(string word) {
        int n = word.length();
        if(n<3){
            return false;
        }
        for(char w : word){
            if(!isalnum(w)){
                return false;
            }
        }
        int v = 0, c = 0;
        for(char w : word){
            if(isVowel(w)){
                v++;
            }
            if(isalpha(w)  && !isVowel(w)){
                c++;
            }
            if(v>0 && c>0){
                return true;
            }
        }
        return false;
        
    }
};
