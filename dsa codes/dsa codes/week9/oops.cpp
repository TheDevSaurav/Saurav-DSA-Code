#include<iostream>
using namespace std;
class animal{
    //state and property
    private:
    int weight;
    public:
    int age;
    string name;

    // // default constructor
    // animal(){
    //     this->age=0;
    //     this->weight=0;
    //     this->name=" ";
    //  cout<<"constructor called"<<endl;   
    // }
    // //parameterised constructor
    // animal(int age){
    //     this->age=age;
    //     cout<<"parameterised constructor"<<endl;
    // }
    //  //parameterised constructor2
    // animal(int age,int weight){
    //     this->age=age;
    //     this->weight=weight;
    //     cout<<"parameterised constructor2"<<endl; 
    //     }

    //     //copy constructor
    //     animal(animal &obj){
    //         this->age=obj.age;
    //         this->weight=obj.weight;
    //         this->name=obj.name;
    //         cout<"this is inside copy cinstructor"<<endl;
    //     }

    //behavior
    void eat(){
        cout<<"eating"<<endl;
    }
    void sleep(){
        cout<<"sleeping"<<endl;

    }

    //private ko acess krna

    int getweight(){
        return weight;
    }
    void setweight(int weight){
        this->weight=weight;
    }
    void print(){
        cout<<this->age<<" "<<this->weight<<" "<<this->name<<" "<<endl;
    }

    //destructor
    ~animal(){
        cout<<"i AM inside destructor";
    }
};
int main() {

    //object creation is two type static and dynamically
// //static
// animal ramesh;
// ramesh.age = 12;
// ramesh.name = "lion";
// cout<<"age of ramesh is : "<<ramesh.age<<endl;
// cout<<"age of ramesh is : "<<ramesh.name<<endl;

// ramesh.eat();
// ramesh.sleep();  

// //private ko acess
// ramesh.setweight(101);
// cout<<"age of ramesh"<<ramesh.getweight()<<endl;


// //dynamic memory
// animal* suresh  = new animal;
//     (*suresh).age =15;
//     (*suresh).name ="billi";

//     //atlter name dynami access
//     suresh->age=15;
//     suresh->name="billi";

//     suresh->eat();
//     suresh->sleep();

    // //  default constructor
    // animal a;
    // animal* b = new animal();

    //    //  parameterised constructor
    // animal d(10);
    // animal* c = new animal(100);

    // //  parameterised constructor2
    // animal x(10);
    // animal* y = new animal(100,34);

    // //copy constructor
    // // animal c=a;
    // animal animal1(c);

//     animal a;
//     a.age=20;
//     a.setweight(101);
//     a.name="saurav";

//     animal b=a;
//     a.print();
//     b.print();

//destrucor
    animal a;
    a.age=19;

    animal* b= new animal();
    b->age=12;
    //manualy
    delete b;
 }