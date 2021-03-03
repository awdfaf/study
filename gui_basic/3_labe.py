from tkinter import *

root = Tk()
root.title("건우건우")
root.geometry("640x480") #가로*세로

label1 = Label(root,text="안녕하세요")
label1.pack()

photo = PhotoImage(file="gui_basic/img.png")
label2 = Label(root,image=photo)
label2.pack()

def change():
    label1.config(text="ㅎㅇㅎㅇ")

    global photo2
    photo2=PhotoImage(file="gui_basic/gd.png")
    label2.config(image=photo2)
    

btn = Button(root,text="클릭",command=change)
btn.pack()


root.mainloop()