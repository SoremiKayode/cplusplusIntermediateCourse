#include <iostream>
#include <fstream>

using namespace std;
int main(){
/*
To work with file in c++, you need to two libraries
- iostream
- fstream

the iostream library allow you to take input and output
the fstream library allow you to work with the file

There are three classes in the fstream library
ofstream : it allows you to create and read a file
ifstream : it allows you to read a file
fstream : is the combination of both ofstream and fstream, that
is you can create, read and write to file

*/

/* to create and write to a file*/
const char *text = 
"In moonlight's gentle, silvery embrace,\n \
Stars above, a twinkling cosmic grace. \n \
Whispers of the night, secrets it keeps,\n \
Nature's lullaby, as the world softly sleeps.";

// create the file
ofstream myFile("newFile.txt");
// write to the file
myFile << text;
// close the file after writing
myFile.close();

/* reading a file */
string filetext; // create a string to store the content of the file
// read the content of the file
ifstream fileContent("newFile.txt");

/* check if the file is open then
loop through the file line by line, assign 
each line to the filetext variable and print it out
*/
if(fileContent.is_open()) {
while (getline(fileContent, filetext)){
cout << filetext << endl;
}
}

fileContent.close();

return 0;
}