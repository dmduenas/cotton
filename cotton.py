data = []
user = 0
even_counter = 0
odd_counter = 0
total = 0
average = 0

while True:
    try:
        user = input("Enter a number: ").lower()
        if user == "quit":

            if len(data) == 0:
                print("No Numbers were entered")
                break
            largest = data[0]
            smallest = data[0]

            for x in data:
                if largest < x:
                    largest = x
            for y in data:
                if smallest > y:
                    smallest = y

            for z in data:
                total = total + z

            for a in data:
                if a % 2 == 0:
                    even_counter += 1
                else:
                    odd_counter +=1



            print("\nS T A T S\n")
            print(f"There are {len(data)} in the list")
            print(f"The smallest number is {smallest}")
            print(f"The largesr is {largest}")
            print(f"The average is {total / len(data)}")
            print(f"There are a total of {even_counter} even number(s) in the list")
            print(f"There are a total of {odd_counter} number(s) in the list")

            break

        data.append(int(user))

    except ValueError:
        print("Please Enter a Numerical Number, or type 'quit' to close the application")