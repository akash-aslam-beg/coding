# C programming

C exercises from Computer Programming (ME 2221), its sessional (ME 2222), and numerical-computation coursework (ME 3121 and ME 3122).

- [Input, arithmetic and precision](01-input-arithmetic-and-precision/README.md)
- [Conditions, parity and leap years](02-conditions-parity-and-leap-years/README.md)
- [Loops, counters and control flow](03-loops-counters-and-control-flow/README.md)
- [Series, factorials and Fibonacci](04-series-factorials-and-fibonacci/README.md)
- [Arrays, reversal and searching](05-arrays-reversal-and-searching/README.md)
- [Means, ranges and frequency tables](06-means-ranges-and-frequency-tables/README.md)
- [Marks, weighted averages and grade reports](07-marks-weighted-averages-and-grade-reports/README.md)
- [Sorting integers and tracing swaps](08-sorting-integers-and-tracing-swaps/README.md)
- [Functions, arguments and variable scope](09-functions-arguments-and-variable-scope/README.md)
- [Pointers, array traversal and pointer sorting](10-pointers-array-traversal-and-pointer-sorting/README.md)
- [Matrix input, sums, products and transpose](11-matrix-input-sums-products-and-transpose/README.md)
- [Dynamic allocation and matrix storage](12-dynamic-allocation-and-matrix-storage/README.md)
- [Strings, case conversion and name sorting](13-strings-case-conversion-and-name-sorting/README.md)
- [Structures, typedef and unions](14-structures-typedef-and-unions/README.md)
- [Text files, tables and payroll](15-text-files-tables-and-payroll/README.md)
- [Equations, geometry and engineering calculations](16-equations-geometry-and-engineering-calculations/README.md)
- [Nested loops, patterns and permutations](17-nested-loops-patterns-and-permutations/README.md)

## Compiling and running

Each example has its own folder and `main.c`. Open it in a C IDE, or compile from that folder with GCC:

```sh
gcc -std=c11 -Wall -Wextra main.c -lm -o program
./program < input.txt
```

For PowerShell with MinGW GCC:

```powershell
gcc -std=c11 -Wall -Wextra main.c -lm -o program.exe
Get-Content input.txt | .\program.exe
```

Run programs without `input.txt` interactively. Keep any other input text files in the same working directory. `output.txt` contains the recorded output; `expected-files/` contains the files written by the recorded run. Compile into a temporary copy if repeating a file-writing example.
