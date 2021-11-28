#include<iostream>


using namespace std;
struct list {
    char name[20];
    int age;
    double height;
    list *next;
};

list *first = NULL, *current = NULL; // Init current to NULL so you can test whether current is set at all

int optn = 0;

void currentfor() {
    if(current == NULL) {
        cout << "You don't have any members yet!" << endl;
    } else {
        if (current->next == NULL)
            cout << "This is the end of the list." << endl;
        else
            current = current->next;
    }
}

void currentbac() {
    if (current == first)
        cout << "This is the beginning of the list." << endl;
    else {
        list *previous;
        previous = first;
        while (previous->next != current) {
            previous = previous->next;
        }
        current = previous;
    }
}

void addbeginning() {
    list *newlist;
    
    newlist = new list;
    cout << "Enter your name:" ;
    cin >> newlist->name;
    cout << "Enter your age:" ;
    cin >> newlist->age;
    cout << "Enter your height:" ;
    cin >> newlist->height;
    newlist->next = first;
    first = newlist;
    
    if(current == NULL) // Set the current pointer to first, because this is the first element you add
        current = first;
}

void addending() {
    list *newlist, *newlist2;
    
    newlist = new list;
    cout << "Enter your name: ";
    cin >> newlist->name;
    cout << "Enter your age : ";
    cin >> newlist->age;
    cout << "Enter your height : ";
    cin >> newlist->height;
    newlist->next = NULL;
    
    if (first == NULL) {
        first = newlist;
        current=first;
    } else {
        newlist2 = first;
        while (newlist2->next != NULL) {
            newlist2 = newlist2->next;
        }
        newlist2->next = newlist;
    }
}
void addmiddle() {
    if (current->next == NULL) // You were assigning here. Use == instead of = or you will assign NULL to
        // current->next! Which is incorrect.
        addending();
    else {
        list *newlist;
        newlist = new list;
        cout << "Enter your name:" ;
        cin >> newlist->name;
        cout << "Enter your age:" ;
        cin >> newlist->age;
        cout << "Enter your height:" ;
        cin >> newlist->height;
        
        newlist->next = current->next;
        current->next = newlist;
    }
}

void deletebegin() {
    list *newlist;
    newlist = first;
    first = first->next;
    
    // You need to update the current pointer first
    if(newlist == current) {
        current = current->next;
    }
    
    delete newlist;
}

void deletemiddle() {
    list *newlist;
    newlist = first;
    
    // If we delete the first element
    if(current == first) {
        list *deleteMe = first;
        first = first->next;
        
        delete deleteMe;
        current = current->next;
    } else { // Otherwise
        // Search until newlist->next == current
        // Als test for newlist != NULL or you will try to get a next value from NULL -> crash!
        while(newlist != NULL && newlist->next != current)
            newlist = newlist->next;
        
        if(newlist != NULL) {
            delete newlist->next;
            newlist->next = current->next; // Also update the next from the previous node in the list! Or it will not disappear when displaying
            
            if (current->next == NULL) // You did it again here. Use == for comparing values instead of =
                current = first; // It doesn't mean that you don't have to delete if
            // you don't have a current->next. If you don't have a current->next,
            // just set it to first. The element does need to be deleted.
            else
                current = current->next;
        }
    }
}

void deleteend() {
    list *newlist, *newlist2;
    
    if (first == NULL)
        cout << "End of list" << endl;
    else {
        newlist = first;
        
        if (newlist->next == NULL) {
            delete newlist;
            first = NULL;
            current = NULL; // Current should also be null
        } else {
            while (newlist->next != NULL) {
                newlist2 = newlist;
                newlist = newlist->next;
            }
            
            delete newlist;
            newlist2->next = NULL;
            current = newlist2; // You forgot to update the current pointer.
        }
    }
}

void display() {
    list *newlist;
    
    newlist = first;
    cout << endl;
    
    do {
        if (newlist == NULL)
            cout << "End of List" << endl;
        else
        {
            cout << "Name is: " << newlist->name << " ";
            cout << "Age is: " << newlist->age << " ";
            cout << "Height is: " << newlist->height;
            
            if(current == newlist) // You need to check whether you really are at the current position
                cout<<" <-- Current position ";
            
            cout<< endl;
            newlist = newlist->next;
        }
    }
    while(newlist!=NULL);
    
    if(newlist != NULL) // What if the newList was initially NULL? You will print twice.
        cout << "End of list" << endl;
}


int main(void) {
    first=NULL;
    
    do {
        display();
        cout << endl;
        cout << "Choose an option: " << endl;
        cout << "1. Move the current position forward once." << endl;
        cout << "2. Move the current position backwards once." << endl;
        cout << "3. Add a member at the beginning of the list." << endl;
        cout << "4. Add a member at the current position of the list." << endl;
        cout << "5. Add a member at the ending of the list." << endl;
        cout << "6. Delete the first member from the list." << endl;
        cout << "7. Delete the member at current position from the list." << endl;
        cout << "8. Delete the last member from the list." << endl;
        cout << "9. End program." << endl;
        cout << endl << " >> " ;
        cin >> optn;
        switch (optn) {
            case 1 : currentfor();
                break;
            case 2 : currentbac();
                break;
            case 3 : addbeginning();
                break;
            case 4 : addmiddle();
                break;
            case 5 : addending();
                break;
            case 6 : deletebegin();
                break;
            case 7 : deletemiddle();
                break;
            case 8 : deleteend();
                break;
        }
    }
    while (optn!= 9);
}