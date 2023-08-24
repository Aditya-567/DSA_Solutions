//**************************************copying content form one file to another file using c++*************************************//

#include<fstream> //***for ifstream   and   ofstream
#include<iostream>
using namespace std;
class FileCopy
{
    char src[30],des[30],ch;
    ofstream fout; //*** for writing file
    ifstream fin; //*** for reading file

public:
    void doFileCopy()
        {
            cout<<"Enter the file name to read:";
            cin.getline(src,30); //*enter the name of the file which you want to open as source file(src) like :-todays.txt

            fin.open(src,ios::in); //*only try to open the file-read mode

            if(fin.fail()) //*checks the existance of the file that file is present or not ..
            {
                cout<<"File not found";
                return;
            }
            cout<<"Enter the file name to write:";
            cin.getline(des,30); //*select the name of dstination file on which you want ot copy the data from source file ..

            fout.open(des,ios::app); //*open/create file / if file is present it will create the new file ..
            while(!fin.eof()) //*checks end of file
            {
                ch=fin.get(); //*reading from file
                fout<<ch; //*writing in file/copy file

                cout<<ch; //*writin on screen / show the copied data from source file
            }
            cout<<"File copied.....";


        }

       ~FileCopy() //*destructor
       {  //*releasing the resources
           fin.close();
           fout.close();
           cout<<"\n\n\nFiles closed...";
       }
};
    int main()
        {
            FileCopy obj;
            obj.doFileCopy();
        }
