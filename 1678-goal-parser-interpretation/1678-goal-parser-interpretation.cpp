class Solution {
public:
    string interpret(string goal) {
    int i=0;
	string res;
	while (i<goal.size()){
		if (goal[i]=='G'){
			res.push_back('G');
			i++;
		} 
		else if (goal[i]=='(' and goal[i+1]==')'){
			res.push_back('o');
			i+=2;
		}
		else if (goal[i]=='(' and goal[i+1]=='a' and goal[i+2]=='l' and goal[i+3]==')'){
			res.push_back('a');
			res.push_back('l');
			i+=4;


		}

	}
	return res;
    }
        
};