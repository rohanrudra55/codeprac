import time,pyautogui
n=input("Enter the message")
time.sleep(5)
for i in range(1000):
   if i == 500:
      time.sleep(10)
  # pyautogui.write(n)
   pyautogui.hotkey('command','v')
   pyautogui.press("enter")


