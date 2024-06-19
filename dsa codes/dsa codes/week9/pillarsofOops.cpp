#include<iostream>
#include<string> 
using namespace std;

// // //encapsulation 
// // class animal {
// //    private:
// //     int age;
// //     int weight;
// //     public:
// //     void eat(){
// //         cout<<"eating"<<endl;
// //     }
// //     int getage(){
// //         return this->age;
// //     }
// //     void setage(int age){
// //         this->age=age;
// //     }
// // };
// // int main() {

// // }


// //inheritance

// //  class animal {
// //  public:  
// //     int age;
// //     int weight;
   
// //     void eat(){
// //         cout<<"eating"<<endl;
// //     }
    
// //  };
// //  class dog:public animal{

// //     };
// //  int main(){
// //     dog d1;
// //     d1.eat();
// //  }

// //types of inheritance

// //single 

// class car {
//     public:
//     string name;
//     int weight;
//     int age;

//     void speed(){
//         cout<<"speeding"<<endl;
//     }
//     // void break(){
//     //     cout<<"breaking"<<endl;
//     //       }
// };

// class scorpio:public car{
  
// };
// int main(){
//      scorpio s11;
//    s11.speed(); 
 
// }


//multi-level

// class fortuner{
//     public:
//     string name;
// };

// class scorpio:public fortuner{
//     public:  
//     int look;
// };
// class thar:public scorpio{
//     public:
//     int power;
// };
// int main(){
//     thar a;
//     cout<<a.name<<" "<<a.look<<" "<<a.power<<" "<<endl;
// }



//multiple


// class a{
//     public:
//     int physics;

// };
// class b{
//     public:
//     int chemitry;

// };

// class c:public a, public b{
//     public:
//     int maths;
// };
// int main(){
//     c obj;
//     cout<<obj.physics<<" "<<obj.chemitry<<" "<<obj.maths<<" "<<endl;
// }





// class a{
//     public:
//     int chemitry;
//     a(){
//         chemitry=101;
//     }
// };
// class b{
//     public:
//     int chemitry;
//      b() {
//         chemitry=102;
//      }

// };

// class c:public a, public b{
//     public:
//     int maths;
// };
// int main(){
//     c obj;
//     //scope operator
//     cout<<obj.a::chemitry<<" "<<obj.maths<<" "<<endl;
// }



//heirachical

// class car{
//     public:
//     int age;
//     int weight;
//     string name;

//     void speed(){
//         cout<<"speeding"<<endl;
//     }
// };
// class scorpio: public car{

// };
// class fortuner:public car{

// };
// int main() {
//     scorpio s11;
//     s11.speed();
//     fortuner f11;
//     f11.speed();
//     return 0;
// }




// #include <iostream>
// #include <string>  // Include this for the string class

// using namespace std;

// class Car {
// public:
//     int age;
//     int weight;
//     string name;

//     void speed() {
//         cout << "speeding" << endl;
//     }
// };

// class Scorpio : public Car {

// };

// class Fortuner : public Car {

// };

// int main() {
//     Scorpio s11;
//     s11.speed();

//     Fortuner f11;
//     f11.speed();

//     return 0;  // Don't forget to include a return statement in the main function
// }




//hybrid

//need not to code mixture of all












/////////////polymorphism

//compile time polumorphism
//function overloading
// #include<iostream>
// using namespace std;

// class maths{
//     public:
//     int sum(int a, int b){
//         cout<<"ist sum"<<endl;
//         return a+b;
//     }
//     int sum(int a, int b , int c){
//          cout<<"2nd sum"<<endl;
//         return a+b+c;
//     }
//      int sum(int a, float b){
//          cout<<"3rd sum"<<endl;
//         return a+b+10;
//     }
// };
// int main(){
//     maths obj;
//     cout<<obj.sum(2,5)<<endl;
//     cout<<obj.sum(2,5,6)<<endl;
//     cout<<obj.sum(2,5,6f)<<endl;
    

//     return 0;
// }



//operatror overloading

// class para{
//     public:
//     int val;

//     void operator+(para &obj2){
//         int value1= this->val;
//         int value2=obj2.val;
//         cout<<(value2-value1)<<endl;
//     }
// };
// int main() {
//     para obj1,obj2;
//         obj1.val=7;
//         obj2.val=2;
//         //this should print the difference between them
//         obj1 + obj2;
//         return 0;
// }






////////////////////////run time polymorphism
//overridding
class animal{
    public:
    //virtual use kr skte h void se phle
     virtual void speak(){
        cout<<"speaking"<<endl;
    }
};
class dog:public animal{
    public:
    //overridding
     public:
    void speak(){
        cout<<"braking"<<endl;
    }
};
// int main() {
    // dog a;
    // a.speak();

    // animal* a=new animal();
    // a->speak();

    // dog* a=new dog();
    // a->speak();
    
//->upcasting virtual use kr skte hai braking print krwane ke liye function mai
    // animal* a=new dog();
    // a->speak();

//->downcasting
//         dog* a=(dog*)new animal();
//     a->speak();


// }



