#include<iostream>
#include<string>
using namespace std;

template<typename T>
class Array
{
    private:
        T* A;
        int len;
    public:
        void set_alldata(T*, int );
        void get_alldata();
        void get_data_index(int );
        //void append(T);
        ~Array(){delete [] A;}
        
};

template<typename T>
void Array<T>::set_alldata(T* a, int _len)
{
    len=_len;
    A=new T(len);
    for (int i=0; i<len; i++)
    {
        A[i]=a[i];
    }
}

template<typename T>
void Array<T>::get_alldata()
{
    for (int i =0; i<len; i ++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

template<typename T>
void Array<T>::get_data_index(int _a)
{
    
}
int main() {
    Array<int> _array;
    int a[3]={1,2,3};
    
    _array.set_alldata(&a[0],3);
    _array.get_alldata();

    
    return 0;
}
