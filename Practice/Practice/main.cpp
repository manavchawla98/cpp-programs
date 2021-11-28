#include<iostream>
#include<fstream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;
class student
{
    char name[20];
    int rollno;
    float marks;
    char grade;
    public :
    void getdata();
    int getroll();
    void showdata();
    void modifydata(int);
    
}s;

void student::modifydata(int a)
{
    char newname[20];
    if(a==1)
    {
        cin.ignore();
        cout << "Enter new name : ";
        cin.getline(newname,20);
        strcpy(name,newname);
        cout << "Modified" << endl;
        
    }
}

int student::getroll()
{
    return rollno;
}

void student::showdata()
{
    cout << "Name : ";
    puts(name);
    cout << "Roll no : " << rollno << endl;
    cout << "Marks : "<< marks << endl;
    cout << "Grade : " << grade << endl;
}

void student::getdata()
{
    cin.ignore();
    
    cout << "Enter name : ";
    cin.getline(name,20);
    
    cout << "Enter roll no : ";
    cin >> rollno;
    cout << "Enter marks : ";
    cin >> marks;
    cout << "Enter grade : ";
    cin >> grade;
    
}
//***************************************

void add();
void deletes();
void modify();
void show();

//***************************************

int main()
{
    int x;
   
    
    while(1)
    {
        cout << "What do you want to do?"<< endl << "Press the following keys : ";
        cout << endl << "1. To add data" << endl;
        cout <<"2. To delete " << endl;
        cout << "3. To modify " << endl;
        cout << "4. To show contents " << endl;
        cout << "5.To exit " << endl;
        
        cin >> x;
        
        switch(x)
        {
            case 1:
                add();
                break;
            case 2 :
                deletes();
                break;
            case 3 :
                modify();
                break;
            case 4 :
                show();
                break;
            case 5 :
                exit(0);
                
                
        }
        
    }
    
    
    
    

}

void add()
{
    int n;
    ofstream f;
    f.open("test.dat", ios::app | ios::binary | ios::out);
    cout << "How many records?";
    cin >> n;
    for(int i=0;i<n; i++)
    {
        s.getdata();
        f.write((char*)&s,sizeof(s));
    }
    
    f.close();
}

void show()
{
    
    ifstream f;
    f.open("test.dat", ios::binary | ios::in );
    
    while(f.read((char*)&s, sizeof(s)))
    {
        
        s.showdata();
        cout << endl << endl;
    }
    
    f.close();
}

void deletes()
{
    ifstream f;
    f.open("test.dat", ios::binary);
    ofstream fo;
    fo.open("temp.dat", ios::binary);
    int roll;
    cout << "Enter the roll number of the record : ";
    cin >> roll;
    
    while(f.read((char*)&s, sizeof(s)))
    {
        if((s.getroll()==roll))
           {
            cout <<  endl <<" Record found!  Deleting Record.. " << endl << endl;
           }
        
           else
           {
               fo.write((char*)&s, sizeof(s));
               
           }
    }
    
    f.close();
    fo.close();
    
    remove("test.dat");
    rename("temp.dat", "test.dat");
    
}

void modify()
{
    int roll;
    cout << "Enter the roll no to modify : ";
    cin >> roll;
    long pos;
    fstream f;
    f.open("test.dat", ios::in | ios::out | ios::binary);
    f.seekg(0);
    while(f.eof()==0)
    {
        pos=f.tellg();
        f.read((char*)&s, sizeof(s));
        
        if(s.getroll()==roll)
        {
            
            cout << endl << "Record found .. ";
            cout << endl << "What do you want to change? " << endl;
            cout << "press 1 for name" << endl;
            s.modifydata(1);
            f.seekp(pos);
            f.write((char*)&s, sizeof(s));
            
        }
        
        
    }
    
}
