import time
import cProfile

class Profiling:
    def __init__(self):
        print("Analyzing efficiecy...\n")

    def START(self):
        self.start=time.time()

    def STOP(self):
       self.end=time.time()

    def report(self):
        consumed=self.end-self.start
        print("It took {} seconds to complete.".format(consumed))

    def STEPS(self,function):
        cProfile.run(str(function))

def test():
    a=10
    while(a<1000):
        a=a+1
    return a

if __name__ == "__main__":
    timmer=Profiling()
    timmer.START()
    test()
    timmer.STOP()
    timmer.report()
    timmer.STEPS(test())