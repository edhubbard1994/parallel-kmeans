#include <iostream>
#include <vector>
#include <omp.h>



#define PROBLEM_SIZE 10

using std::cin;
using std::cout;

template<typename T>
void kmeans(std::vector<T> data,T m1, T m2) {
    int i1,i2,i3,t1,t2;
    int size = data.size();
    T k0[size];
    std::copy(v.begin(), v.end(), k0);
    T k1[size];
    T k2[size];
 
 
      
    T om1,om2;    //old means
 
    do
    {
     
    //saving old means
    om1=m1;
    om2=m2;
 
    //creating clusters
    i1=i2=i3=0;
    for(i1=0;i1<size;i1++)
    {
        //calculating distance to means
        t1=k0[i1]-m1;
        if(t1<0){t1=-t1;}
 
        t2=k0[i1]-m2;
        if(t2<0){t2=-t2;}
 
        if(t1<t2)
        {
            //near to first mean
            k1[i2]=k0[i1];
            i2++;
        }
        else
        {
            //near to second mean
            k2[i3]=k0[i1];
            i3++;
        }
 
    }
 
    t2=0;
    //calculating new mean
    for(t1=0;t1<i2;t1++)
    {
        t2=t2+k1[t1];
    }
    m1=t2/i2;
 
    t2=0;
    for(t1=0;t1<i3;t1++)
    {
        t2=t2+k2[t1];
    }
    m2=t2/i3;
 
    //printing clusters
    cout<<"\nCluster 1:";
    for(t1=0;t1<i2;t1++)
    {
        cout<<k1[t1]<<" ";
    }
    cout<<"\nm1="<<m1;
 
    cout<<"\nCluster 2:";
    for(t1=0;t1<i3;t1++)
    {
        cout<<k2[t1]<<" ";
    }
    cout<<"\nm2="<<m2;
 
    cout<<"\n ----";
    }while(m1!=om1&&m2!=om2);
 
    cout<<"\n Clusters created";
 
    //ending
}



int main (int argc, char **argv) {
     


    return 0;
}