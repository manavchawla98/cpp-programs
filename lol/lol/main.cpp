#include <iostream>
#include <stdlib.h>

using namespace std;



int convertToIntArray(int argc, char* argv[], int inputVoltages[])
{
    int j=0, count=0 ;
    
    if(argc>22)
    {
        return -22 ;
    }
    if(argc==1 || argc==2)
    {
        return 0 ;
    }
    
    for(int i=2 ; i<argc && count>=0 ; i++)
    {
        if((int(argv[i][j])>=48 && int(argv[i][j])<=57) || (int(argv[i][j])==45))
        {
            int number=0 ;
            number = atoi(argv[i]) ;
            inputVoltages[i-2] = number ;
            count++ ;
        }
        else
        {
            count = -(count) ;
        }
    }
    return count;
}



int slideAvg(int inputVoltages[], int sampleSize, int windowSize, float slidingAverage[])
{
    int z = sampleSize - windowSize + 1 ;
    int sum ;
    for(int i=0 ; i<z ; i++)
    {
        sum=0 ;
        for(int j=0 ; j<windowSize ; j++)
            sum+= inputVoltages[i+j] ;
        slidingAverage[i] = sum/windowSize ;
    }
    return z ;
}


void displayHistogram(int numElements, float array[])
{
    float d = 0;
    cout << "100V------105V------110V------115V------120V------125V------130V------135V------140V" <<endl;
    for (int g=0;g<numElements;g++)
    {
        if(array[g]<100)
            cout << "!"<<endl;
        if(array[g]<=140)
        {
            d = array[g] - 100;
            d = d*2;
            for(int f=0;f<=d;f++)
            {
                cout << "#";
            }
            cout <<endl;
        }
        if(array[g]>140)
        {
            for(int d=0;d<81;d++)
            {
                cout << "#";
            }
            cout << "+" <<endl;
        }
    }
}

void displayHistogramInt(int numElements, int array[])
{
    float d = 0;
    cout << "100V------105V------110V------115V------120V------125V------130V------135V------140V" <<endl;
    for (int g=0;g<numElements;g++)
    {
        if(array[g]<100)
            cout << "!"<<endl;
        if(array[g]<=140){
            d = array[g] - 100;
            d = d*2;
            for(int f=0;f<=d;f++)
            {
                cout << "#";
            }
            cout <<endl;
        }
        if(array[g]>140){
            for(int d=0;d<81;d++)
            {
                cout << "#" ;
            }
            cout << "+" <<endl;
        }
    }
}



int main(int argc, char* argv[])
{
    int sampleSize = argc-2;
    int inputVoltages[sampleSize] ;
    
    int returnval=convertToIntArray(argc, argv, inputVoltages) ;
    if(returnval==-22)
    {cerr << "Error: Too many arguments.";}
    else if(returnval==0)
        cerr << "Error.";
    else{
        int windowSize = atoi(argv[1]) ;
        if(windowSize < 1 || windowSize>sampleSize)
        {
            cerr << "Error invalid window size";
            return -1;
        }
        
        float slidingAverage[sampleSize-windowSize+1] ;	
        
        int runs;
        runs = slideAvg(inputVoltages,sampleSize,windowSize,slidingAverage) ;
        
        displayHistogramInt(sampleSize, inputVoltages);
        displayHistogram(runs, slidingAverage);
    }
    
    return 0 ;
}




