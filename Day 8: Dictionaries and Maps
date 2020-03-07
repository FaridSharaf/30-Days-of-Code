#include <cmath>
#include <cstdio>
#include <iostream>
#include <map>
using namespace std;


int main() {
    int n;
    std::string name;
    std::map<std::string, int> phoneBook;

    std::cin >> n;
    for(int i =0; i< n; i++)
    {
        std::cin >> name >> phoneBook[name];
    }

    while(std::cin >> name)
    {
        if(phoneBook.find(name) == phoneBook.end())
            std::cout << "Not found" <<std::endl;
        else
            std::cout << name << "=" << phoneBook[name] << std::endl;
    }
    return 0;
}
