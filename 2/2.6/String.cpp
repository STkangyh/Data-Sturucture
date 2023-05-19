//
// Created by yhkan on 2023-04-03.
//
class String{
public:
    String(char *init, int m);
    //Initialize *this to string init of length m
    bool operator==(String t);
    //If the string represented by *this equals t, return true
    bool operator!();
    //If *this is empty then return true
    int Length();
    //Return the number of characters in *this
    String Concat(String t);
    //Return a string whose elements are those of *this followed by those of t
    String Substr(int i, int j);
    //Return a string containing the j characters of *this at positions i, i+1 ..., i+j-1
    //if these are valid positions of *this; otherwise,  throw an exception
    int Find(String pat);
    //Return an index i such that pat matches the substring of *this that begins at position i
    //Return -1 if pat is either or not a substring of *this'
    int FastFind(String pat);
};

int String::Find(String pat) {
    for (int start = 0; start <= Length()-pat.Length(); start++) {
        //check for match beginning at str[start]
        int j;
        for(j=0;j<pat.Length()&&str[start+j]==pat.str[j];j++){
            if(j==pat.Length())
                return start; //match found
        }
        return -1;  //pat is empty or does not occur in s
    }
}

int String::FastFind(String pat){
    //Determine if pat is a substring of s
    int posP=0, posS=0;
    int lengthP=pat.Length(), lengthS=length();
    while((posP<lengthP)&&(posS<lengthS)){
        if (pat.str[posP]==str[posS]){
            posP++; posS++;
        }
        else{
            if (posP==0)
                posS++;
            else posP=pat.f[posP-1]+1; //failure function으로 얼마나 건너 뛸 것인지 판단
        }
    }
    if(posP<lengthP) return -1;
    else return posS-lengthP;
}