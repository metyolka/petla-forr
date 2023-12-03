#include <iostream>

using namespace std;

int main()
{
    int sz;
    int wys;
    cout<<"Podaj szerokosc:" << endl;
    cin>>sz;
    cout<<"Podaj wysokosc:" << endl;
    cin>>wys;
    

   
   cout << " |";
    for (int i = 1; i <= sz; ++i) {
        cout << "   "<< i;
    }
    cout << "\n-----------------------------------\n";

    for (int i = 1; i <= wys; ++i) {
        cout<<endl;
        cout << i << '|';

        for (int j = 1; j <= sz; ++j) {
            cout << ' ' <<"  "<< i * j;
             
        }
        cout << " |";
        
        
    }
   
   
    cout << "\n-----------------------------------\n";

       cout <<endl;
    return 0;
}