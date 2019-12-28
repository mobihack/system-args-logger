#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>

using namespace std;

void WriteLogFile(string args){

    std::ofstream out("LogFile.txt", ios::out | ios::app);
    out << args+"\n";
    out.close();

}
int main(int argc, char **argv){
	if( argc > 0){
		int i;
		string argList = argv[0];
		for(i=1; i<argc;i++){
            argList = argList + " " + argv[i];
		}
		if(argList.find("reboot") != std::string::npos or argList.find("continue") != std::string::npos){
                cout << "Oh OH";
            }else{
                string str ="fastboot1.exe";
                str=str+argList;
                const char *command = str.c_str();
                cout<<str;
                system(command);
            }
		WriteLogFile(argList);
    }
}
