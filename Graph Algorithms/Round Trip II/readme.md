# Round Trip II

### Problem Statement

Byteland has `n` cities and `m` flight connections. Your task is to design a **round trip** that:
- Begins in a city,
- Goes through one or more other cities,
- And finally returns to the starting city.

Every intermediate city on the route has to be distinct.

### Input
The first input line contains two integers `n` and `m`: 
- `n` = the number of cities, 
- `m` = the number of flight connections.

The cities are numbered `1, 2, ..., n`.

Then, there are `m` lines describing the flights. Each line has two integers `a` and `b`, which indicate a one-way flight from city `a` to city `b`.

### Output
- First print an integer `k`, representing the number of cities on the route.
- Then print `k` cities in the order they will be visited. 

If no solution exists, print `"IMPOSSIBLE"`.

### Constraints
- 1 ≤ n ≤ 100,000
- 1 ≤ m ≤ 200,000
- 1 ≤ a, b ≤ n


### Example

#### Input:
```plaintext
4 5
1 3
2 1
2 4
3 2
3 4
```

### Heres a detailed explanation of my solution:
https://github.com/user-attachments/assets/43893802-82fe-4c34-ae27-dfc777e5f75f
