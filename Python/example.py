r=5
for i in range(1,r):
        if(i%3==0 and i%5==0):
            print("FizzBuzz",i)
        else:
            if(i%3==0):
                print("Fizz",i)
            else:
                if(i%5==0):
                    print("Buzz",i)
                else:
                    print(i)