//Library that gives basic commands on c++
#include <iostream>
#include <ctime>

int main(){

    std::srand(std::time(0));
    /*
    int random_num = std::rand();

    std::cout<<"random_num: "<< random_num << std::endl;


     random_num = std::rand();

    std::cout<<"random_num: "<< random_num << std::endl;

    for (size_t i = 0; i < 20; i++)
    {
       random_num = std::rand();
        std::cout<<"random_num: "<< random_num << std::endl;
    }

    
    random_num = std::rand()%11;
    std:: cout << " ------------------------------------ "<<std::endl;
    std::cout<<"random_num: "<< random_num << std::endl;

    */
    std:: cout << " ------------------------------------ "<<std::endl;
    int random_num = std::rand()%11;
    
    for (size_t i = 0; i < 20; i++)
    {
        random_num = std::rand()%11;
        
        std::cout<<"random_num "<<i<<": "<< random_num << std::endl;
    }
    

}