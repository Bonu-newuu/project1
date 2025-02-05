#include <iostream>
using namespace std;
/*
//problem 1
int main() {
 int a;
 int b;
 int c;
 int d;
 int e;
 cin >> a >> b >> c >> d >> e;
 int sum = a + b + c + d;
 cout <<"Sum is "<< sum << endl;
 return 0;
}*/
/*
//problem 2
int main() {
 int id;
 float gpa;
 int year;
 int study;
 cout << "Studebt ID: " <<endl;
 cout << "Student GPA: " <<endl;
 cout << "Student year of Study: " <<endl;
 cout << "Student study fee: " <<endl;
 cin >> id >> gpa >> year of study >> fee
 return 0;

}*/
/*
//problem 3
int main() {
 float celsius_temp, faranheit_temp;
 cout << "Enter temperature in Calcius:";
 cin >> celsius_temp;
 faranheit_temp = celsius_temp * 9 / 5 + 32;
 cout<<"The temperature in Celsius: " <<celsius_temp <<endl;
 cout<<"The temperature in Fahrengit: " <<faranheit_temp<<endl;

 return 0;
}*/
/*
 //problem 4
int main() {
 double cost_per_item;
 cin >> cost_per_item;
 int quantity;
 cin >> quantity;
 double total_cost = cost_per_item * quantity;
 cout << "Total cost is " << total_cost << endl;
 return 0;

}*/
/*
//problem 5
int main() {
 int age1, age2, age3, age4;
cout << "Enter family members age: ";
 cin >> age1 >> age2 >> age3 >> age4;
 int average = (age1 + age2 + age3 + age4) / 4;
 cout << "Average age is: " << average << endl;
 return 0;
}*/
/*
//problem 6
int main() {
 int lenth;
 cout << "Please enter the lenth of rectangle: ";
 cin >> lenth;
 int width;
 cout << "Please enter the width of rectangle: ";
 cin >>width;
 int A = lenth * width;
 int P = 2 * (lenth+ width);
 cout << " The area of rectangle is: " << A << endl;
 cout << " The perimeter of rectangle is: " << P << endl;
 return 0;
}*/
/*
//problem 7
int main() {
 int dividend, divisor;
 cin >> dividend >> divisor;
 int quotient = dividend / divisor;
 int remainder = dividend % divisor;
 cout << "Input the dividend : " << dividend << endl;
 cout << "Input the divisor: " << divisor << endl;
 cout << "The quotient of the division is: " << quotient << endl;
 cout << "The remainder of the division is: " << remainder << endl;
 return 0;

 }*/
/*
//problem 8
int main() {
 int amount_usd;
 cin >> amount_usd;
 int exchange_rate = 12900;
 int amount_uzs = amount_usd * exchange_rate;
 cout << "Amount in USD: "<< amount_usd << endl;
 cout << "Exchange rate: "<< exchange_rate << endl;
 cout << "Amount UZS: "<< amount_uzs << endl;
 return 0;
}*/
/*
//problem 9
int main() {
 int radius;
 cin >> radius;
 float pi = 3.14159;
 float area = pi * radius * radius;
 cout << "Surface area of circle with r=" << radius;
 cout << " is  " << area;
 return 0;
}*/
/*
//problem 10
int main() {
 int radius, height;
 cin >> radius >> height;
 float pi = 3.14159265358979323846;
 float volume = pi * radius * radius * height;
 cout <<"Volume of cylinder with r = " << radius << " and h = " << height << " is " << volume << endl;
 return 0;
}*/
/*
//problem 11
int main() {
 int distance = 450km;
 int hour = 2h;
 float velocity_1 = distance / hour;
 float velocity_2 = velocity_1 /;
cout <<"V = " << velocity_1 <<"and"<< velocity_2 << endl;
 return 0;
 */
/*
//problem 12
int main() {
 int minutes_total, hours, minutes;
 cin >> minutes_total;
 if (minutes_total >= 60) {
  hours = minutes_total / 60;
  minutes = minutes_total % 60;
  cout <<"Total minutes:"<<minutes_total<< endl;
  cout <<"Total time:"<<hours <<"hours "<<minutes<<"minutes"<<endl;
  return 0;
  */
/*
//problem 13
int main() {
 int selling_price, variable_cost;
 int fixed_cost = 10000;
 cout << "Please enter your selling price: ";
 cin >> selling_price;
 cout << "Please enter your variable cost: ";
 cin >> variable_cost;
 cout << "Your selling price is: " << selling_price << endl;
 cout << "Your variable cost is: " << variable_cost << endl;
 int BEP = fixed_cost/(selling_price + variable_cost);
 cout << "BEP is: " << BEP << endl;
 return 0;
}*/
/*
//problem 14
int main() {
 int basic_salary;
 cin >> basic_salary;
 cout << "Basic salary is: " << basic_salary;
 int tax;
 cin >> tax;
 cout << "Tax is: " << tax<<endl;
 int net = basic_salary*(100 - tax)/100;
 cout << "total salary is; "<< net << endl;
 return 0;
}*/
/*
//problem 15
int main() {
 double original_price;
 cin >> original_price;
 double percentage;
 cin >> percentage;
 double amount = original_price * percentage/100;
 double price = original_price - amount;
 cout << "Original price: " << original_price << endl;
 cout << "Percentage: " << percentage << endl;
 cout << "Amount: " << amount << endl;
 cout << "Price: " << price << endl;
 return 0;
} */
/*
//problem 16
int main() {
 int gp1, gp2, gp3, gp4, gp5;
 cin >> gp1 >> gp2 >> gp3 >> gp4 >> gp5;
 int hour1, hour2, hour3, hour4, hour5;
 cin >> hour1 >> hour2 >> hour3 >> hour4;
 int GPA = (gp1*hour1 + gp2*hour2 + gp3*hour3 + gp4*hour4 + gp5*hour5)/ (hour1 + hour2 + hour3 + hour4 + hour5);
 cout << "Grade points: " << gp1 << "," << gp2 << "," << gp3 << "," << gp4 << "," << gp5 << endl;
 cout << "Credit hours: " << hour1 << "," << hour2 << "," << hour3 <<  "," << hour4 << "," << hour5 << endl;
 cout << "THe average GPA is:" << GPA << endl;
 return 0;
}*/
/*
//problem 17
int main() {
 int final_price, initial_price;
 cout << "Enter initial price: ";
 cin >> initial_price;
 cout << "Enter final price: ";
 cin >> final_price;
 float inflation_rate = ((initial_price - final_price) / initial_price)*100;
 cout << "Initial price: " << initial_price << endl;
 cout << "Final price: " << final_price << endl;
 cout << "Inflation rate: " << inflation_rate << endl;
 return 0;
}*/
/*
//problem 18
int main() {
 int original_tutition, Rate;
 cout << "Please enter the original tutition:" << endl;
 cin >> original_tutition;
 cout << "Please enter the rate:" << endl;
 cin >> Rate;
 int scho_amount = original_tutition * Rate / 100;
 int Final_fee = original_tutition - scho_amount;
 cout << "Original tutition: " << original_tutition << endl;
 cout << "Rate: " << Rate << endl;
 cout << " Scholarshi amount: " << scho_amount << endl;
 cout << "The final tutition is " << Final_fee;
 return 0;
}*/
/*
//problem 19
int main() {
 int P, R, T;
 cin >> P >> R >> T;
 int SI = P * R * T / 100;
 cout << "Principal amount is:" << P << endl;
 cout << " Rate of interest:" << R << endl;
 cout << "Time:" << T << endl;
 cout << SI << endl;
 return 0;
}*/