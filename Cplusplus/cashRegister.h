//cashRegister Header File

class cashRegister
{
public:
    int getCurrentBalance() const;
       //Function to show the current amount in the cash 
       //register.
       //Postcondition: The value of cashOnHand is returned.

    void acceptAmount(int amountIn);
       //Function to receive the amount deposited by 
       //the customer and update the amount in the register.
       //Postcondition: cashOnHand = cashOnHand + amountIn;

    cashRegister(int cashIn = 500); 
       //Constructor
       //Sets the cash in the register to a specific amount.
       //Postcondition: cashOnHand = cashIn;
       //               If no value is specified when the 
       //               object is declared, the default value 
       //               assigned to cashOnHand is 500.

private:
     int cashOnHand;     //variable to store the cash 
                         //in the register
};
