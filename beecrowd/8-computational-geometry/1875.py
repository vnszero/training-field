C = int(input())
clock_score = {'R': {'G': 2, 'B': 1}, 'G': {'B': 2, 'R': 1}, 'B': {'R': 2, 'G': 1}}
for i in range(C):
    P = int(input())
    score = {'R': 0, 'G': 0, 'B': 0}
    
    for g in range(P):
        team = input().split()
        score[team[0]] += clock_score[team[0]][team[1]]
    
    if score['R'] > score['G'] and score['R'] > score['B']:
        print('red')
    elif score['G'] > score['R'] and score['G'] > score['B']:
        print('green')
    elif score['B'] > score['R'] and score['B'] > score['G']:
        print('blue')
    elif score['R'] == score['G'] and score['R'] == score['B']:
        print("trempate")
    else:
        print("empate")