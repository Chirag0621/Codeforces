ef solve():
    """
    Solves a single test case for the Line Trip problem.
    """
    n, x = map(int, sys.stdin.readline().split())
    a = list(map(int, sys.stdin.readline().split()))

    # The minimum tank size is the maximum distance between any two
    # consecutive refueling points on the round trip.

    # 1. Calculate the distance from the start (0) to the first gas station.
    max_dist = a[0]

    # 2. Calculate the distances between consecutive gas stations.
    for i in range(1, n):
        distance = a[i] - a[i-1]
        if distance > max_dist:
            max_dist = distance

    # 3. Calculate the distance for the final round trip from the last gas station
    # to the destination 'x' and back to the last gas station.
    # The car must be able to travel from a[n-1] to x and then turn around and
    # get back to a[n-1] to refuel. The distance for this leg is 2 * (x - a[n-1]).
    final_leg_dist = 2 * (x - a[n-1])

    if final_leg_dist > max_dist:
        max_dist = final_leg_dist

    print(max_dist)

def main():
    """
    Main function to handle multiple test cases.
    """
    t = int(sys.stdin.readline())
    for _ in range(t):
        solve()

if __name__ == "__main__":
    main()
