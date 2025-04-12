//     #include<iostream>
//     #include<fstream>

//     using namespace std;

//     int main(){

//       fstream file("newfilevariable.txt",ios::in|ios::out|ios::ate);

//       file<<"Writing Into The FIle :"<<endl;

//       file.clear();

//       file.seekg(4,ios::beg);

//       char ch;

//       cout<<"\nThe Read Character :"<<ch<<endl;

// file.clear();

//       file.seekp(2,ios::beg);

//       file<<"XXY";

//       string line;

//       file.clear();

//       while(getline(file,line)){
//         cout<<endl<<line;
//       }
       
//        file.close();

//         return 0;
//     }



#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    // Open the file in read-write mode without truncation and pointer initially at the end
    fstream file("newfilevariable.txt", ios::in | ios::out | ios::trunc);

    if (!file) {
        cout << "Error: File could not be opened." << endl;
        return 1;
    }

    // Write data into the file
    file << "Writing Into The File:" << endl;

    // Reset flags and move to a specific position for reading
    file.clear();
    file.seekg(5, ios::beg); // Move to the 4th byte from the beginning

    // Read a character at the current position
    char ch;
    file.get(ch);
    cout << "\nThe Read Character: " << ch << endl;

    // Reset flags and move to a specific position for writing
    file.clear();
    file.seekp(6, ios::beg); // Move to the 2nd byte from the beginning

    // Overwrite content with "XXY"
    file << "XXY";

    // Reset flags and move to the beginning for reading the whole file
    file.clear();
    file.seekg(0, ios::beg); // Move to the beginning of the file

    // Read and display the file content line by line
    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }

    // Close the file
    file.close();
    return 0;
}


    