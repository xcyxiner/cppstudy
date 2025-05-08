#include "util.h"
 void inputOutDemo(){
    char buf[10]{};
    // std::cin>>buf;
    // std::cout<<buf<<std::endl;
    
    // std::cin>>std::setw(10)>>buf;
    // std::cout<<buf<<std::endl;

    // char ch{};
    // while (std::cin.get(ch))
    // {
    //     std::cout<<ch;
    // }

    std::string strBuf{};
    std::getline(std::cin,strBuf);
    std::cout<<strBuf<<std::endl;
}
void iosDemo(){
    // std::cout<<std::showpos<<5<<std::endl;
    // std::cout<<std::noshowpos<<5<<std::endl;
    // std::cout<<std::hex<<27<<std::endl;
    // std::cout<<std::dec<<27<<std::endl;
    std::cout<<std::oct<<27<<'\n';
    std::cout << std::resetiosflags(std::ios_base::basefield) << 27 << '\n';
    std::cout.fill('*');
    std::cout<<std::setw(10)<<-12345<<'\n';
    std::cout<<std::setw(10)<<std::left<<-12345<<std::endl;
}