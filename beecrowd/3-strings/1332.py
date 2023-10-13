numbers = ["one","two","three"]
recognizer = [0,0,0]
N = int(input())
for i in range(N):
    recognizer = [0,0,0]
    word = input()
    for letter_index in range(len(word)):
        for i in range(len(numbers)):
            try:
                if word[letter_index] in numbers[i][letter_index]:
                    recognizer[i]+=1
                else:
                    recognizer[i]-=1
            except:
                pass
    print(recognizer)
    greater_index = recognizer.index(max(recognizer))
    print(greater_index+1)