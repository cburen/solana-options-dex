// TODO: input logic of put-call parity & hook up this code with solana blockchain functions to enable payments

#include <iostream>
using namespace std;

bool put; // true is put, false is call
float strike; // strike price
bool buy; // true is buy, false is write
int maturity; // maturity

int current_price; // sourced from an oracle
int current_time; // sourced from an oracle

int premium_calc(); 
int premium; // calculated premium

int interest_earned(); // function run one a month on each tokenholder to calculate interest they earned
int send_interest(); // function that sends the interest earned to the tokenholder

int main() {
    cin >> put >> strike >> buy >> maturity;

    if (buy) {
        cout << "The premium you must pay is " << premium;
    } else{
        cout << "The premium you will receive is " << premium;
    }

    // output way of executing on contract

    if (current_time == maturity) {
        // offer buyer option to execute
    }
}

int premium_calc() {
    // logic of put-call parity here
    return(premium);
}
