# Input scores
mid1 = float(input("Enter Midterm 1 score: "))
mid2 = float(input("Enter Midterm 2 score: "))
final = float(input("Enter Final exam score: "))
project = float(input("Enter Project score: "))


highest = max(mid1, mid2, final, project)

print("The highest score is:", highest)