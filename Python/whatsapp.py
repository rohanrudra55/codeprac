import pyautogui as bot
import time
# textFilePath=input("Drag file here: ")
# textFile=open(textFilePath,'r')
print("Starting ...")
time.sleep(10)
print("Running>>>")
for line in range(1000):
    # print(line)
    bot.write('Sorry',interval=0,_pause=False)
    bot.press('enter')
