//
//  main.cpp
//  Local E-Mail Platform
//
//  Created by Satej Mhatre on 10/4/14.
//  Copyright (c) 2014 Satej Mhatre. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <iomanip>class Credentials{
    char Password[100];
public:
    char user[100];
    char* getPass(){
            return Password;
        }
    void putPassword(char ch[])
    {
            strcpy(Password, ch);
        }
};

class Email{
private:
        char SendersAddress[100];
public:
        Email(){
                strcpy(SendersAddress, "");
                strcpy(RecieversAddress, "");
                strcpy(TheMessage, "");
                strcpy(Subject, "");
                ReadCount=0;
        
            }
        void putFrom(char From[]){
                strcpy(SendersAddress, From);
            }
        char* getFromAddress(){
                return SendersAddress;
            }
        int ReadCount;
        char Subject[1000];
        char TheMessage[2000];
        char RecieversAddress[100];
};


void PressEnterToContinue();
void CreateAdmin();
int CheckLogin(char[], char[]);
int LoginMenu();
void NewAccount();
int CheckEmail(char[]);
void SendEmail(char* , char* , Email , Email [100], int , int);
void SendEmail(char*, char*, Email);
void ForwardEmail(Email[100], int, int);
void DeleteEmail(Email[100], int , int );
void ReplyEmail(Email[100], int, int);
void MarkUnread(Email[], int, int);
void EmailActions(Email[], int, int);
void ShowEmail(Email);
void ShowInbox(char*);
void Logout(char[]);
void ComposeEmail(char[]);
int main();


char globalUser[100];
void PressEnterToContinue()
{
        cout << "\n\nPress enter to continue...";
        cin.ignore();
        cin.ignore();
        for (int i=0; i<100; i++) {
                cout << endl;
            }
    
}

int CheckLogin(char UserName[], char Password[])
{
        ifstream File;
        Credentials Credentials1;
        File.open("Accounts.dat", ios::binary);
        while (File.read((char*)&Credentials1, sizeof(Credentials1))) {
                if (strcmp(Credentials1.user,UserName)==0) {
                        if (strcmp(Credentials1.getPass(),Password)==0) {
                                cout << "Login Successful";
                                strcpy(globalUser, Credentials1.user);
                                PressEnterToContinue();
                                return 0;
                            }
                    }
            }
        cout << "\n\nThe username or password is incorrect\n\n";
        PressEnterToContinue();
        File.close();
        return 10;
}

int LoginMenu(){
        cout << "CMail Login" << endl;
        cout << "Enter username : ";
        char Username[100];
        cin >> Username;
        cout << "Enter Password : ";
        char Password[100];
        cin >> Password;
        int check = CheckLogin(Username,Password);
        return check;
}

void NewAccount()
{
    
        ofstream File;
        CreateAdmin();
        Credentials Creds;
        char UserName[100], Password[100];
        while (strlen(UserName)<8) {
                cout << "\nPlease enter your new user name(Minimum 8 characters) : ";
                cin >> UserName;
                if (strlen(UserName)>8) {
                        ifstream file;
                        file.open("Accounts.dat", ios::binary);
                        while (file) {
                                file.read((char*)&Creds, sizeof(Creds));
                                if (strcmp(Creds.user, UserName)==0) {
                                        cout << "\nThis username already exists. Please enter a new one.";
                                        PressEnterToContinue();
                                        NewAccount();
                                        return;
                                    }
                            }
                        file.close();
                        strcpy(Password,"\0");
                        while (strlen(Password)<8) {
                                cout << "\nPlease enter your new password(Minimum 8 characters) : ";
                                cin >> Password;
                                if (strlen(Password)>8) {
                                        break;
                                    }
                                else
                                        cout << "\nPlease enter something more than 8 characters";
                
                            }
                    }
                else{
                        cout << "\nPlease enter something more than 8 characters";
                        NewAccount();
                        return;
                    }
        
            }
    
    
    
        char Password_Verify[100];
        int IncorrectVerifyCounter=0;
        while (strlen(UserName)>8) {
                cout << "\nPlease reenter your new password for verification : ";
                cin >> Password_Verify;
                if (strcmp(Password_Verify, Password)==0) {
                        break;
                    }
                else
                        cout << "\nPlease enter the password you had entered before";
                IncorrectVerifyCounter++;
                if (IncorrectVerifyCounter>3) {
                        cout << "\nDo you want to restart this process? (Y/N) : ";
                        char RestartQ;
                        cin >> RestartQ;
                        if (RestartQ=='y'|RestartQ=='Y') {
                                NewAccount();
                                return;
                            }
                        else if (RestartQ=='n'|RestartQ=='N'){
                                cout << "\nThen please enter the password for verification. You will be asked again.";
                                continue;
                
                            }
                    }
            }
    
        strcpy(Creds.user, UserName);
        Creds.putPassword(Password);
        File.open("Accounts.dat", ios::binary|ios::app);
        File.write((char*)&Creds, sizeof(Creds));
        File.close();
        char FileName[104];
        strcpy(FileName, UserName);
        strcat(FileName, ".dat");
        File.open(FileName, ios::binary|ios::app);
        Email WelcomeEmail;
        char WelcomeSubject[50];
        strcpy(WelcomeSubject, "Welcome To CMail, ");
        strcat(WelcomeSubject, UserName);
        char RecieversEmail[100];
        strcpy(RecieversEmail, UserName);
        strcat(RecieversEmail, "@cmail.com");
        strcpy(WelcomeEmail.RecieversAddress, RecieversEmail);
        char SendersEmail[100];
        strcpy(SendersEmail, "admin@cmail.com");
        WelcomeEmail.putFrom(SendersEmail);
        strcpy(WelcomeEmail.Subject, WelcomeSubject);
        WelcomeEmail.ReadCount=0;
        strcpy(WelcomeEmail.TheMessage, "Welcome To CMail, the only mail client where you can send one line emails!\nWe hope you enjoy using CMail!");
    
        File.write((char*)&WelcomeEmail, sizeof(WelcomeEmail));
        cout << "\nCongratulations, "<<UserName << "!\n\n";
        File.close();
}
int CheckEmail(char user[])
{
        ifstream File;
        Credentials Creds;
        int Confirmation;
        int i;
        char UsernameCheck[100];
        for (i=0; user[i]!='@'; i++) {
                if (i==100) {
                        cout << "This CMail email address is invalid";
                        break;
                    }
                UsernameCheck[i] = user[i];
            }
        UsernameCheck[i]='\0';
        i++;
        char cmailcheck[100];
        int j=0;
        while (user[i]!='\0') {
                cmailcheck[j] = user[i];
                i++, j++;
            }
        int x = strcmp(cmailcheck, "cmail.com");
        if (x!=0) {
                cout << "\nI clearly said \"CMAIL EMAIL\"" << endl;
                return 0;
            }
        else{
                File.open("Accounts.dat", ios::binary);
                Confirmation=0;
                while (File.read((char*)&Creds, sizeof(Creds))) {
                        if (strcmp(Creds.user,UsernameCheck)==0) {
                                Confirmation++;
                                break;
                            }
                    }
            }
        return Confirmation;
}
void SendEmail(char* Senders, char* Recievers, Email EmailNew, Email email[100], int UserSelection, int TotalNumberOfEmails)
{
        int i;
        char* temp = new char;
        for (i=0; Recievers[i]!='@'; i++) {
                if (i==100) {
                        cout << "This CMail email address is invalid";
                        return;
                        break;
                    }
                temp[i] = Recievers[i];
            }
        temp[i]='\0';
        strcpy(EmailNew.RecieversAddress, temp);
        delete temp;
        char temp1[100];
        for (i=0; Senders[i]!='@'; i++) {
                if (i==100) {
                        cout << "This CMail email address is invalid";
                        return;
                        break;
                    }
                temp1[i] = Senders[i];
            }
        temp1[i]='\0';
        EmailNew.putFrom(Senders);
        ifstream File;
        char filename[104];
        strcpy(filename, EmailNew.RecieversAddress);
        strcat(filename, ".dat");
        File.open(filename, ios::binary|ios::in);
        fstream TempFile;
        TempFile.open("temp.dat", ios::binary|ios::out);
        i=0;
        Email n;
        while (i<TotalNumberOfEmails) {
                File.read((char*)&n, sizeof(n));
                if (i!=UserSelection) {
                        TempFile.write((char*)&n, sizeof(n));
                    }
                else
                        TempFile.write((char*)&EmailNew, sizeof(EmailNew));
                i++;
            }
        TempFile.close();
        File.close();
        strcat(filename, "Sent.dat");
        fstream SentFile;
        SentFile.open(filename, ios::out|ios::app);
        SentFile.write((char*)&EmailNew, sizeof(Email));
        SentFile.close();
        rename("temp.dat", filename);
        remove("temp.dat");
        //while (!f.eof());
    
    
}
void ForwardEmail(Email e[100], int choice, int numberofemail){
        cout << "Enter the CMail email to forward this message to : ";
        char forwardAddr[100];
        cin >> forwardAddr;
        int a = CheckEmail(forwardAddr);
        if (a==0) {
                cout << "This user does not exist...";
                PressEnterToContinue();
                return;
            }
        else{
                Email NewEmailToBeForwarded;
                char SendersEmail[100],*Subject, Message[1000];
                strcpy(SendersEmail, globalUser);
                strcat(SendersEmail, "@cmail.com");
                NewEmailToBeForwarded.putFrom(SendersEmail);
                Subject=new char;
                strcpy(Subject, "Fwd : ");
                strcat(NewEmailToBeForwarded.Subject, Subject);
                strcat(NewEmailToBeForwarded.Subject, e[choice].Subject);
                delete Subject;
                cout << "Enter your message : ";
                cin.ignore();
        
                cin.getline(Message, 1000);
                strcat(Message, "\n\n-------------Original Message------------\n");
                strcat(NewEmailToBeForwarded.TheMessage, Message);
                strcat(NewEmailToBeForwarded.TheMessage, "From : ");
                strcat(NewEmailToBeForwarded.TheMessage, e[choice].getFromAddress());
                strcat(NewEmailToBeForwarded.TheMessage, "\nTo : ");
                strcat(NewEmailToBeForwarded.TheMessage, e[choice].RecieversAddress);
                strcat(NewEmailToBeForwarded.TheMessage, "@cmail.com\n");
                strcat(NewEmailToBeForwarded.TheMessage, e[choice].TheMessage);
                NewEmailToBeForwarded.ReadCount=0;
                SendEmail(SendersEmail, forwardAddr, NewEmailToBeForwarded, e, choice, numberofemail);
                return;
            }
}
void DeleteEmail(Email e[100], int choice, int numberofemail)
{
        ifstream f;
        char filename[104];
        strcpy(filename, globalUser);
    
        strcat(filename, ".dat");
        f.open(filename, ios::binary|ios::in);
        fstream f1;
        f1.open("temp.dat", ios::binary|ios::out);
        int i=0;
        Email n, m;
        while (f.read((char*)&m, sizeof(m))) {
        
                if (i!=choice) {
                        f1.write((char*)&m, sizeof(m));
                    }
                i++;
            }
        f1.close();
        f.close();
        rename("temp.dat", filename);
        remove("temp.dat");
}
void ReplyEmail(Email e[100], int choice, int TotalEmails)
{
        Email NewEmail;
        char From[100],*sub, Message[1000];
        strcpy(From, globalUser);
        strcat(From, "@cmail.com");
        NewEmail.putFrom(From);
        sub=new char;
        strcpy(sub, "Re : ");
        strcat(NewEmail.Subject, sub);
        strcat(NewEmail.Subject, e[choice].Subject);
        delete sub;
        cout << "Enter your message : ";
        cin.ignore();
    
        cin.getline(Message, 1000);
        strcat(Message, "\n\n-------------Original Message------------\n");
        strcat(NewEmail.TheMessage, Message);
        strcat(NewEmail.TheMessage, "From : ");
        strcat(NewEmail.TheMessage, e[choice].getFromAddress());
        strcat(NewEmail.TheMessage, "\nTo : ");
        strcat(NewEmail.TheMessage, e[choice].RecieversAddress);
        strcat(NewEmail.TheMessage, e[choice].TheMessage);
        strcat(NewEmail.RecieversAddress, e[choice].getFromAddress());
        NewEmail.ReadCount=0;
        cout << NewEmail.getFromAddress() << " " << From;
        SendEmail(From, NewEmail.RecieversAddress, NewEmail, e, choice, TotalEmails);
    
}

void MarkUnread(Email FullInbox[], int choice, int TotalEmails){
        fstream File;
        char filename[104];
        strcpy(filename, globalUser);
        strcat(filename, ".dat");
        File.open(filename, ios::binary|ios::out|ios::trunc);
        FullInbox[choice].ReadCount=0;
        for (int j=0; j<TotalEmails-1; j++) {
                File.write((char*)&FullInbox[j], sizeof(FullInbox[j]));
            }
        File.close();
        cout << endl << "Successfully Marked As Unread" << endl;
        PressEnterToContinue();
}

void EmailActions(Email FullInbox[], int CurrentSelection, int TotalEmails){
        do{
                cout << "\n\n1 - Reply" << endl;
                cout << "2 - Forward" << endl;
                cout << "3 - Delete" << endl;
                cout << "4 - Mark as Unread" << endl;
                cout << "5 - Back to Inbox" << endl;
        
                cout << "Please choose an option to continue : ";
                int choice;
                cin >> choice;
                if (choice==1) {
                        ReplyEmail(FullInbox, CurrentSelection, TotalEmails);
                        return;
                    }
                else if(choice==2){
            
                        ForwardEmail(FullInbox, CurrentSelection, TotalEmails);
            
            
                        return;
                    }
                else if(choice==3){
                        DeleteEmail(FullInbox, CurrentSelection, TotalEmails);
                        return;
                    }
                else if(choice==4){
                        MarkUnread(FullInbox, CurrentSelection, TotalEmails);
                        return;
                    }
                else if(choice==5){
                        ShowInbox(globalUser);
                        return;
                    }
                else
                        cout << "Invalid Option Selected..." << endl << "Please try again\n";
        
            }while (1);
        return;
}
void ShowEmail(Email TheEmail){
        cout << "\n\n\n\n\n\n\n\n\n\n\n";
        cout << "To : " << TheEmail.RecieversAddress << endl;
        cout << "From : " << TheEmail.getFromAddress();
    
        cout << endl << "Subject : " << TheEmail.Subject;
        cout << endl << endl << TheEmail.TheMessage << endl << endl;
}

void ShowInbox(Email E, int i)
{
        cout << i << " - " << E.Subject<<endl;
        i++;
}

void ShowInbox(char* user){
        fstream File;
        Email email[100];
        char filename[104];
        strcpy(filename, user);
        strcat(filename, ".dat");
        File.open(filename, ios::binary|ios::in);
        cout << endl<<endl;
        if (!File) {
                cout << "No emails in your account...";
                PressEnterToContinue();
            }
        else{
                int i=1;
                int unread=0;
        
        
        
                while (File.read((char*)&email[i-1], sizeof(email[i-1]))) {
            
                        if(email[i-1].ReadCount==0){
                                cout << "**";
                                unread++;
                            }
                        cout << i << " - " << email[i-1].Subject<<endl;
            
                        i++;
                    }
                cout << "\nUnread Emails : " << unread << endl;
                cout << "\nPlease choose an email to read or type " << i << " to go back to the main menu : ";
                int choice;
                cin >> choice;
                if (choice==i) {
                        return;
                    }
                else if (choice>i || choice<=0) {
                        cout << "Sorry, that email does not exist...\n\n";
                        PressEnterToContinue();
                        ShowInbox(user);
                        return;
                    }
                else
                    {
                            File.close();
                            File.open(filename, ios::binary|ios::out|ios::trunc);
                            email[choice-1].ReadCount=1;
                            for (int j=0; j<i-1; j++) {
                                    File.write((char*)&email[j], sizeof(email[i]));
                                }
                            File.close();
                            ShowEmail(email[choice-1]);
                            PressEnterToContinue();
                            EmailActions(email, choice-1, i);
                            ShowInbox(globalUser);
                            return;
                        }
            }
}
void Logout(char user[]){
        strcpy(globalUser, "\0");
        cout << "You have been logged out successfully!\n\n";
        PressEnterToContinue();
}
void SendEmail(char* from, char* to, Email e)
{
        int i;
        char* temp = new char;
        for (i=0; to[i]!='@'; i++) {
                if (i==100) {
                        cout << "This CMail email address is invalid";
                        return;
                        break;
                    }
                temp[i] = to[i];
            }
        temp[i]='\0';
        strcpy(e.RecieversAddress, temp);
        delete temp;
        char temp1[100];
        for (i=0; from[i]!='@'; i++) {
                if (i==100) {
                        cout << "This CMail email address is invalid";
                        return;
                        break;
                    }
                temp1[i] = from[i];
            }
        temp1[i]='\0';
        e.putFrom(from);
        ofstream f;
        char filename[104];
        strcpy(filename, e.RecieversAddress);
        strcat(filename, ".dat");
        f.open(filename, ios::binary|ios::out|ios::app);
        f.write((char*)&e, sizeof(e));
        f.close();
        cout << endl << "Email Sent Successfully" << endl;
        PressEnterToContinue();
        //while (!f.eof());
    
    
}
void ComposeEmail(char user[]){
        cout << "Enter the CMail email to send the message to : ";
        char TheRecieversCmail[100];
        cin >> TheRecieversCmail;
        int a = CheckEmail(TheRecieversCmail);
        if (a==0) {
                cout << "This user does not exist...";
                PressEnterToContinue();
                return;
            }
        else{
                Email NewEmail;
                char from[100],*sub, msg[2000];
                strcpy(from, globalUser);
                strcat(from, "@cmail.com");
                NewEmail.putFrom(from);
                sub=new char;
                cout << "Enter the Subject : ";
                cin.ignore();
                cin.getline(sub, 1000);
                strcat(NewEmail.Subject, sub);
                delete sub;
                cout << "Enter your message : ";
                cin.getline(msg, 2000);
                strcpy(NewEmail.TheMessage, msg);
                NewEmail.ReadCount=0;
                SendEmail(from, TheRecieversCmail, NewEmail);
                return;
            }
    
        
}

void CreateAdmin()
{
        Credentials Creds;
        strcpy(Creds.user,"admin");
        char Password[]="adminisawesome";
        Creds.putPassword(Password);
        fstream File;
        File.open("Accounts.dat", ios::binary|ios::app);
        File.write((char*)&Creds, sizeof(Creds));
        File.close();
        char FileName[104];
        strcpy(FileName, "admin");
        strcat(FileName, ".dat");
        File.open(FileName, ios::binary|ios::app);
        Email WelcomeEmail;
        char WelcomeSubject[50];
        strcpy(WelcomeSubject, "Welcome To CMail, ");
        strcat(WelcomeSubject, "Admin");
        char RecieversEmail[100];
        strcpy(RecieversEmail, "admin");
        strcat(RecieversEmail, "@cmail.com");
        strcpy(WelcomeEmail.RecieversAddress, RecieversEmail);
        char SendersEmail[100];
        strcpy(SendersEmail, "admin@cmail.com");
        WelcomeEmail.putFrom(SendersEmail);
        strcpy(WelcomeEmail.Subject, WelcomeSubject);
        WelcomeEmail.ReadCount=0;
        strcpy(WelcomeEmail.TheMessage, "Welcome To CMail, the only mail client where you can send one line emails!\nWe hope you enjoy using CMail!");
    
        File.write((char*)&WelcomeEmail, sizeof(WelcomeEmail));
        File.close();
}

void BrowseAccounts(char User[])
{
        if (strcmp(globalUser, "admin")!=0)
            {
                    cout << "Unauthorized User!\n\n";
                    exit(100);
                }
        else{
                strcpy(globalUser, "admin");
                Credentials Creds;
                fstream File;
                File.open("Accounts.dat", ios::binary|ios::in);
                if (!File) {
                        cout << "Accounts File is not Found" << endl;
                        PressEnterToContinue();
                        return;
                    }
                else{
                        while (File) {
                                File.read((char*)&Creds, sizeof(Creds));
                                cout << "User :     " << Creds.user << endl;
                                cout << "Password : " << Creds.getPass() << endl;
                            }
                        File.close();
                        cout << "Choose an action : \n1 - Login as user\n2 - Delete User\n3 - Create User\n4 - Back to admin menu\n : ";
                        int choice=0;
                        cin >>  choice;
                        if (choice==1) {
                                cout << "Enter the username : ";
                                cin >> User;
                                cout << "Enter password : ";
                                char password[100];
                                cin >> password;
                                int x = CheckLogin(User, password);
                                if (x==0) {
                                        strcpy(globalUser, User);
                                    }
                                return;
                            }
                        else if (choice==2)
                            {
                                    cout << "Enter the username to delete : ";
                                    cin >> User;
                                    cout << "Are you sure you want to delete " << User << "?\n";
                                    char Confirm;
                                    cin >> Confirm;
                                    if (Confirm=='y'||Confirm=='Y') {
                                        File.open("Accounts.dat", ios::binary|ios::in);
                                        if (!File) {
                                                cout << "Accounts File is not Found" << endl;
                                                PressEnterToContinue();
                                                return;
                                            }
                                        else{
                                                fstream Temp("temp.dat", ios::out|ios::binary);
                                                while (File) {
                                                        File.read((char*)&Creds, sizeof(Creds));
                                                        if (strcmp(Creds.user,User)!=0) {
                                                                Temp.write((char*)&Creds, sizeof(Creds));
                                                            }
                                                    }
                                                File.close();
                                                Temp.close();
                                                rename("temp.dat", "Accounts.dat");
                                            }
                                            return;
                                        }
                                }
                        else if (choice==3)
                            {
                                    NewAccount();
                                    return;
                                }
                        else if (choice==4)
                            {
                                    return;
                                }
            
                    }
        
        
            }
}

void ShowSent(char UserName[])
{
        char FileName[104];
        strcpy(FileName, UserName);
        strcat(FileName, ".dat");
        strcat(FileName, "Sent.dat");
        fstream SentFile;
        SentFile.open(FileName, ios::out|ios::app);
        Email EmailNew;
        int i=0;
        if (!SentFile) {
                cout << "No sent Emails." << endl;
                return;
            }
        else{
                while (SentFile) {
                        SentFile.read((char*)&EmailNew, sizeof(Email));
                        if (strcmp(EmailNew.Subject,"\0")==0) {
                                cout << "No sent Emails" << endl << endl;
                                return;
                            }
                        ShowInbox(EmailNew, i);
                        i++;
                    }
        
            }
        SentFile.close();
}

int main(){
        strcpy(globalUser, "\0");
        do
            {
                    if (strcmp(globalUser, "admin")==0) {
                            cout << "Welcome Admin!" << endl;
                            cout << "1 - Show Inbox" << endl;
                            cout << "2 - Compose New Email" << endl;
                            cout << "3 - Browse Users" << endl;
                            cout << "4 - Logout" << endl;
                            cout << "Choose your option : ";
                            int choice;
                            cin >> choice;
                            if (choice==1) {
                                    cout << "Now showing your inbox...\n";
                                    PressEnterToContinue();
                                    ShowInbox(globalUser);
                                }
                            else if (choice==2){
                                    ComposeEmail(globalUser);
                                }
                            else if (choice==3){
                                    BrowseAccounts(globalUser);
                                }
                            else if (choice==4){
                                    Logout(globalUser);
                                }
                
                
                
                        }
                    else if (strcmp(globalUser, "\0")!=0) {
                            cout << "Welcome " << globalUser << endl;
                            cout << "1 - Show Inbox" << endl;
                            cout << "2 - Compose New Email" << endl;
                            cout << "3 - Sent Emails" << endl;
                            cout << "4 - Logout" << endl;
                            cout << "Choose your option : ";
                            int choice;
                            cin >> choice;
                            if (choice==1) {
                                    cout << "Now showing your inbox...\n\n\n";
                                    ShowInbox(globalUser);
                                }
                            else if (choice==3){
                                    ShowSent(globalUser);
                                }
                            else if (choice==2){
                                    ComposeEmail(globalUser);
                                }
                            else if (choice==4){
                                     Logout(globalUser);
                                }
                        }
                    else
                        {
                                cout << "\n\n\nWELCOME TO CMAIL" << endl;
                                cout << "1 - Login to CMail" << endl;
                                cout << "2 - Create new account" << endl;
                                cout << "Choose your option : ";
                                int choice;
                                cin >> choice;
                                if (choice==1) {
                                        LoginMenu();
                                    }
                                else if (choice==2){
                                        NewAccount();
                                    }
                                else
                                        cout << "Invalid Option Selected.";
                    
                            }
            
                } while (1);
        return 0;
}