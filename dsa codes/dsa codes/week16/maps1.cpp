// #include<iostream>
// #include<unordered_map>
// using namespace std;

// int main() {
//     //creation
//     unordered_map<string,int> mapping;

//     //insertion
//     //method 1
//     pair<string,int>p = make_pair("saurav",25);
//     //method 2
//     pair<string,int>q("gaurav",18);
//     //method 3
//     pair<string,int>r;
//     r.first = "ansh";
//     r.second=26;
//     //insert
//     mapping["sauav"]=4;

//     mapping.insert(p);
//     mapping.insert(q);
//     mapping.insert(r);

//     cout<<"size of mapping"<<mapping.size()<<endl; 
//     //access
//     cout<<mapping.at("saurav")<<endl;
//     cout<<mapping["saurav"]<<endl;


//     //searching 
//     //count agr 1 hai to present else not present
//     cout<<mapping.count("saurav")<<endl;

//     //if humra iterator age end hai poch gya to present nhi hai
//     //agr humara iterrator bich mai present hai to string present hai
//     if(mapping.find("gaurav") != mapping.end()){
//         cout<<" found"<<endl;
//     }
//     else{
//         cout<<"not found"<<endl;
//     }


//     //jab bhi square notation se kisi ko access krne ki koshish krenga 
//     //agr value present hai to 1 else 0
//     //present nhi hai to ye 1 entry create kr dega map mai,that`s why size increase hoga
//     cout<<mapping["naseem"]<<endl;
//      cout<<"size of mapping"<<mapping.size()<<endl; 

//     }




#include<iostream>
#include<unordered_map>
using namespace std;

void countCharacters(unordered_map<char,int> &mapping, string str){
    for(auto ch:str){
        mapping[ch]++;
    }
}
int main() {
    string str = "lovebabbar";
    unordered_map<char,int> mapping;
    countCharacters(mapping,str);

    for(auto i: mapping){
        cout<<i.first<<"->"<<i.second<<endl;
    }
}