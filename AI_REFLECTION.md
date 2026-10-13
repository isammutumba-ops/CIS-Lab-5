# AI Reflection

## How I Used AI

I used ChatGPT to help me review my C++ programs, understand the formulas, and improve the formatting of the output. I wanted to keep my original approach rather than make the code unnecessarily complicated. One suggestion was to use `setw()` to align the output labels. I kept it because it makes the results easier to read, but used it sparingly so the programs would stay simple.

## Decisions and Verification

I kept the main calculations based on the compound interest and monthly loan payment formulas. I also kept the calculations in separate variables before displaying the results, because this makes the code easier to follow and check.

During the review, the programs were compiled with `g++` using the C++17 standard and compiler warning flags. Four test cases were run, including different interest rates, principal amounts, compounding frequencies, and loan periods. The calculated balances, interest amounts, and loan payments matched the expected results when rounded to two decimal places.

## What I Learned

I learned more about converting percentage rates into decimals, using `pow()` for exponent calculations, and understanding why a loan's monthly interest rate differs from its annual rate. I also learned how `fixed`, `setprecision(2)`, and `setw()` improve the appearance of program output.

I still need to practice checking financial calculations independently and explaining each formula without relying on AI. AI was helpful for reviewing the code, but I understand that the final work must follow the assignment instructions and that the results need to be verified.
