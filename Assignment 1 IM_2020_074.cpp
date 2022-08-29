/*
	Student Number : IM/2020/074
    Student Name : Hiruni Mathangaweera
    Assignment Number : 1
    Due Date : 08/23/2022
*/    

#include <iostream>

using namespace std;

int main()
{
    cout<<"Payment Calculator \n";
    // Get userAmount
    cout << "Enter your amount : ";
    int amount;
    cin >> amount;
    cout << "\n";
    //cout << amount;
    
    //Get cash
    cout << " Enter cash : ";
    int cash;
    cin >> cash;
    cout << "\n";
    //cout << cash;
    
    //Check the balance
    int balance = cash - amount;
    cout << balance;
    cout <<"\n";
    
    //5000 Rs./=
    int fiveThousandCount = balance/5000;
    cout << "Five Thousand : " << fiveThousandCount;
    cout <<"\n";
    int afterFiveThousand = balance%5000;
   
    //2000 Rs./=
    int twoThousandCount = afterFiveThousand/2000;
    cout << "Two Thousand : " << twoThousandCount;
    cout << "\n";
    int afterTwoThousand = afterFiveThousand%2000;
    
    //1000 Rs./=
    int thousandCount = afterTwoThousand/1000;
    cout << "Thousand : " << thousandCount;
    cout << "\n";
    int afterThousand = afterTwoThousand%1000;
    
    //500 Rs./=
    int fiveHundradCount = afterThousand/500;
    cout << "Five Hundrad : " << fiveHundradCount;
    cout << "\n";
    int afterFiveHundrad = afterThousand%500;
  
    //100 Rs./=
    int hundradCount = afterFiveHundrad/100;
    cout << "Hundrad : " << hundradCount;
    cout <<"\n";
    int afterHundrad = afterFiveHundrad%100;
   
    //50 Rs./=
    int fiftyCount = afterHundrad/50;
    cout << "Fifty : " << fiftyCount;
    cout << "\n";
    int afterFifty = afterHundrad%50;
  
    //20 Rs./=
    int twentyCount = afterFifty/20;
    cout << "Twenty : " << twentyCount;
    cout <<"\n";
    int afterTwenty = afterFifty%20;
   
    //10 Rs./=
    int tenCount = afterTwenty/10;
    cout << "Ten : " << tenCount;
    cout <<"\n";
    int afterTen = afterTwenty%10;
 
    //5 Rs./=
    int fiveCount = afterTen/5;
    cout << "Five : " << fiveCount;
    cout <<"\n";
    int afterFive = afterTen%5;
 
    //2 Rs./=
    int twoCount = afterFive/2;
    cout << "Two : " << twoCount;
    cout <<"\n";
    int afterTwo = afterFive%2;

    //1 Rs./=
    int oneCount = afterTwo/1;
    cout << "One : " << oneCount;
    cout << "\n";
    
    return 0;
}