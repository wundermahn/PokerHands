// Include the Testing Logic
#include "TestingLogic.h"
// Include iostream for cout function
#include <iostream>
// Use namespace std to avoid writing things like std::cout
using namespace std;

// Main program
int main(){

    // Evaluate straight flush
    cout << " --------------------------------------------- " << endl;
    cout << " STRAIGHT FLUSH EVALUATION " << endl;
    cout << " --------------------------------------------- " << endl;
    evaluateStraightFlush();

    cout << "\n" << endl;

    // Evaluate four of a kind
    cout << " --------------------------------------------- " << endl;
    cout << " FOUR OF A KIND EVALUATION " << endl;
    cout << " --------------------------------------------- " << endl;    
    evaluateFOAK();

    cout << "\n" << endl;

    // Evaluate full house
    cout << " --------------------------------------------- " << endl;
    cout << " FULL HOUSE EVALUATION " << endl;
    cout << " --------------------------------------------- " << endl;    
    evaluateFH();

    cout << "\n" << endl;

    // Evaluate flush
    cout << " --------------------------------------------- " << endl;
    cout << " FLUSH EVALUATION " << endl;
    cout << " --------------------------------------------- " << endl;    
    evaluateFlush();    
    
    cout << "\n" << endl;

    // Evaluate straight
    cout << " --------------------------------------------- " << endl;
    cout << " STRAIGHT EVALUATION " << endl;
    cout << " --------------------------------------------- " << endl;    
    evaluateStraight();      

    cout << "\n" << endl;

    // Evaluate three of a kind
    cout << " --------------------------------------------- " << endl;
    cout << " THREE OF A KIND EVALUATION " << endl;
    cout << " --------------------------------------------- " << endl;    
    evaluateTOAK();

    cout << "\n" << endl;

    // Evaluate Two Pair
    cout << " --------------------------------------------- " << endl;
    cout << " TWO PAIR EVALUATION " << endl;
    cout << " --------------------------------------------- " << endl;    
    evaluateTwoPair();  

    cout << "\n" << endl;

    // Evaluate One Pair
    cout << " --------------------------------------------- " << endl;
    cout << " ONE PAIR EVALUATION " << endl;
    cout << " --------------------------------------------- " << endl;    
    evaluateOnePair();          

    cout << "\n" << endl;

    // Evaluate One Pair
    cout << " --------------------------------------------- " << endl;
    cout << " HIGH CARD EVALUATION " << endl;
    cout << " --------------------------------------------- " << endl;    
    evaluateHighCard();
        

} //end main