#include <iostream>
//If statements and switch are the same as Java.Ternary is the same as Java.While, doWhile and for are the same.break and continue same.
//name.length()                  //You remember local/global.  ::variablename means use the global.
//name.isempty()
//name.clear()
//name.append("----")            //Arrays and foreach are the same, too.
//name.at(3)
//name.insert(0, "-")            //sizeof(): determines the size in bytes of a variable, data type, class, object, etc. One can find element numbers in an array with this.
//name.find("-")
//name.erase(0,3)

//void NameandAge(std::string name, int age);
int main(){

    std::string students[]={"Bloom","Flora"};
    for(int i=0; i<sizeof(students)/sizeof(std::string);i++){
        std::cout<<students[i]<<'\n';
    }

    /*std::string name="Nerdanel";
    int age=9123;
    NameandAge(name,age);
    NameandAge(name,age);
    NameandAge(name,age);*/



    
    return 0;
}
/*void NameandAge(std::string name, int age){
    std::cout<<"Your name is "<<name<<'\n';
    std::cout<<"Your age is "<<age<<'\n';                   You can overload functions like you did in Java.
}*/
