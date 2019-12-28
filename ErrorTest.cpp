// Include the Testing Logic
#include "TestingLogic.h"
// Include iostream for cout function
#include <iostream>
// Use namespace std to avoid writing things like std::cout
using namespace std;

// Main program
int main(){

    // Hand One - Two Pair
    Card handOne_cardOne("10", "D");
    Card handOne_cardTwo("10", "S");
    Card handOne_cardThree("2", "S");
    Card handOne_cardFour("2", "C");    
    Card handOne_cardFive("K", "C");


    // Hand Two - Full House
    Card handTwo_cardOne("4", "D");
    Card handTwo_cardTwo("4", "S");
    Card handTwo_cardThree("4", "C");
    Card handTwo_cardFour("9", "D");    
    Card handTwo_cardFive("9", "C");


    array<Card, 5> handOneCards{handOne_cardOne, handOne_cardTwo, 
                           handOne_cardThree, handOne_cardFour,
                           handOne_cardFive};

    array<Card, 5> handTwoCards{handTwo_cardOne, handTwo_cardTwo, 
                           handTwo_cardThree, handTwo_cardFour,
                           handTwo_cardFive};

    Hand handOne(handOneCards);
    Hand handTwo(handTwoCards);                           

    // Evaluate fullHouse
    cout << " --------------------------------------------- " << endl;
    cout << " ERROR EVALUATION " << endl;
    cout << " --------------------------------------------- " << endl;
    compareFH(handOne, handTwo);
        

} //end main