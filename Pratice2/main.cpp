#include<iostream>
#include<string>

using namespace std;

template<typename T1, typename T2>
bool IsBigger(T1 a,T2 b)
{
    return a>b;
}


bool IsBigger(string a, string b)
{
    return a.size()>b.size();
}

// template<typename T1, int len>
// void print_array(T1 (*A)[len])
// {
//         for (int i =0; i<len; i++)
//     {
//         cout<<A[i]<<" ";
//     }
//     cout<<endl;
// }


template<typename T1>
void print_array(T1 *A, int len)
{
    for (int i =0; i<len; i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

void print_array(string A, int len)
{
    for (int i =0; i<len; i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

template<typename T>
class Data
{
    private:
        T A;
        T B;
    public:
        void set_data(T,T);
        T get_data();
        bool IsBigger();
        //bool IsBigger(string , string);
        template<typename T2> T2 sum(T ,T);

};

template <typename T>
void Data<T>::set_data(T a, T b)
{
    A=a; B=b;
}

template <typename T>
T Data<T>::get_data()
{
    cout<< A<<" "<<B<<endl;
}

template <typename T>
bool Data<T>::IsBigger()
{
    return A>B;
}


template <typename T>
template <typename T2>
T2 Data<T>::sum(T a, T b)
{
    return a+b;
}


int main() {


    return 0;
}