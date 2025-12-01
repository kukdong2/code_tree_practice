
def find_yoon(year):
    if year%4==0:
        if year%400==0:
            return 1
        elif year%100==0:
            return 0
        else:
            return 1
    else:
        return 0


def find_season(month):
    if 3<=month<=5:
        return "Spring"
    elif 6<=month<=8:
        return "Summer"
    elif 9<=month<=11:
        return "Fall"
    elif month<=2 or month ==12:
        return "Winter"

def main(Y,M,D):
    #윤년이 아닐때
    if find_yoon(Y)==0:
        #2월 29일받으면 없음
        if M==2 and D>=29:
            return -1
        elif(M==4 or M==6 or M==9 or M==11):
            if D==31:
                return -1
            else:
                return find_season(M)
        else:
            return find_season(M)
    #윤년일때
    elif find_yoon(Y)==1:
        if M==2 and D>=30:
            return -1
        elif (M == 4 or M == 6 or M == 9 or M == 11):
            if D == 31:
                return -1
            else:
                return find_season(M)
        else:
            return find_season(M)

Y,M,D = map(int, input().split())
print(main(Y,M,D))