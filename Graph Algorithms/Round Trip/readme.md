# Round Trip Problem

## Problem Statement

Byteland has `n` cities and `m` roads between them. Your task is to design a **round trip** that:
- Begins in a city,
- Goes through two or more other cities,
- And finally returns to the starting city.

Every intermediate city on the route has to be distinct.

### Input

- The first input line contains two integers `n` and `m`: the number of cities and roads. The cities are numbered `1, 2, ..., n`.
- Then, there are `m` lines describing the roads. Each line has two integers `a` and `b`, indicating that there is a road between city `a` and city `b`.
- Every road is between two different cities, and there is at most one road between any two cities.

### Output

- First, print an integer `k`: the number of cities on the route.
- Then, print `k` cities in the order they will be visited. You can print any valid solution.
- If there are no solutions, print `"IMPOSSIBLE"`.

### Constraints

- 1 ≤ n ≤ 100,000
- 1 ≤ m ≤ 200,000
- 1 ≤ a, b ≤ n

### Example

#### Input:
```plaintext
5 6
1 3
1 2
5 3
1 5
2 4
4 5
