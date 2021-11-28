#include <iostream>

using namespace std;

int h1,m1,sumh,summin;
class clock
{
    int hour,min;
    public :
    void readtime ();
    void showtime();
    void addtime();
    void data();
    
};

void clock::readtime()
{
    cout << "Give the hours : ";
    cin >> hour;
    cout << "Enter the min : ";
    cin>>min;
    
    
}


void clock::data()
{
    h1=hour;
    m1=min;
}

void clock::addtime()
{
    sumh=h1+hour;
    summin=m1+min;
    if (summin>=60)
    {
        sumh+=1;
        summin=summin%60;
    }
    showtime();
    
}

void clock::showtime()
{
    cout << "Hours : " << sumh << endl;
    cout << "Min : " << summin << endl;
}
int main ()
{
    class clock ft,st;
    ft.readtime();
    ft.data();
    
    st.readtime();
    st.addtime();
    return 0;
    
    
}
