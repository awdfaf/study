from tkinter import *

root = Tk()

root.title("awdfaf") #제목
root.geometry("640x480")

label1 = Label(root ,text="hello")
label1.pack()

photo = PhotoImage(file="C:\코딩\git\나도코딩\combining_multiple_images\gui_basic\img.png")
label2 = Label(root,image=photo)
label2.pack()

def change():
    label1.config(text="hihi")

    global photo2
    photo2 = PhotoImage(file="C:\코딩\git\나도코딩\combining_multiple_images\gui_basic\img2.png")
    label2.config(image=photo2)

btn = Button(root,text="클릭",command=change)
btn.pack()



root.mainloop()
