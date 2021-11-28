//
//  main.cpp
//  Hospital
//
//  Created by Manav Chawla on 1/16/15.
//  Copyright (c) 2015 Manav Chawla. All rights reserved.
//

#include <iostream>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <string>
#include <stdlib.h>
#include <iomanip>
using namespace std;

struct patient
{
    int id;
    char name[100];
    int age;
    char sex[10];
    char disease[100];
    int ward;
}record[100];

patient exist1 = {111, "Yashraj Duggal", 18, "M", "Pneumonia", 1};
patient exist2 = {112, "Cassandra Periera", 16, "F", "Syphillis", 4};
patient exist3 = {113, "Athul Prasanth", 69, "M", "AIDS", 10};
patient exist4 = {114, "Nimrah Shaikh", 23, "F", "Influenza", 9};
patient exist5 = {115, "Mukul Kumar", 49, "M", "Rabies", 1};




void input();
void id(int);
void name(int);
void disease(int);
void ward(int);
void existing();
void idexist(int);
void nameexist(int);
void diseaseexist(int);
void wardexist(int);
void modify();
void deleteit ();

int x;


int main ()

{
    
    
    int ans;
   
    cout<<"************************************************************"<<endl;
    cout<<"*          WELCOME TO JUPITER HOSPITAL 🏥                  *"<<endl;
    cout<<"************************************************************"<<endl;
    
    cin.ignore();
    cout << endl << endl;
    while(1)
    {
    cout<<"*************************************************************"<<endl;
    cout<<"*	       HOSPITAL MANAGEMENT SYSTEM                      *"<<endl;
    cout<<"************************************************************"<<endl;
    cout<<"*	                  MENU                                 *"<<endl;
    cout<<"************************************************************"<<endl;
    cout<<"*	     	                                               *"<<endl;
    cout<<"* Maintenance:                                             *"<<endl;
    cout<<"*                                                          *"<<endl;
    cout<<"*	1 - View record	                                       *"<<endl;
    cout<<"*	2 - Add record	                                       *"<<endl;
    cout<<"*	3 - Modify record		                               *"<<endl;
    cout<<"*	4 - Delete record	          	     	               *"<<endl;
    cout<<"*	                                                       *"<<endl;
    cout<<"*							                               *"<<endl;
    cout<<"*	5 - Exit					                           *"<<endl;
    cout << endl << endl;
    
    cout << "Enter your choice (1-5) : ";
    cin >> ans;
    switch(ans)
    {
        case 1:
            existing();
            break;
        case 2 :
            input();
            break;
        case 3 :
            modify();
            break;
        case 4 :
            deleteit();
            break;
        case 5 :
            cout << "Okay, shutting down.. " << endl << endl;
            exit(0);
            break;
    }
    }
}

// Input as 2



void input()
{
    int x;
    char ans;
    int n;
    cout << "How many records do you want to enter? ";
    cin >> n;
    ::x=n;
    cin.ignore();
    cout << endl << endl;
   for (int i=0; i<n; i++)
    {
        cout << "Enter patient ID : ";
        cin >> record[i].id;
        cin.ignore();
        
        cout << "Enter the patient's name : ";
        cin.getline(record[i].name, 100);
        
        cout << "Enter the gender : ";
        cin.getline(record[i].sex, 10);
        
        cout << "Enter the age of the patient : ";
        cin >> record[i].age;
        cin.ignore();
        
        cout << "Enter the disease he/she is suffering from : ";
        cin.getline(record[i].disease, 100);
        
        cout << "Enter the ward : ";
        cin >> record[i].ward;
        cin.ignore();
        
        cout << endl << endl;
        
    }
    cout << "Here are the records you just entered : " << endl << endl;
    
    
    for (int i=0; i<n; i++)
    {
       cout << "Record " << i << " : " << endl;
        cout << "Patient ID : " << record[i].id<< endl;
        cout << "Patient Name : " << record[i].name << endl;
        cout << "Patient Gender : " << record[i].sex << endl;
        cout << "Patient Age : " << record[i].age << endl;
        cout << "Disease patient is suffering from : " << record[i].disease<< endl;
        cout << "Ward the patient is in : " << record[i].ward << endl << endl << endl;
    }
    int a;
    int y;
    
        cout << "Do you want to search the records for a particular patient? (Y/N) : ";
        cin >> ans;
        if ((ans=='y') || (ans=='Y'))
        {
            cout << "What information about the patient do you have with you? " << endl << "1- ID" << endl<< "2-Name" << endl << "3-Disease" << endl << "4-Ward" << endl;
            cin >> a;
            switch(a)
            {
                case 1 :
                    id(n);
                    break;
                case 2 :
                    name(n);
                    break;
                case 3 :
                    disease(n);
                    break;
                case 4 :
                    ward(n);
                    break;
                default :
                    cout << "Wrong input." << endl;
                    cout << "Do you want to go back to the previous menu, or exit the program?" << endl << "Enter 1 to go back, or 2 to exit : ";
                    cin >> y;
                    
                    if (y==1)
                        return;
                    else if (y==2)
                    {
                        cout << "Okay, shutting down.. ";
                        exit(0);
                        
                    }

                    
            }
        }
    
    else if(ans=='N' || ans=='n')
    {
        cout << "Do you want to go back to the previous menu, or exit the program?" << endl << "Enter 1 to go back, or 2 to exit : ";
        cin >> x;
        
        if (x==1)
            return;
        else if (x==2)
        {
            cout << "Okay, shutting down.. "<< endl << endl;
            exit(0);
            
        }
                }

        
    }

void id(int n)
{
    int x;
    int flag=0;
    int id;
    cout << "Enter the ID of the patient : ";
    cin >> id;
    for (int i=0; i<n; i++)
    {
        if (record[i].id==id)
        {
            flag=1;
            cout << "Record Found. " << endl;
            cout << "Patient Name : " << record[i].name << endl;
            cout << "Patient Age : " << record[i].age << endl;
            cout << "Patient Sex : " << record[i].sex << endl;
            cout << "Disease suffering from : " << record[i].disease << endl;
            cout << "Patient is in ward " << record[i].ward << endl << endl;
        }
        if (flag==0)
        {
            cout << "Record not found." << endl << endl;
        }

       
        
            }
    
    cout << "Do you want to go back to the previous menu, or exit the program?" << endl << "Enter 1 to go back, or 2 to exit : ";
    cin >> x;
    
    if (x==1)
        return;
    else if (x==2)
    {
        cout << "Okay, shutting down.. " << endl << endl;
        exit(0);
        
    }


    
}

void name(int n)
{
    int x;
    int flag=0;
    char name[100];
    cout << "Enter the name of the patient you are looking for : ";
    cin.getline(name,100);
    for (int i=0; i<n; i++)
    {
        if (record[i].name==name)
        {
            flag=1;
            cout << "Record found.";
            cout << "Patient ID : " << record[i].id << endl;
            cout << "Patient Age : " << record[i].age << endl;
            cout << "Patient Sex : " << record[i].sex << endl;
            cout << "Disease suffering from : " << record[i].disease << endl;
            cout << "Patient is in ward " << record[i].ward << endl;
        }
        

    }
    if (flag==0)
    {
        cout << "Record not found."<< endl<< endl;
    }

    cout << "Do you want to go back to the previous menu, or exit the program?" << endl << "Enter 1 to go back, or 2 to exit : ";
    cin >> x;
    
    if (x==1)
        return;
    else if (x==2)
    {
        cout << "Okay, shutting down.. "<< endl<< endl;
        exit(0);
        
    }
    


}

void disease (int n)
{
    int x;
    int c=0;
    int flag=0;
    char disease[1000];
    cout << "Enter the disease the patient is suffering from : ";
    cin.getline(disease,100);
    
    for (int i=0; i<n; i++)
        if (record[i].disease==disease)
            c++;
    if (c!=0)
    {
        cout << c << " Record(s) found." << endl << endl;
    }

    for (int i=0; i<n; i++)
    {
    if (record[i].disease==disease)
        {
            flag=1;
            
             cout << "Patient ID : " << record[i].id << endl;
            cout << "Patient Name : " << record[i].name << endl;
            cout << "Patient Age : " << record[i].age << endl;
            cout << "Patient Sex : " << record[i].sex << endl;
            cout << "Patient is in " << record[i].ward << endl;
            cout << "Disease suffering from : " << record[i].disease << endl;
        }

       
    }
    if (flag==0)
    {
        cout << "Record not found.";
    }

    cout << "Do you want to go back to the previous menu, or exit the program?" << endl << "Enter 1 to go back, or 2 to exit : ";
    cin >> x;
    
    if (x==1)
        return;
    else if (x==2)
    {
        cout << "Okay, shutting down.. "<< endl<< endl;
        exit(0);
        
    }
    


    

}

void ward(int n)

{
    int x;
    int ward;
    int c=0;
    int flag=0;

    cout << "Enter the ward of the patient : ";
    cin >> ward;
    for (int i=0; i<n; i++)
    {
            if (record[i].ward==ward)
            c++;
    }
    
    if (c!=0)
    {
        cout << c << " Record(s) found." << endl << endl;
    }
    
    for (int i=0; i<n;i++)
    {
        if (record[i].ward==ward)
        {
            flag=1;
            
            cout << "Patient ID : " << record[i].id << endl;
            cout << "Patient Name : " << record[i].name << endl;
            cout << "Patient Age : " << record[i].age << endl;
            cout << "Patient Sex : " << record[i].sex << endl;
            cout << "Disease suffering from : " << record[i].disease << endl << endl;
        }

    }
    if (flag==0)
    {
        cout << "Record not found.";
    }
    
    cout << "Do you want to go back to the previous menu, or exit the program?" << endl << "Enter 1 to go back, or 2 to exit : ";
    cin >> x;
    
    if (x==1)
        return;
    else if (x==2)
    {
        cout << "Okay, shutting down.. "<< endl<< endl;
        exit(0);
        
    }

   
}

// Input as 1

void existing()
{
    int x;
    int a;
    cout << "What information about the patient do you have with you? " << endl << "1- ID" << endl<< "2-Name" << endl << "3-Disease" << endl << "4-Ward" << endl;
    cin >> a;
    switch(a)
    {
        case 1 :
            idexist(::x);
            break;
        case 2 :
            nameexist(::x);
            break;
        case 3 :
            diseaseexist(::x);
            break;
        case 4 :
            wardexist(::x);
            break;
        default :
            cout << "Wrong input.";
            
     }
    
    cout << "Do you want to go back to the previous menu, or exit the program?" << endl << "Enter 1 to go back, or 2 to exit : ";
    cin >> x;
    
    if (x==1)
        return;
    else if (x==2)
    {
        cout << "Okay, shutting down.. "<< endl<< endl;
        exit(0);
        
    }
    
}



void idexist(int n)
{
    int x;
    int flag=0;
    int id;
    cout << "Enter the ID of the patient : ";
    cin >> id;
    for (int i=0; i<n; i++)
    {
        if (record[i].id==id)
        {
            flag=1;
            cout << "Record Found. " << endl;
            cout << "Patient Name : " << record[i].name << endl;
            cout << "Patient Age : " << record[i].age << endl;
            cout << "Patient Sex : " << record[i].sex << endl;
            cout << "Disease suffering from : " << record[i].disease << endl;
            cout << "Patient is in " << record[i].ward << endl<< endl;
        }
        
        }
    
    if (exist1.id==id)
    {
        flag=1;
        cout << "Record Found. " << endl;
        cout << "Patient Name : " << exist1.name << endl;
        cout << "Patient Age : " << exist1.age << endl;
        cout << "Patient Sex : " << exist1.sex << endl;
        cout << "Disease suffering from : " << exist1.disease << endl;
        cout << "Patient is in " << exist1.ward << endl<< endl;
        
    }
    
    else if(exist2.id==id)
    {
        flag=1;
        cout << "Record Found. " << endl;
        cout << "Patient Name : " << exist2.name << endl;
        cout << "Patient Age : " << exist2.age << endl;
        cout << "Patient Sex : " << exist2.sex << endl;
        cout << "Disease suffering from : " << exist2.disease << endl;
        cout << "Patient is in " << exist2.ward << endl<< endl;
        
    }
    
   else if  (exist3.id==id)
    {
        flag=1;
        cout << "Record Found. " << endl;
        cout << "Patient Name : " << exist3.name << endl;
        cout << "Patient Age : " << exist3.age << endl;
        cout << "Patient Sex : " << exist3.sex << endl;
        cout << "Disease suffering from : " << exist3.disease << endl;
        cout << "Patient is in " << exist3.ward << endl<< endl;
        
    }

   else if (exist4.id==id)
   {
       flag=1;
       cout << "Record Found. " << endl;
       cout << "Patient Name : " << exist4.name << endl;
       cout << "Patient Age : " << exist4.age << endl;
       cout << "Patient Sex : " << exist4.sex << endl;
       cout << "Disease suffering from : " << exist4.disease << endl;
       cout << "Patient is in " << exist4.ward << endl<< endl;
       
   }
    
   else if (exist5.id==id)
    {
        flag=1;
        cout << "Record Found. " << endl;
        cout << "Patient Name : " << exist5.name << endl;
        cout << "Patient Age : " << exist5.age << endl;
        cout << "Patient Sex : " << exist5.sex << endl;
        cout << "Disease suffering from : " << exist5.disease << endl;
        cout << "Patient is in " << exist5.ward << endl<< endl;
        
    }




    if (flag==0)
    {
        cout << "Record not found."<< endl<< endl;
    }
    
   

    
    
}

void nameexist(int n)
{
    int flag=0;
    char name[100];
    cin.ignore();
    cout << "Enter the name of the patient you are looking for : ";
    
    cin.getline(name,100);
    cin.ignore();
    for (int i=0; i<n; i++)
    {
        if (strcmp(record[i].name,name)==0)
        {
            flag=1;
            cout << "Record found.";
            cout << "Patient ID : " << record[i].id << endl;
            cout << "Patient Age : " << record[i].age << endl;
            cout << "Patient Sex : " << record[i].sex << endl;
            cout << "Disease suffering from : " << record[i].disease << endl;
            cout << "Patient is in ward " << record[i].ward << endl<< endl;
        }
    }
    if (strcmp(exist1.name,name)==0)
    {
        flag=1;
        cout << "Record Found. " << endl;
        cout << "Patient Name : " << exist1.name << endl;
        cout << "Patient Age : " << exist1.age << endl;
        cout << "Patient Sex : " << exist1.sex << endl;
        cout << "Disease suffering from : " << exist1.disease << endl;
        cout << "Patient is in " << exist1.ward << endl<< endl;
        
    }
    
    else if(strcmp(exist2.name,name)==0)
    {
        flag=1;
        cout << "Record Found. " << endl;
        cout << "Patient Name : " << exist2.name << endl;
        cout << "Patient Age : " << exist2.age << endl;
        cout << "Patient Sex : " << exist2.sex << endl;
        cout << "Disease suffering from : " << exist2.disease << endl;
        cout << "Patient is in " << exist2.ward << endl<< endl;
        
    }
    
    else if  (strcmp(exist3.name,name)==0)
    {
        flag=1;
        cout << "Record Found. " << endl;
        cout << "Patient Name : " << exist3.name << endl;
        cout << "Patient Age : " << exist3.age << endl;
        cout << "Patient Sex : " << exist3.sex << endl;
        cout << "Disease suffering from : " << exist3.disease << endl;
        cout << "Patient is in " << exist3.ward << endl<< endl;
        
    }
    
    else if (strcmp(exist4.name,name)==0)
    {
        flag=1;
        cout << "Record Found. " << endl;
        cout << "Patient Name : " << exist4.name << endl;
        cout << "Patient Age : " << exist4.age << endl;
        cout << "Patient Sex : " << exist4.sex << endl;
        cout << "Disease suffering from : " << exist4.disease << endl;
        cout << "Patient is in " << exist4.ward << endl<< endl;
        
    }
    
    else if (strcmp(exist5.name,name)==0)
    {
        flag=1;
        cout << "Record Found. " << endl;
        cout << "Patient Name : " << exist5.name << endl;
        cout << "Patient Age : " << exist5.age << endl;
        cout << "Patient Sex : " << exist5.sex << endl;
        cout << "Disease suffering from : " << exist5.disease << endl;
        cout << "Patient is in " << exist5.ward << endl<< endl;
        
    }
    
    
    
    
    if (flag==0)
    {
        cout << "Record not found."<< endl<< endl;
    }
    
    
    

}

void diseaseexist (int n)
{
    int x;
    int c=0;
    int flag=0;
    char disease[1000];
    cout << "Enter the disease the patient is suffering from : ";
    cin.getline(disease,100);
    
    for (int i=0; i<n; i++)
        if (record[i].disease==disease)
            c++;
    if (c!=0)
    {
        cout << c << " Record(s) found." << endl << endl;
    }
    
    for (int i=0; i<n; i++)
    {
        if (record[i].disease==disease)
        {
            flag=1;
            
            cout << "Patient ID : " << record[i].id << endl;
            cout << "Patient Name : " << record[i].name << endl;
            cout << "Patient Age : " << record[i].age << endl;
            cout << "Patient Sex : " << record[i].sex << endl;
            cout << "Patient is in " << record[i].ward << endl;
            cout << "Disease suffering from : " << record[i].disease << endl<< endl;
        }
    }
    if(strcmp(exist1.disease,disease)==0)
    {
        flag=1;
        cout << "Record Found. " << endl;
        cout << "Patient Name : " << exist1.name << endl;
        cout << "Patient Age : " << exist1.age << endl;
        cout << "Patient Sex : " << exist1.sex << endl;
        cout << "Disease suffering from : " << exist1.disease << endl;
        cout << "Patient is in " << exist1.ward << endl<< endl;
        
    }
    
    else if(strcmp(exist2.disease,disease)==0)
    {
        flag=1;
        cout << "Record Found. " << endl;
        cout << "Patient Name : " << exist2.name << endl;
        cout << "Patient Age : " << exist2.age << endl;
        cout << "Patient Sex : " << exist2.sex << endl;
        cout << "Disease suffering from : " << exist2.disease << endl;
        cout << "Patient is in " << exist2.ward << endl<< endl;
        
    }
    
    else if  (strcmp(exist3.disease,disease)==0)
    {
        flag=1;
        cout << "Record Found. " << endl;
        cout << "Patient Name : " << exist3.name << endl;
        cout << "Patient Age : " << exist3.age << endl;
        cout << "Patient Sex : " << exist3.sex << endl;
        cout << "Disease suffering from : " << exist3.disease << endl;
        cout << "Patient is in " << exist3.ward << endl<< endl;
        
    }
    
    else if (strcmp(exist4.disease,disease)==0)
    {
        flag=1;
        cout << "Record Found. " << endl;
        cout << "Patient Name : " << exist4.name << endl;
        cout << "Patient Age : " << exist4.age << endl;
        cout << "Patient Sex : " << exist4.sex << endl;
        cout << "Disease suffering from : " << exist4.disease << endl;
        cout << "Patient is in " << exist4.ward << endl<< endl;
        
    }
    
    else if (strcmp(exist5.disease,disease)==0)
    {
        flag=1;
        cout << "Record Found. " << endl;
        cout << "Patient Name : " << exist5.name << endl;
        cout << "Patient Age : " << exist5.age << endl;
        cout << "Patient Sex : " << exist5.sex << endl;
        cout << "Disease suffering from : " << exist5.disease << endl;
        cout << "Patient is in " << exist5.ward << endl<< endl;
        
    }

    if (flag==0)
    {
        cout << "Record not found."<< endl<< endl;
    }
    
    


    
    
    
}

void wardexist(int n)

{
    int x;
    int ward;
    int c=0;
    int flag=0;
    
    cout << "Enter the ward of the patient : ";
    cin >> ward;
    for (int i=0; i<n; i++)
    {
        if (record[i].ward==ward)
            c++;
    }
    
    if (c!=0)
    {
        cout << c << " Record(s) found." << endl << endl;
    }
    
    for (int i=0; i<n;i++)
    {
        if (record[i].ward==ward)
        {
            flag=1;
            
            cout << "Patient ID : " << record[i].id << endl;
            cout << "Patient Name : " << record[i].name << endl;
            cout << "Patient Age : " << record[i].age << endl;
            cout << "Patient Sex : " << record[i].sex << endl;
            cout << "Disease suffering from : " << record[i].disease << endl << endl << endl;
        }
        
    }
    
    if (exist1.ward==ward)
    {
        flag=1;
        cout << "Record Found. " << endl;
        cout << "Patient Name : " << exist1.name << endl;
        cout << "Patient Age : " << exist1.age << endl;
        cout << "Patient Sex : " << exist1.sex << endl;
        cout << "Disease suffering from : " << exist1.disease << endl;
        cout << "Patient is in " << exist1.ward << endl<< endl;
        
    }
    
    else if(exist2.ward==ward)
    {
        flag=1;
        cout << "Record Found. " << endl;
        cout << "Patient Name : " << exist2.name << endl;
        cout << "Patient Age : " << exist2.age << endl;
        cout << "Patient Sex : " << exist2.sex << endl;
        cout << "Disease suffering from : " << exist2.disease << endl;
        cout << "Patient is in " << exist2.ward << endl<< endl;
        
    }
    
    else if  (exist3.ward==ward)
    {
        flag=1;
        cout << "Record Found. " << endl;
        cout << "Patient Name : " << exist3.name << endl;
        cout << "Patient Age : " << exist3.age << endl;
        cout << "Patient Sex : " << exist3.sex << endl;
        cout << "Disease suffering from : " << exist3.disease << endl;
        cout << "Patient is in " << exist3.ward << endl<< endl;
        
    }
    
    else if (exist4.ward==ward)
    {
        flag=1;
        cout << "Record Found. " << endl;
        cout << "Patient Name : " << exist4.name << endl;
        cout << "Patient Age : " << exist4.age << endl;
        cout << "Patient Sex : " << exist4.sex << endl;
        cout << "Disease suffering from : " << exist4.disease << endl;
        cout << "Patient is in " << exist4.ward << endl<< endl;
        
    }
    
    else if (exist5.ward==ward)
    {
        flag=1;
        cout << "Record Found. " << endl;
        cout << "Patient Name : " << exist5.name << endl;
        cout << "Patient Age : " << exist5.age << endl;
        cout << "Patient Sex : " << exist5.sex << endl;
        cout << "Disease suffering from : " << exist5.disease << endl;
        cout << "Patient is in " << exist5.ward << endl<< endl;
        
    }

    if (flag==0)
    {
        cout << "Record not found."<< endl<< endl;
    }
    
    

}

// Input as 3


void modify ()

{
    
    int x;
int i;
int flag=0;
int ID;
char choice;

cout<<"Enter Patient ID: ";
cin>>ID;

for(i=0;i<x;i++)
{
    if(ID==record[i].id)
    {
        flag=1;
        
        cout<<endl<<"RECORD FOUND"<<endl<<endl;
        cout<<"Name:"<<record[i].name<<endl;
        cout<<"Modify patient name?(Y/N): ";
        cin>>choice;
        cin.ignore();
        
        if(choice=='Y')
        {
            cout<<"Enter new patient name: ";
            cin.getline(record[i].name,50);
            
            cout<<endl;
            cout<<endl<<"RECORD MODIFIED"<<endl << "New patient name : " << record[i].name <<endl<< endl;
        }
        else if ((choice=='N')||(choice=='n'))
        cout<<endl<<"RECORD NOT MODIFIED"<<endl<<endl;
        
        cout<<"Ward no.: "<<record[i].ward<<endl;
        cout<<"Modify Ward no.?(Y/N): ";
        cin>>choice;
        
        if ((choice=='Y')||(choice=='y'))
        {
            cout<<"Enter new ward no.: ";
            cin>>record[i].ward;
            
            cout<<endl;
            cout<<"RECORD MODIFIED"<<endl << "New Ward : " << record[i].ward;
        }
        else if ((choice=='N')||(choice=='n'))
        cout<<endl<<"RECORD NOT MODIFIED"<<endl;
        
        }
        }
        
        if(flag==0)
        cout<<endl<<"RECORD NOT FOUND"<<endl<< endl;
    
    cout << "Do you want to go back to the previous menu, or exit the program?" << endl << "Enter 1 to go back, or 2 to exit : ";
    cin >> x;
    
    if (x==1)
        return;
    else if (x==2)
    {
        cout << "Okay, shutting down.. "<< endl<< endl;
        exit(0);
        
    }
    

    
    
        }

// Input as 4

void deleteit ()
{
    int x;
    int i, j;
    int flag=0;
    int ID;
    char choice;
    
    cout<<"Enter Patient ID:";
    cin>>ID;
    
    for(i=0;i<x;i++)
    {
        if(ID==record[i].id)
        {
            flag=1;
            
            cout<<endl<<"RECORD FOUND"<<endl<<endl;
            
            cout<<"Name    : "<< record[i].name<<endl;
            cout<<"Ward No.: "<<record[i].ward<<endl<< endl;
            
            
            cout<<"Are you sure you want to delete this record?(Y/N): ";
            cin>>choice;
            
            if((choice=='Y')|| (choice=='y'))
            {
                for(j=i;j<x-2;j++)
                    record[j]=record[j+1];
                
                x--;
                
                cout<<endl<<"RECORD DELETED"<<endl<< endl;
            }
            
            if((choice=='N')||(choice=='n'))
                cout<<endl<<"RECORD NOT DELETED"<<endl<< endl;
            break;
        }
    }
    
    if(flag==0)
        cout<<endl<<"RECORD NOT FOUND"<<endl<< endl<< endl;
    
    cout << "Do you want to go back to the previous menu, or exit the program?" << endl << "Enter 1 to go back, or 2 to exit : ";
    cin >> x;
    
    if (x==1)
        return;
    else if (x==2)
    {
        cout << "Okay, shutting down.. "<< endl<< endl;
        exit(0);
        
    }
    

}


