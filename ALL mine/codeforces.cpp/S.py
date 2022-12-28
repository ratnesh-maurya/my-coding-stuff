test=int(input())
while test:
    t=int(input())
    answer=0
    answer+=((t)*(t+1)*((2*t)+1))//6
    t=t-1
    answer+=((t)*(t+1)*((2*t)+1))//6
    answer+=((t)*(t+1))//2
    
    answer=answer*2022
    print( answer%(1000000007))
    test-=1