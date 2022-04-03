from cgi import print_arguments
from tkinter import *

root = Tk()

root.title("awdfaf") 
root.geometry("640x480")

listbox = Listbox(root,selectmode="extended",height=0)
listbox.insert(0,"a")
listbox.insert(1,"b")
listbox.insert(2,"c")
listbox.insert(END,"d")
listbox.insert(END,"e")
listbox.pack()

def btncmd():
    # listbox.delete(END) # 맨 뒤 삭제 / END대신 숫자 넣을 수 있다
    
    # print("리스트에는",listbox.size(),"개가 있다")

    # print("1번째 부터 3번째까지의 항목 : ",listbox.get(0,2)) #항목확인

    print("선택된 항목 : ",listbox.curselection()) #선택된 항목 확인, 위치로 확인






    
btn = Button(root,text="클릭",command=btncmd)
btn.pack()

root.mainloop()
