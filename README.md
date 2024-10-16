# credit--card--validator
# Credit Card Validation Program

This program checks if a credit card number is valid using three key validation techniques:
1. **Luhn Algorithm Check**
2. **Prefix Check**
3. **Length Check**

## How It Works

The credit card validation program performs the following steps:

1. **Input Validation:** 
   The program first ensures that the input contains only digits. If any characters other than numbers are entered, it prompts the user to provide a valid numeric input.

2. **Luhn Algorithm Check:**
   - This is the core algorithm used to validate credit card numbers.
   - It processes the digits of the credit card number in reverse order, doubling every second digit.
   - If the doubled value is greater than 9, it subtracts 9 from the result (equivalent to adding the individual digits of the product).
   - Finally, it sums all the digits, and if the total is divisible by 10, the card number passes the Luhn check.

3. **Prefix Check:**
   - The program checks the starting digits of the card number to determine if it matches the standard prefixes used by credit card providers.
   - For example:
     - Visa cards start with `4`.
     - MasterCard cards start with `5`.
     - American Express cards start with `37`.
     - Discover cards start with `6`.

4. **Length Check:**
   - The length of the credit card number must be between 13 and 16 digits to be considered valid.

5. **Final Validation:**
   - If all three checks (Luhn, prefix, and length) pass, the program declares the card number as valid.
   - If any of the checks fail, it informs the user that the card number is not valid.

## How to Use

1. **Clone the Repository:**
   ```bash
   git clone https://github.com/yourusername/your-repo-name.git
   cd your-repo-name
Key Components of the Code
luhnCheck Function
This function implements the Luhn algorithm to check if the credit card number satisfies the checksum requirement.

checkPrefix Function
This function validates if the card number starts with the appropriate digits for common credit card issuers.

correctLength Function
This function ensures the credit card number has a length between 13 and 16 digits.

isValid Function
Combines all the validation checks (luhnCheck, checkPrefix, and correctLength) to determine if the credit card number is valid.

Test Cases
Please refer to the test cases below to verify the accuracy of the validation logic:

Valid Cards: 4532015112830366, 6011111111111117
Invalid Cards: 1234567890123456, 411111111111112
Invalid Input: 4111-1111-1111-1111, 4111a11111111111
