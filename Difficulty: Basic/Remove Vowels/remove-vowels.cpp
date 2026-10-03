class Solution{
public:
    string removeVowels(string s){
        //code here
        string result="";
        for(char c:s){
            if(c!='a'&&c!='e'&&c!='i'&&c!='o'&&c!='u'&&
               c!='A'&&c!='E'&&c!='I'&&c!='O'&&c!='U')
                result+=c;
        }
        return result;
    }
};