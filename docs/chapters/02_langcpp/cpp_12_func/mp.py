"""
Merge paragraph iserted from pdf
"""

t= []
with open("text.txt") as f:
    for line in f:
        l=line[:-1]
        t.append(l)


text = " ".join(t)

with open("out.txt",'w') as f:
        f.write(text)
        
print(text)
