###import random
###class Player:
###    def __init__(self,name):
###        self._name=name
###        self._score=0
###    def reset_score(self):
###        self._score=0
###    def incr_score(self):
###        self._score=self._score + 1
###    def get_name(self):
###        return self._name
###    def __str__(self):
###        return "name = '%s',score = %s"%(self._name,self._score)
###    def __repr__(self):
###        return "Player(%s)"%str(self)
###class Human(Player):
###    def __repr__(self):
###        return 'Human(%s)'%str(self)
###    def get_move(self):
###        while True:
###            try:
###                n=int(input('%s move(1-10):'%self.get_name()))
###                if 1<=n<=10:
###                    return n
###                else:
###                    print('Oops!')
###            except:
###                print('Oops!')
###class Computer(Player):
###    def __repr__(self):
###        return 'Computer(%s)'%str(self)
###    def get_move(self):
###        return random.randint(1,10)
###def play_undercut(p1,p2):
###    p1.reset_score()
###    p2.reset_score()
###    m1=p1.get_move()
###    m2=p2.get_move()
###    print("%s move: %s"%(p1.get_name(),m1))
###    print("%s move: %s"%(p2.get_name(),m2))
###    if m1==m2-1:
###        p1.incr_score()
###        return p1,p2,'%s wins!' %p1.get_name()
###    elif m2==m1-1:
###        return p1,p2,'%s wins!'%p2.get_name()
###    else:
###        return p1,p2,'draw:no winner'
###name1=input('please input a name:')
###name_human=Human(name1)
###name2_chose=('lihua','xiaoming','xiaohong','bob')
###while True:
###    i=random.randint(0,3)
###    if name2_chose[i]!=name1:
###        name2=name2_chose[i]
###        break
###name_computer=Computer(name2)
###winner=play_undercut(name_human,name_computer)
###print(winner)
#>>> ''.join(f)
#'aasfas sdaf sad  sda   '
#>>> f=[c for c in s.lower() if c in keep ]
#>>> ''.join(f)
#'aasfas sdaf sad  sda sdf a '
#>>> f.split(' ')
#Traceback (most recent call last):
#  File "<pyshell#65>", line 1, in <module>
#    f.split(' ')
#AttributeError: 'list' object has no attribute 'split'
#>>> ' '.split(f)
#Traceback (most recent call last):
#  File "<pyshell#66>", line 1, in <module>
#    ' '.split(f)
#TypeError: must be str or None, not list
#>>> f.split()
#Traceback (most recent call last):
#  File "<pyshell#67>", line 1, in <module>
#    f.split()
#AttributeError: 'list' object has no attribute 'split'
#>>> f=''.join(f)
#>>> f.split()
#['aasfas', 'sdaf', 'sad', 'sda', 'sdf', 'a']
#>>> set(f.split())
#{'a', 'sdf', 'aasfas', 'sdaf', 'sda', 'sad'}
#>>> bill=open('20-12-15.py','r').read()
#>>> len(bill)
#1761
#>>> bill.count('\n')
#58
#>>> len(bill.split())
#153
#>>> len(c for c in bill if c in keep)
#Traceback (most recent call last):
#  File "<pyshell#75>", line 1, in <module>
#    len(c for c in bill if c in keep)
#TypeError: object of type 'generator' has no len()
#>>> len(''.join(c for c in bill if c in keep))
#1247
#>>>
import os
def p():
    os.chdir(r"C:\Users\1\Desktop\python")
    keep={'q','w','e','r','t','y','u','i','o','a','s','d','f','g','h','j','k','l','z','x','c','v','b','n','m',"'",'.',' '}
    tmp=open("20-12-14.py").read()
    temp=''.join(c for c in tmp if c in keep)
    temp=temp.split()
    m={}
    for word in temp:
        if word in m :
            m[word]+=1
        else:
            m[word]=1
    j=m.keys()
    i=[]
    for name in j:
        pair=(name,m[name])
        i.append(pair)
    i.sort(key=lambda x:x[1],reverse=True)
    return i
