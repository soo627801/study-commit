from random import sample
from random import randint
import tkinter
import random
from tkinter import *




# while True:
    
# 로또 복권 순위 판정에 사용할 딕셔너리
rank = {6:('1등',1000000000),
        5:{1:('2등',50000000),
           0:('3등',1000000)},
        4:('4등',50000),
        3:('5등',5000)
       }

def makenum(same):
    nums = winnum.copy()
    # 다르게 만들기 위해 제거 6-same개 제거
    for i in range(6 - same):
         nums.pop()

    # 당첨 번호가 아닌 2개를 넣어 모두 6개 만들기
    while len(nums) != 6:
        n = randint(1, 45)
        if n not in winnum:
            nums.add(n)
    return nums

def getwinner(lotto):
    ''' 6개의 로또 번호에서 각각 당첨 번호 개수와 수 출력 '''
    global bonus
    for i, item in enumerate(lotto):
        win = winnum.intersection(item) # 당첨 번호 구하기
        if win:
            wincnt = len(win)
            print('당첨 번호 개수 %d, ' % wincnt, end = '')
            printnums(win)
            if 3 <= wincnt:
                grade = rank[wincnt]
                if 5 == wincnt:
                    if bonus in item:
                        return '2등 당첨'
                    else:
                        return '3등 당첨'
            else:
                return '낙첨'
        else:
            return '낙첨'

def printlotto(lotto):
    ''' 로또 복권 표와 같이 출력 '''
    for i, item in enumerate(lotto):
        print('%c 자동 ' % (ord('A') + i), end = ' ')
        printnums(item)
    print()

def printnums(nums):
    for num in sorted(nums):
        print('%02d' % num, end = ' ')
    print()  


# 7개 선정
winnum = set(sample(list(range(1, 46)), 7))
# 1개를 빼 보너스 번호로 사용
bonus = winnum.pop()

#print('당첨 번호: ', end = '')
#printnums(winnum) # 당첨 번호 출력
#print('보너스 번호: ', bonus)
#print()

lottos = []
# 1등 번호(6개 모두 같은 셋)를 만들어 로또 리스트에 추가
rank1num = winnum.copy()
lottos.append(rank1num)

# 2등 번호(5개 같고, 1개는 보너스 번호)를 만들어 로또 리스트에 추가
rank2num = winnum.copy()
rank2num.pop()
rank2num.add(bonus)
lottos.append(rank2num)

# 3등 번호(5개 같고, 1개는 보너스 번호와 다르게)를 만들어 로또 리스트에 추가
rank3num = winnum.copy()
rank3num.pop()
# 보너스 번호가 아니고 기존의 번호가 아니면 1개 추가
while True:
    num = randint(1, 45)
    if num != bonus and num not in rank3num:
        rank3num.add(num)
        break
lottos.append(rank3num)

# 4개부터 0개 맞는 번호 자동 생성
for i in range(5):
    lottos.append(makenum(4 - i))
    

# 로또 번호 출력
printlotto(lottos)
# 로또 번호와 당첨 번호 비교해 순위 결정 출력
getwinner(lottos)



def clicked1():
    lotto_num_box.delete(0, tkinter.END)
    for i in range(5):
        lotto_nums = random.sample(range(1, 46), 6)
        lotto_nums = sorted(lotto_nums)
        lotto_nums = map(str, lotto_nums) # 리스트를 문자로 바꿔줌
        lotto_nums = '\t '.join(lotto_nums)
        lotto_num_box.insert(i, f" {chr(65 + i)} | \t{lotto_nums}")


'''
def clicked2(lotto_nums):
    win_num = set(sample(list(range(1, 46)), 7))
    # 1개를 빼 보너스 번호로 사용
    bonusnum = win_num.pop()
    win_num = sorted(lotto_nums)
    win_num = map(str, lotto_nums) # 리스트를 문자로 바꿔줌
    win_num = ' '.join(lotto_nums)
    winnum_box.insert(f"{win_num} + {bonusnum}")
'''


root = Tk()
root.title('Lotto program')
root.geometry('500x700')

lb1 = Label(root, text = "당첨번호(자동)", font = "D2coding 20 bold", fg = "darkgreen", height = 3)  # 레이블
lb1.pack()
#lb2 = Label(winnum, text = "+", bonus)
#lb2.pack()

btn = Button(root, text = "번호 생성", font = "D2coding 12", width = 10, command = clicked1)
btn.pack(anchor = 'ne')

winnum_box = tkinter.Listbox(root, font = "D2coding 15 bold", width = 20, height = 1)
winnum_box.insert(0)
winnum_box.pack(pady = 20)

lotto_num_box = tkinter.Listbox(root, font = "D2coding 15 bold", width = 30, height = 5)
lotto_num_box.grid(row = 0, column = 0)
lotto_num_box.insert(0, " A")
lotto_num_box.insert(1, " B")
lotto_num_box.insert(2, " C")
lotto_num_box.insert(3, " D")
lotto_num_box.insert(4, " E")
lotto_num_box.pack(pady = 20)

result_box = tkinter.Text(root, font = 'D2coding 15 bold', width = 10, height = 5)
result_box.grid(row = 0, column = 1)
result_box.pack(pady = 20)

#lb2 = Label(root, textvariable = print_nums)
#lb2.pack()
#lb3 = Label(root, textvariable = print_nums)
#lb3.pack()
           
root.mainloop()