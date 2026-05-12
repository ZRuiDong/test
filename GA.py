import random

def fun(x):
    return (x-3)**2

def decode(gene): return int("".join(map(str, gene)), 2)
def encode(x): return[int(b) for b in f"{x:05b}"]


print(decode([0,0,0,1,1]))