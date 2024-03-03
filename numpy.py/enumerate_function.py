
def word_split(n):
    words=n.split()
    item_name=' '.join(words[:-1])
    price=int(words[-1])
    
    return item_name,price


n=int(input())
dic={}
for i in range(n):
    string=input()
    


