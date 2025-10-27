void Solve(long long x) {
    /*
        We need to find a and b such that:
            (a AND b) + (a OR b) = x

        Step 1: Using the bitwise identity:
            a OR b = (a XOR b) + (a AND b)

        Step 2: Substitute:
            (a AND b) + (a OR b)
          = (a AND b) + [(a XOR b) + (a AND b)]
          = (a XOR b) + 2 * (a AND b)

        Step 3: But from binary addition,
            a + b = (a XOR b) + 2 * (a AND b)

        Therefore,
            (a AND b) + (a OR b) = a + b

        So, the problem reduces to finding:
            a + b = x

        The simplest valid pair:
            a = x - 1
            b = 1
    */

    cout << x - 1 << " " << 1 << endl;
}