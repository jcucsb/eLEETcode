//PJ 1/10/23
//ENG II 
//Notes: use a catch to make sure not indexing out of bounds on first attempt



class Solution {
public:
    int lengthOfLastWord(string s) {
        int wordLength = 0;
        for(int i = 0; i < s.length(); i++){
             if(isalpha(s.at(i))!=0){                               //if it is an alphabet character
                wordLength++;
            }
            if (i != 0){                                            //catch out of bounds exception 
                if(isalpha(s.at(i))!=0 && isspace(s.at(i-1))!=0){
                    wordLength = 0;
                    wordLength++;
                }
            }
        }
        return wordLength;
        
    }
};