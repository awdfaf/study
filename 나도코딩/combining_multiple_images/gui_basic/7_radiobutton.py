from cgi import print_arguments
from msilib.schema import CheckBox
from tkinter import *

from numpy import var

root = Tk()

root.title("awdfaf") 
root.geometry("640x480")


Label(root,text="메뉴를 선택하세요").pack()

bur_var = IntVar()
btn_bur1 = Radiobutton(root,text="햄버거",value=1,variable=bur_var)
btn_bur1.select()
btn_bur2 = Radiobutton(root,text="치킨버거",value=2,variable=bur_var)
btn_bur3 = Radiobutton(root,text="치즈버거",value=3,variable=bur_var)

btn_bur1.pack()
btn_bur2.pack()
btn_bur3.pack()


Label(root,text="음료를 선택하세요").pack()

drink_var=StringVar()
btn_drink1 = Radiobutton(root,text="콜라",value="콜라",variable=drink_var)
btn_drink1.select()
btn_drink2 = Radiobutton(root,text="사이다",value="사이다",variable=drink_var)
btn_drink3 = Radiobutton(root,text="환타",value="환타",variable=drink_var)

btn_drink1.pack()
btn_drink2.pack()
btn_drink3.pack()

def btncmd():
    print(bur_var.get())
    print(drink_var.get())




    
btn = Button(root,text="클릭",command=btncmd)
btn.pack()

root.mainloop()
