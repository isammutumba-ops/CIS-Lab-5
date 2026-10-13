# Compound Interest and Loan Payment Programs

## Project Overview

This project contains two C++ programs. The first calculates compound interest and the final account balance. The second calculates monthly loan payments, the total amount paid, and the total interest paid.

The goal of this lab is to practice variables, mathematical calculations, user input, and clear output formatting.

## Files

- `compound_interest.cpp`: Calculates compound interest and the final balance.
- `loan.cpp`: Calculates monthly loan payments and total interest.
- `README.md`: Explains the programs, calculations, tests, and instructions for running the code.
- `AI_REFLECTION.md`: Describes how AI assisted with reviewing and understanding the programs.

## Initial Plan

### Compound Interest Program

My plan was to collect the initial principal, annual interest rate, compounding frequency, and number of years. I would convert the interest rate from a percentage to a decimal, use the compound interest formula, calculate the interest earned, and display the results to two decimal places.

### Loan Payment Program

My plan was to collect the loan amount, annual interest rate, and number of monthly payments. I would convert the annual interest rate into a monthly rate, use the loan payment formula, and calculate the monthly payment, total amount paid, and total interest.

## Explanation of the Code

### 1. Compound Interest

The compound interest program uses the formula:

\[
A=P\left(1+\frac{r}{n}\right)^{nt}
\]

- `principal` stores the initial amount of money.
- `annualRatePercentage` stores the annual interest rate as a percentage.
- `r` stores the annual rate as a decimal. Dividing the percentage by `100.0` converts it correctly.
- `compoundFrequency` stores how many times interest is compounded each year.
- `years` stores the investment period.
- `pow()` calculates the exponent needed by the formula.
- `totalAmount` stores the final balance.
- `compoundInterest` stores the interest earned by subtracting the initial principal from the final balance.

The program uses `double` for monetary amounts and interest rates because these values can contain decimal places. The integer variables store quantities such as the number of years and compounding periods.

The calculation is stored in `totalAmount` before it is displayed. This makes the program easier to read and allows the same result to be used in another calculation.

### 2. Loan Payments

The loan program uses the fixed-payment loan formula:

\[
M=\frac{Pr(1+r)^N}{(1+r)^N-1}
\]

Here, \(M\) is the monthly payment, \(P\) is the loan amount, \(r\) is the monthly interest rate, and \(N\) is the total number of monthly payments.

- `loanAmount` stores the original loan.
- `annualRate` stores the annual interest rate as a percentage.
- `monthlyRate` stores the monthly interest rate as a decimal.
- `rateFactor` stores the result of the exponent calculation.
- `monthlyPayment` stores the calculated monthly payment.
- `totalPaidBack` stores the monthly payment multiplied by the number of payments.
- `totalInterest` stores the total paid minus the original loan amount.

The monthly rate is calculated by dividing the annual percentage by `100.0` and then by `12.0`. Using decimal arithmetic is important because integer division can discard fractional parts and produce incorrect results.

The loan program stores each calculation in a variable before displaying it, making the results easier to check.

### 3. Output Formatting

Both programs use `fixed` and `setprecision(2)` to display monetary amounts with two digits after the decimal point. They use `setw(27)` sparingly to align the output labels.

The `<iostream>` library provides input and output, `<cmath>` provides `pow()`, and `<iomanip>` provides the output-formatting tools.

## Compilation and Running Instructions

A C++ compiler such as `g++` is required.

Compile the compound interest program:

```bash
g++ -std=c++17 -Wall -Wextra compound_interest.cpp -o compound_interest
```

Run it on macOS or Linux:

```bash
./compound_interest
```

Compile the loan program:

```bash
g++ -std=c++17 -Wall -Wextra loan.cpp -o loan
```

Run it on macOS or Linux:

```bash
./loan
```

On Windows, run the generated executable files using the appropriate command for your terminal.

## Testing and Results

The following four runs were completed using the C++ versions reviewed in this lab. The expected results were calculated using the formulas, and the actual outputs were checked against those calculations.

| Program and test | Inputs | Expected result | Actual result | Comparison |
|---|---|---|---|---|
| Compound interest, test 1 | Principal $1,000; rate 5%; frequency 4; 3 years | Balance $1,160.75; interest $160.75 | Balance $1,160.75; interest $160.75 | Match |
| Compound interest, test 2 | Principal $2,500; rate 4.5%; frequency 12; 5 years | Balance $3,129.49; interest $629.49 | Balance $3,129.49; interest $629.49 | Match |
| Loan, test 1 | Loan $10,000; rate 6%; 60 payments | Monthly payment $193.33; total paid $11,599.68; interest $1,599.68 | Monthly payment $193.33; total paid $11,599.68; interest $1,599.68 | Match |
| Loan, test 2 | Loan $15,000; rate 7.2%; 48 payments | Monthly payment $360.59; total paid $17,308.18; interest $2,308.18 | Monthly payment $360.59; total paid $17,308.18; interest $2,308.18 | Match |

Both programs compiled successfully with `g++ -std=c++17 -Wall -Wextra`. No compiler warnings or errors were reported during these checks.

- Both programs compile separately.
- The formulas produce the expected results for the tested inputs.
- Monetary values display two decimal places.
- Output labels are aligned using `setw()`.
- Calculations are stored in named variables before being printed.
- The original assignment values should be restored in the final source files if they were changed during testing.
- The final repository should contain the required source files and both Markdown documents.
