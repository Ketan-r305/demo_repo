#include<iostream>
#include<string>
using namespace std;


template <class T>
class Maths {

    T a, b;

    public:
        Maths(T x, T y) {
            a = x;
            b = y;
        }

        T maxValue();
};

template <class T>
T Maths<T>::maxValue() {
    return (a > b ? a : b);
}
int main() {

    Maths<int> obj (8,9);
    cout<<obj.maxValue()<<'\n';

    Maths<float> obj1 (8.25f,9.26f);
    cout<<obj1.maxValue()<<'\n';

    Maths<double> obj2(9.54845,10.265);
    cout<<obj2.maxValue()<<'\n';

}