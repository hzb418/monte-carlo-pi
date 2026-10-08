# monte-carlo-pi
A simple C++ experiment for estimating Pi using the Monte Carlo method.

## Method

Random points `(x, y)` are generated uniformly in the square `[-1, 1] x [-1, 1]`.

A point lies inside the unit circle if `x^2 + y^2 <= 1`.

Since the area of the unit circle is pi and the area of the square is 4, pi can be estimated by

`pi_hat = 4 * (number of points inside the circle / total number of points)`.

The program uses a fixed random seed (`2026`) to make the experiment reproducible.

## Experiment

The program compares the Monte Carlo estimates for different sample sizes, such as 100,1000,10000,100000,1000000. For each sample size, the program reports the number of points inside the unit circle, the estimated value of pi, and the absolute error.

## Compile and Run

Compile the C++ program with:

```bash
g++ main.cpp -o main
```

Run the program with:

```bash
./main
```

Output:
N         Points inside circle Estimated Pi   Absolute Error
100       75                   3              0.141593
1000      762                  3.048          0.0935927
10000     7802                 3.1208         0.0207927
100000    78380                3.1352         0.00639265
1000000   785292               3.14117        0.00042465

As the sample size increases, the Monte Carlo estimate generally becomes more accurate and approaches the true value of pi.

