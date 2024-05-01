C = int(input())
i = 0;
while i < C:
    row = input().split(' ')
    N = int(row[0])
    average = 0.0
    count_studants_above_average = 0
    
    # find average
    for score in row[1:]:
        average += int(score)
    average /= N
    
    # count studants
    for score in row[1:]:
        if (int(score) > average):
            count_studants_above_average += 1
    
    # calculate percent
    percent_studants_above_average = 100 * count_studants_above_average / N
    print("{:.3f}%".format(percent_studants_above_average))

    i += 1
