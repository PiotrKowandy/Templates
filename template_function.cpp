#include <iostream>
#include <typeinfo>

class CCalc{
public:
    CCalc();
    //int add(int, int);
    template <typename T> T add(T, T);
    template <class T> T reduce (T, T);
    ~CCalc();
};

CCalc::CCalc(){
}

/*
int CCalc::add(int a, int b){
    return a+b;
}
*/

template <typename T> T CCalc::add(T a, T b){
    std::cout<< typeid(a).name()<< " ";
    return (a+b);
}

template <class T> T CCalc::reduce(T a, T b){
    std::cout<< typeid(a).name()<< " ";
    return (a-b);
}

CCalc::~CCalc(){
}

int main (int argc, char *argv[]){

    CCalc *calc = new CCalc();
    std::cout<< calc->add<int>(3,5)<<"\n";
    std::cout<< calc->add<float>(3.6,5.2)<<"\n";
    std::cout<< calc->reduce<int>(5,1)<<"\n";
    std::cout<< calc->reduce<float>(5.1,1.3)<<"\n";
    int a=3,b=2;
    std::cout<< calc->reduce<int>(a,b)<<"\n";
    delete calc;

    return 0;
}
