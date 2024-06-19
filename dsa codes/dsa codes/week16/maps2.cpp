#include<iostream>
#include<vector>
using namespace std;

class trieNode{
    public:
    int values;
    trieNode* children[26];
    bool isTerminal;

    trieNode(int val){
        this->values=val;
        for(int i=0;i<26;i++){
            children[i]=NULL;
        }
        this->isTerminal=false;
    }
};

//insertion
void insertWord(trieNode* root,string word){
    //base case
    if(word.length()==0){
        root->isTerminal = true;
        return;
    }

    char ch = word[0];
    int index = ch-'a';
    trieNode* child;
    if(root->children[index]!=NULL){
        //present
        child = root->children[index];
    }
    else{
        //absent
        child = new trieNode(ch);
        root->children[index]= child;
    }

    //recursion
    insertWord(child,word.substr(1));
}

bool searchWord(trieNode* root,string word){
    //base case
    if(word.length()==0){
        return root->isTerminal;
    }
    char ch = word[0];
    int index = ch-'a';
    trieNode* child;

    if(root->children[index]!= NULL){
        //present or found
        child= root->children[index];
    }
    else{
        //not founfd
        return false;

    }

    //recursion
    bool recursionKaAns = searchWord(child,word.substr(1));
    return recursionKaAns;
}

void deleteWord(trieNode* root,string word){
    if(word.length()==0){
        root->isTerminal = false;
        return;
    }

     char ch = word[0];
    int index = ch-'a';
    trieNode* child;

    if(root->children[index]!= NULL){
        //present
        child= root->children[index];
    }
    else{
        //not present
        return;
    }

    //recursion
    deleteWord(child,word.substr(1));
}



//maps class 3


void storeString(trieNode* root,vector<string>&ans,string &input,string &prefix){
    //base case
    if(root->isTerminal==true){
        ans.push_back(prefix+input);
      // no return ky pata terminal ke niche koi char ho
    }

    for(char ch='a';ch<='z';ch++){
        int index = ch='a';
        trieNode* next = root->children[index];
        if(next != NULL){
            //child exist
            input.push_back(ch);
            //baki recusoin 
            storeString(next,ans,input,prefix);
            //backtrack
            input.pop_back();
        }
    }
}

void findPrefixString(trieNode* root, string input,vector<string> &ans,string &prefix){
//base case
    if(input.length()==0){
        trieNode* lastChar = root;
        storeString(lastChar,ans,input,prefix);
        return;
    }
    char ch= input[0];
    int index = ch-'a';
    trieNode* child;
    if(root->children[index] != NULL){
        //child present 
        child = root->children[index];
    }
    else{
        return;
    }

    //recursiv cal
    findPrefixString(child,input.substr(1),ans,prefix);
}






vector<vector<string> > getSuggestion(trieNode* root, string input){
    vector<vector<string>> output;
    trieNode* prev = root;
    string inputHelper = "";

    for(int i=0;i<input.length();i++){
        char lastChar = input[i];
        int index = lastChar='a';
        trieNode* curr = prev->children[index];

        if(curr==NULL)[
            break;
        ]
        else{
            vector<string>nicheKaAns;
            inputHelper.push_back(lastchar);
            string dummy = "";
            storeString(curr,nicheKaAns,inputHelper,dummy);
            output.push_back(nicheKaAns);
            //important
            prev= curr;
        }
    }
}
int main(){

    trieNode* root = new trieNode('-');

    insertWord(root,"cater");
    insertWord(root,"care");
    insertWord(root,"com");
    insertWord(root,"lover");
    insertWord(root,"loved");
    insertWord(root,"lov");
    insertWord(root,"bat");
    insertWord(root,"cat");
    insertWord(root,"car");

    // if(searchWord(root,"bat")){
    //     cout<<"found"<<endl;
    // }
    // else{
    //     cout<<"not found"<<endl;
    // }

    // deleteWord(root,"bat");
    
    // if(searchWord(root,"bat")){
    //     cout<<"found"<<endl;
    // }
    // else{
    //     cout<<"not found"<<endl;
    // }

    //maps class 3

    string input = "ca";
    string prefix = input;
    vector<string>ans;

    findPrefixString(root,input,ans,prefix);

    for(auto i: ans){
        cout<<i<<" ";
    }
    cout<<endl; 


}