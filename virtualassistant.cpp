#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <string>
#include <ctime>

using namespace std;
//function to wish user according to time
void wishme(){
time_t now=time(0);
tm *time=localtime(&now);
if(time->tm_hour<12){
    cout<<"Good Morning Boss"<<endl;
    string phrase="Good Morning Boss";
        string command="espeak \"" +phrase + "\"";  
        const char *charCommand=command.c_str();
        system(charCommand);
}
else if(time->tm_hour>=12 && time->tm_hour<=16){
    cout<<"Good Afternoon Boss"<<endl;
    string phrase="Good Afternoon Boss";
        string command="espeak \"" +phrase + "\"";  
        const char *charCommand=command.c_str();
        system(charCommand);
}
else if(time->tm_hour>16 && time->tm_hour<24){
    cout<<"Good Evening Boss"<<endl;
      string phrase="Good Evening Boss";
        string command="espeak \"" +phrase + "\"";  
        const char *charCommand=command.c_str();
        system(charCommand);
}
}
void datetime(){
    time_t now=time(0);
    char *dt=ctime(&now);
    cout<<"The date and time is "<<endl<<dt<<endl;
    }
int main()
{
    system("cls");
    cout<<"------------------------------------------------------------------------------WELCOME------------------------------------------------------------------------------";
    cout<<"------------------------------------------------------------------------IM VIRTUAL ASSISTANT -----------------------------------------------------------------------";
    cout<<"------------------------------------------------------------------------------WELCOME------------------------------------------------------------------------------";
    cout<<"--------------------------------------------------------------------------LET ME HELP YOU!------------------------------------------------------------------------------";
    cout<<"\n\n\n";
    char password[20];          //to take password
    char ch[100];               //to take command from the user
    do{
        cout<<"**********************"<<endl;
        cout<<" ENTER YOUR PASSWORD  "<<endl;
        cout<<"**********************"<<endl;     
        string phrase="enter your password";
        string command="espeak \"" +phrase + "\"";  
        const char *charCommand=command.c_str();
        system(charCommand);

        gets(password);

        STARTUPINFO startInfo ={0};
        PROCESS_INFORMATION processInfo={0};
        cout<<endl;
        if(strcmp(password,"athul123")==0){
            cout<<"Authenticating....."<<endl;
            wishme();
            do{
                cout<<endl<<"ASK ME ANYTHING...."<<endl<<endl;
               
                gets(ch);
                cout<<endl;
                if(strcmp(ch,"hi")==0||strcmp(ch,"hey")==0||strcmp(ch,"hello")==0||strcmp(ch,"good morning")==0||strcmp(ch,"good afternoon")==0||strcmp(ch,"good evening")==0){
                    cout<<"Hi There.How can I help you"<<endl;
                 string phrase="Hi There.How can I help you";
                string command="espeak \"" +phrase + "\"";  
                const char *charCommand=command.c_str();
                system(charCommand);
                }

                else if(strcmp(ch,"bye")==0||strcmp(ch,"stop")==0||strcmp(ch,"exit")==0||strcmp(ch,"good night")==0){
                    cout<<"Good Bye...!!\nTurning Off..."<<endl;
                    string phrase="Good Bye Turning Off";
                string command="espeak \"" +phrase + "\"";  
                const char *charCommand=command.c_str();
                system(charCommand);
                    exit(0);                }

                else if(strcmp(ch,"who are you")==0||strcmp(ch,"tell me about yourself")==0||strcmp(ch,"may i know you")==0){
                    cout<<"I am a personal assistant created by Athul"<<endl;
                      string phrase="I am a personal assistant created by Athul";
                string command="espeak \"" +phrase + "\"";  
                const char *charCommand=command.c_str();
                system(charCommand);
                                  }
                else if(strcmp(ch,"how are you")==0||strcmp(ch,"whatsup")==0||strcmp(ch,"how you doing")==0){
                    cout<<"I'm having a good day"<<endl;
                         string phrase="I'm having a good day";
                string command="espeak \"" +phrase + "\"";  
                const char *charCommand=command.c_str();
                system(charCommand);
                                  }
                else if(strcmp(ch,"thank you")==0||strcmp(ch,"thanks")==0||strcmp(ch,"ok")==0){
                    cout<<"I'm happy to help you.."<<endl;
                     string phrase="I'm happy to help you";
                string command="espeak \"" +phrase + "\"";  
                const char *charCommand=command.c_str();
                system(charCommand);
                                  }
                else if(strcmp(ch,"date")==0||strcmp(ch,"time")==0||strcmp(ch,"time now")==0){
                    string phrase="Here is the date and time";
                string command="espeak \"" +phrase + "\"";  
                const char *charCommand=command.c_str();
                system(charCommand);
                    datetime();

                                  }
                else if(strcmp(ch,"open notepad")==0){
                    cout<<"opening notepad..."<<endl;
                    string phrase="opening notepad";
                string command="espeak \"" +phrase + "\"";  
                const char *charCommand=command.c_str();
                system(charCommand);
                    CreateProcess(TEXT("C:\\Windows\\notepad.exe"),NULL,NULL,NULL, FALSE,NULL,NULL,NULL,&startInfo,&processInfo);
                                  }
                else if(strcmp(ch,"open google")==0){
                    cout<<"opening google..."<<endl;
                        string phrase="opening google";
                string command="espeak \"" +phrase + "\"";  
                const char *charCommand=command.c_str();
                system(charCommand);
                    system("start https://www.google.com");
                                  }
                else{
                    cout<<"Sorry..I couldnt catch you..."<<endl;
                    string phrase="Sorry I couldn't catch you";
                string command="espeak \"" +phrase + "\"";  
                const char *charCommand=command.c_str();
                system(charCommand);
                }
            }while(1);

        }
        else{
            cout<<"Incorrect Password"<<endl;
            string phrase="Incorrect Password";
                string command="espeak \"" +phrase + "\"";  
                const char *charCommand=command.c_str();
                system(charCommand);
        }

    }while(1);
    return 0;
}