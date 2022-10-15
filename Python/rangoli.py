import string
letters=list(string.ascii_lowercase)
n=int(input())
letters=(letters[:n])
letters.reverse()
c=0
inc=+1
row=2*n-1
col=row+row-1
for i in range(row):
    letter_l=(letters[:(c+1)])
    letter_r=letter_l[:-1]
    letter_r.reverse()
    if i==row-1:
        letter=letters[c]
    else:
        letter='-'.join(letter_l)+'-'+'-'.join(letter_r)

    if((i+1)== n):
        print(letter.center(col,'-'))
        inc=-1
        # c=c+inc
    else:
        print(letter.center(col,'-'))
    c=c+inc