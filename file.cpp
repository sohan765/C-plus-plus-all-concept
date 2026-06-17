#include<iostream>
#include<fstream>
using namespace std;
class Hello{
    public:
    /* file :-> collection of data and information
    two types : binary
                text
                file management system
                -> FMS is usa to  manage and store the files

                different os use to  manage and store files
                window = NTFS( new technolgy file system)
                FAT(file allocation table)

                mac 
                APFS(apple file system)
                linux
                ext3 and axt4

                EXTENSION = it is use too idenntify the which type of data store in the file
                            .mp3 = audio
                            .mp4 = video
                            .txt = text
                            .py , .cpp = problem solving



               write : 
               ofsteam
               Read :
               ifstream

      csv : comma seperated value
    */

};
int main()
{
    ofstream file("corona.csv");
    if(!file)
    {
        cout<<"file is not found "<<endl;
    }
    file<<"file is creating using is using c++"<<endl;
    file<<" hello this is written by sohan "<<endl;
    file<<"city,dose1,dose2,dose3"<<endl;
    file<<"";
    file.close();
    cout<<"data is written suceessfully";
    return 0;
}