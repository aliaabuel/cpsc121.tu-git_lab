// Simi Chacon
// Count the number of characters in a file

#include <iostream>
#include <string>

using namespace std;

void count_char();

void count_char()
{
    string my_string;
    ifstream inFile;
    int i=0;
    
    inFile.open("my_text.txt");
    
    if(inFile.is_open())
    {
        while (getline(inFile, my_char)
               {
                   cout<< my_char.length()<< endl;
                   i += my_char.length();
               }
                inFile.close();
    }
    
}
