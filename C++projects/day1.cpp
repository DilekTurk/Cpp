#include <iostream>

/*namespace first{
    int x = 1;
}
namespace second{
    int x = 2;
}*/
int main(){
    //Ha Ha. using namespace std may be bad. using std::cout etc. may be a better option.
    //using namespace second
    //typedef std::string text_t;      when the data type is too long, you can give it a new name.Instead of using typedef keyword, you can use "using" keyword.Because it is more efficient.
    // using text_t = std::string;
    /*
       Arithmetic operations are the same with Java. Also, the type conversion is the same.
       Hi.      You know variable types.
    */
  /* int x = 5;
   int y = 6;
   const double PI = 3.14; //const = final(java) No one can change this value.
   std::string name = "Kerimcan";//You need to add std:: for strings.

    std::cout<<"OMG"<<std::endl;
    std::cout<<name<<'\n';
    std::cout<<x+y<<'\n';
    std::cout<<first::x;
    std::cout<<x;*/

    std::string name;
    int age;

    std::cout<<"What is your full name?";
    std::getline(std::cin, name);  //When you use cin before getline, you need to add >>std::ws to the getline function.

    std::cout<<"What is your age?";
    std::cin>>age;

    std::cout<<"Your fullname is "<<name<<'\n';
    std::cout<<"Your age is "<<age<<".";

    /*
    z=std::max(x,y);
    z=std::min(x,y);
    z=pow(2,4);
    z=abs(-4);
    z=sqrt(4);
    z=round(x);
    z=ceil(x);
    z=floor(x);


    */



    return 0;
}