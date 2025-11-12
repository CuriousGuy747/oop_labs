// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

template <typename T>
    T return_highest(T a, T b, T c){
        if (a>b && a>c){
            return a;
        }else if (b>a && b>c){
            return b;
        }else return c;
    }
    
template <typename A>
class Box{
    private:
        A first;
        A second;
        A third;
    
    
    
    public: 
    Box(A a, A b, A c){
        first = a;
        second = b;
        third = c;
    }
    A sum(){
        return first + second + third;
    }
    
    void display(){
        cout << first << " " << second << " " << third << endl;
    }
    
    A get_index(int index){
        switch(index){
            case 0: return first; break;
            case 1: return second; break;
            case 2: return third; break;
            default: 
                throw out_of_range("Invalid index");
        }
    }
    
    void set_index(int index, const A& value){
        switch(index){
            case 0: first = value; break;
            case 1: second = value; break;
            case 2: third = value; break;
            default: throw out_of_range("Invalid index");
        }
    }
};
    
int main() {
    // Write C++ code here
    // std::cout << "Try programiz.pro";
    // int a, b;
    // cin >> a >>b;
    // char oper;
    // cin >> oper;
    // // int a=15, b=0;
    // try{
    //     if(oper=='+'){
    //         cout << a+b<< endl;
    //     }else if(oper == '-'){
    //         cout << a-b<< endl;
    //     }else if(oper == '*'){
    //         cout << a* b << endl;
    //     }else if (oper == '/'){
    //         if(b==0){
    //         throw runtime_error("Error divion by zero.");
    //     } cout << a/b << endl;
    //     }else{
    //         throw invalid_argument("error. unknown operation");
    //     }
        
    // }catch(runtime_error& e){
    //     cout << e.what() << endl;
    // }
    
    
    
    
    Box<int> b1(3, 5, 7);
    b1.display();
    cout << "Sum = "<< b1.sum() << endl;
    Box<double> b2(2.5, 4.0, 3.5);
    b2.display();
    cout << "Sum = " << b2.sum() << endl;
    Box<string> b3("Hi", " ", "there");
    b3.display();
    cout << "Sum = " << b3.sum() << endl;
    // Testing exceptions
    try {
        cout << b1.get_index(0) << endl;   // invalid index
        b1.set_index(0, 2);
        b1.display();
    } catch (const exception &e) {
        cout << "Caught: " << e.what() << endl;
    }

    
    
    
    
    
    // cout << return_highest(0.32,3.4,1.54) << endl;
    // cout << "hello" <<endl;
    return 0;
}
