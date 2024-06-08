class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        unordered_set<string> rootSet;
        for(string root:dictionary){
            rootSet.insert(root);
        }
        
        istringstream ss(sentence);
 
        string word,result=""; // for storing each wor
        while (ss >> word) 
        {
            string curr="";
            bool flag=false;
            for(char c:word){
                curr+=c;
                if(rootSet.find(curr)!=rootSet.end()){
                    flag=true;
                    result+=curr;
                    result+=" ";
                    break;
                }
            }
            if(!flag){
                result+=curr;
                result+=" ";
            }
            
            //cout << word << "\n";
        }
        result.pop_back();
        return result;

        
    }
};