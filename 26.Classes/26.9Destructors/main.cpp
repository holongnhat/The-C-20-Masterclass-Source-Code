#include <iostream>
#include <string_view>

class Dog{
    public : 
        Dog() = default;
        Dog(std::string_view name_param, std::string_view breed_param, int  age_param);
        ~Dog();

    private : 
        std::string name;
        std::string breed;
        int * p_age{nullptr};
};

Dog::Dog(std::string_view name_param, std::string_view breed_param, int  age_param){
    name = name_param;
    breed = breed_param;
    p_age = new int; // giá trị của biến p_age được lưu vào vùng nhớ heap
    *p_age = age_param;
    std::cout << "Dog CONSTRUCTOR called for " << name << std::endl;
}

Dog::~Dog(){ 
    delete p_age;
    std::cout << "Dog DESTRUCTOR called for : " << name << std::endl;
}

void some_func(){
    Dog* p_dog = new Dog("Fluffy","Shepherd",2); 
    // ("Fluffy", "Shepherd", 2) được lưu vào vùng nhớ heap.
    delete p_dog;// Causes for the destructor of Dog to be called
}



int main(){ 

    some_func();
    

    std::cout << "Done!" << std::endl;
    return 0;
}
