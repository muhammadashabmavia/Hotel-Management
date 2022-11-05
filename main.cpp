#include <iostream>

using namespace std;

int main() {
  // Type of apartment Ashab Code
  int Appartment_Category, Appartment_Type, bedrooms_are, person_are;
  int lseven_star=0, lfive_star=0, dfive_star_price=0,  dfour_star_price=0, total_all=0, GST_Total;
  char repeat;


  m:

  cout << "Thanks for Coming Selecting Hotel Management System \n";
  cout << "Choose your apartment type number please! \n";
  cout << "\n1) Luxury" << "\n Price of Luxury services are 40,000/=";
  cout << "\n2) Deluxe" << "\n Price of Luxury services are 20,000/=";
  cout << "\n";
  cout << "Choose Option Number\n";
  cin >> Appartment_Category;
  switch (Appartment_Category) {

    //LUXURY APARTMENT Ashab Code
  case 1: {
    cout << "Choose the quality of luxury apartment you want \n";
    cout << "\n1) 7 Star" << "\n Price of 7 star are 50,000/=";
    cout << "\n2) 5 Star" << "\n Price of 5 star are 40,000/=";
    cout << "\n";
    cout << "Choose Option Number\n";
    cin >> Appartment_Type;

    switch (Appartment_Type) {
      // 7 Luxury Star Ashab Code
    case 1: {
      cout << "Choose your bedrooms please! \n";
      cout << "1) 5 bedrooms Apartment\n" << "Charges of 5 bedrooms are 20,000/=\n";
      cout << "2) 4 bedrooms Apartment\n" << "Charges of 4 bedrooms are 10,000/=\n";
      cout << "Choose Option Number\n";
      cin >> bedrooms_are;
      if (bedrooms_are == 1) {
        cout << "Per Person charges are 1000/=\n";
        cout << "1) 10 persons\n";
        cout << "2) 5 persons\n";
        cout << "Choose Option Number\n";
        cin >> person_are;
        if(person_are == 1){
            lseven_star = (10*1000) + 20000 + 40000;
        }
        if(person_are == 2){
            lseven_star = (5*1000) + 20000 + 40000;
        }else{
            cout << endl;
        }
        break;
      }
      if (bedrooms_are == 2) {
        cout << "Per Person charges are 1000/=\n";
        cout << "1) 8 persons\n";
        cout << "2) 4 persons\n";
        cout << "Choose Option Number\n";
        cin >> person_are;
        if(person_are == 1){
            lseven_star = (8*1000) + 10000 + 40000;
        }
        if(person_are == 2){
            lseven_star = (4*1000) + 10000 + 40000;
        }else{
            cout << endl;
        }
        break;
      }
    }
    // 7 Luxury Star Ashab Code

    // 5 Luxury Star Ashab Code
    case 2:
      cout << "Choose your bedrooms please! \n";
      cout << "1) 5 bedrooms Apartment\n" << "Charges of 5 bedrooms are 20,000/=\n";
      cout << "2) 4 bedrooms Apartment\n" << "Charges of 5 bedrooms are 10,000/=\n";
      cout << "Choose Option Number\n";
      cin >> bedrooms_are;
      if (bedrooms_are == 1) {
        cout << "Per Person charges are 900/=\n";
        cout << "1) 10 persons\n";
        cout << "2) 5 persons\n";
        cout << "Choose Option Number\n";
        cin >> person_are;
        if(person_are == 1){
            lfive_star = (10*900) + 20000 + 40000;
        }
        if(person_are == 2){
            lfive_star = (10*900) + 20000 + 40000;
        }else{
            cout << endl;
        }
        break;
      }
      if (bedrooms_are == 2) {
        cout << "Per Person charges are 900/=\n";
        cout << "1) 8 persons\n";
        cout << "2) 4 persons\n";
        cout << "Choose Option Number\n";
        cin >> person_are;
        if(person_are == 1){
            lfive_star = (8*900) + 10000 + 40000;
        }if(person_are == 2){
            lfive_star = (4*900) + 10000 + 40000;
        }else{
            cout << endl;
        }
        break;
      }
      // 5 Luxury Star Ashab Code
    }
    //LUXURY APARTMENT Ashab Code
    break;
  }
  //DELUXE APARTMENT Ashab Code
  case 2:{
    cout << "Choose the quality of Deluxe apartment you want \n";
    cout << "\n1) 5 Star" << "\n Price of 5 star are 40,000/=";
    cout << "\n2) 4 Star" << "\n Price of 4 star are 30,000/=";
    cout << "\n";
    cout << "Choose Option Number\n";
    cin >> Appartment_Type;

    switch (Appartment_Type) {
    // 5 Deluxe Star Ashab Code
    case 1: {
      cout << "Choose your bedrooms please! \n";
      cout << "1) 4 bedrooms Apartment\n" << "Charges of 4 bedrooms are 15,000/=\n";
      cout << "2) 3 bedrooms Apartment\n" << "Charges of 3 bedrooms are 10,000/=\n";
      cout << "Choose Option Number\n";
      cin >> bedrooms_are;
      if (bedrooms_are == 1) {
        cout << "Per Person charges are 800/=\n";
        cout << "1) 8 persons\n";
        cout << "2) 4 persons\n";
        cin >> person_are;
        if(person_are == 1){
            dfive_star_price = (8*800) + 15000 + 20000;
        }
        if(person_are == 2){
            dfive_star_price = (4*800) + 15000 + 20000;
        }else{
            cout << endl;
        }
        break;
      }
      if (bedrooms_are == 2) {
        cout << "Per Person charges are 800/=\n";
        cout << "1) 6 persons\n";
        cout << "2) 3 persons\n";
        cout << "Choose Option Number\n";
        cin >> person_are;
        if(person_are == 1){
            dfive_star_price = (6*800) + 10000 + 20000;
        }
        if(person_are == 2){
            dfive_star_price = (3*800) + 10000 + 20000;
        }else{
            cout << endl;
        }
        break;
      }
    }
    // 5 Deluxe Star Ashab Code
    // 4 Deluxe Star Ashab Code
    case 2: {
      cout << "Choose your bedrooms please! \n";
      cout << "1) 4 bedrooms Apartment\n" << "Charges of 4 bedrooms are 10,000/=\n";
      cout << "2) 3 bedrooms Apartment\n" << "Charges of 3 bedrooms are 8,000/=\n";
      cout << "Choose Option Number\n";
      cin >> bedrooms_are;
      if (bedrooms_are == 1) {
        cout << "Per Person charges are 600/=\n";
        cout << "1) 8 persons\n";
        cout << "2) 4 persons\n";
        cout << "Choose Option Number\n";
        cin >> person_are;
        if(person_are == 1){
            dfour_star_price = (8*600) + 10000 + 20000;
        }
        if(person_are == 2){
            dfour_star_price = (4*600) + 10000 + 20000;
        }else{
            cout << endl;
        }
        break;
      }
      if (bedrooms_are == 2) {
        cout << "Per Person charges are 600/=\n";
        cout << "1) 6 persons\n";
        cout << "2) 3 persons\n";
        cout << "Choose Option Number\n";
        cin >> person_are;
        if(person_are == 1){
            dfour_star_price = (6*600) + 8000 + 20000;
        }
        if(person_are == 2){
            dfour_star_price = (3*600) + 8000 + 20000;
        }else{
            cout << endl;
        }
        break;
      }

    }
    // 4 Deluxe Star Ashab Code
    }
    break;
  }
    //DELUXE APARTMENT Ashab Code

  }
  cout << "Do you want to choose again ??, If yes press 'y' or no" << "\n";
  cin >> repeat;
  if( repeat == 'y'){
    goto m;
  }else{
      cout << endl;
  }
total_all = lseven_star + lfive_star + dfive_star_price + dfour_star_price + person_are;
cout << "Your bill: " << total_all << " Rupees\n";
GST_Total=(total_all/100) * 15;
cout << "Your GST: " << GST_Total << "\n";
cout << "Your Bill with GST: " << total_all+GST_Total << "\n";


  return 0;
}
