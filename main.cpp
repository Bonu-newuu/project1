#include <iostream>
using namespace std;
/*
//problem 1
    int main() {
   cout << "Hello World!" << endl;
   string name;
   cout << "Please enter your name: ";
   cin >> name;
   cout << "Your name is: " << name << endl;
int age;
   cout <<"Enter your age: ";
   cin>>age;
   cout <<"Your age is:  "<<age<<endl;
   return 0;
}*/
#include <iomanip>
#include <iostream>
  using namespace std;
/*
 //problem 2
    int main() {
    for (int i = 1; i <= 5; ++i) {
        cout <<setw(5)<<i<<endl;
    }
    return 0;
}*/

#include <iostream>
using namespace std;

/*
//problem 3
int main() {
    int x, y;
    cout << "Please enter the integer";
    cin >> x >> y;

    int temp = x;
    x = y;
    y = temp;

    cout << "Swapped numbers are " << " x  = " << x << ", y = " <<  y << endl;

    return 0;

}*/
 //problem 4
/*int main (){
int n;

cout << "Enter the number";
cin >> n;

cout << setw(5) << "Number" << setw(5) <<"Square" << endl;

for (int i = 1; i<=n; i++) {
    cout << setw(10) << i << setw(10) << i * 1 << endl;
}
return 0;
}*/
//problem 5
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    cin.ignore();
    getline(cin, str);
    cout << setw(50) << setiosflags(ios::left) << str << endl;

    return 0;
}