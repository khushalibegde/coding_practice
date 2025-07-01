class Solution {
public:
    int hashCalc(string s){
        int hashV = 0;
        for(int i=0;i<s.length();i++){
            hashV += s[i] - 'a';
        }
        return hashV;
    }
    string stringHash(string s, int k) {
        int n = s.length();
        int lenReq = n/k;

        int i=0;
        int sumHash = 0;
        string result = "";
        while(i<n){
            string sub = s.substr(i,k);
            cout << sub;
            int hashVal = hashCalc(sub);
            hashVal%=26;
            result += (hashVal+ 'a');
            i+=k;
        }
        return result;
    }
};
