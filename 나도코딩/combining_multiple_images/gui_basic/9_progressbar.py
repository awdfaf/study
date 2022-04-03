import time
import tkinter.ttk as ttk
from tkinter import *

root = Tk()
root.title("awdfaf") 
root.geometry("640x480")





# progressbar = ttk.Progressbar(root,maximum=100,mode="indeterminate")
# progressbar.start(10) #10 ms마다 움직임
# progressbar.pack()
# progressbar = ttk.Progressbar(root,maximum=100,mode="determinate")
# progressbar.start(10) #10 ms마다 움직임
# progressbar.pack()

# def btncmd():
#     progressbar.stop()


    
# btn = Button(root,text="중지",command=btncmd)
# btn.pack()

p_var = DoubleVar()
progressbar = ttk.Progressbar(root,maximum=100,length=150,variable=p_var)
progressbar.pack()



def btncmd():
    for i in range(1,101):
        time.sleep(0.01) #대기

        p_var.set(i) # 값 설정
        progressbar.update() #ui 업데이트
        print(p_var.get())

    
btn = Button(root,text="시작",command=btncmd)
btn.pack()
root.mainloop()
