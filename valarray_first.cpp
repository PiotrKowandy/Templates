#include <iostream>
#include <valarray>

const int elements = 11;

template <typename T>
T sum(T a, T b){
    return a+b;
}

template <typename T>
void adding(T &my_array){
    for (int i=0; i < elements; i++){
        std::cout<< "my_array[" << i <<"] = " << my_array[i] << "\n";
        my_array[i] = sum(my_array[i], my_array[i]);
    }
}

int main (int argc, char *argv[]){

    std::valarray<int> array_of_int(1, elements);
    std::cout<<"First element is: " << array_of_int[0] << "\n\n";
    adding(array_of_int);

    std::cout<< "Number of elements: " << array_of_int.size() << "\n";
    std::cout<< "Sum of all elements: " << array_of_int.sum() << "\n";
    std::cout<< "Max of all elements: " << array_of_int.max() << "\n";
    std::cout<< "Min of all elements: " << array_of_int.min() << "\n\n";

    std::valarray<double> array_of_double(1.3, elements);
    std::cout<<"First element is: " << array_of_double[0] << "\n\n";
    adding(array_of_double);

    std::cout<< "Number of elements: " << array_of_double.size() << "\n";
    std::cout<< "Sum of all elements: " << array_of_double.sum() << "\n";
    std::cout<< "Max of all elements: " << array_of_double.max() << "\n";
    std::cout<< "Min of all elements: " << array_of_double.min() << "\n";

    return 0;
}
