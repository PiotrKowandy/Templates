#include <iostream>
#include <string>


template <typename My_type>
class CElement{

public:
    CElement();
    CElement(My_type x);
    My_type show_element();
    My_type add_element();
   /* My_type add_element(){
        return this->element+3;
    }*/
    ~CElement();
private:
    My_type element;
};

template <typename My_type>
CElement<My_type>::CElement(){
}

template<typename My_type>
CElement<My_type>::CElement(My_type x){
    this->element=x;
}

template <typename My_type>
My_type CElement<My_type>::show_element(){

    return this->element;
}

template<typename My_type>
My_type CElement<My_type>::add_element(){
    return this->element+3;
}

template<typename My_type>
CElement<My_type>::~CElement(){
}

int main (int argc, char *argv[]){

    CElement<int> first(5);
    std::cout<<"first element ever: " << first.show_element() << "\n";

    CElement<double> second(4.6);
    std::cout<< "second element: " << second.show_element() << "\n";

    std::cout<< "element + 3: " << second.add_element() << "\n";
    return 0;
}
