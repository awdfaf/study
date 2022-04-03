from tkinter import *


root = Tk()
root.title("awdfaf") 
root.geometry("640x480")


Label(root,text="메뉴 선택").pack(side="top")

Button(root,text="주문하기").pack(side="bottom")


frmae_bur = Frame(root,relief="solid",bd=1)
frmae_bur.pack(side="left",fill="both",expand=True)
Button(frmae_bur,text="햄버거").pack()
Button(frmae_bur,text="치킨햄버거").pack()
Button(frmae_bur,text="치즈햄버거").pack()


frame_drink = LabelFrame(root,text="음료")
frame_drink.pack(side="right",fill="both",expand=True)
Button(frame_drink,text="콜라").pack()
Button(frame_drink,text="사이다").pack()








root.mainloop()
