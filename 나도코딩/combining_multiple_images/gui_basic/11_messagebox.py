import tkinter.messagebox as msgbox
from tkinter import *


root = Tk()
root.title("awdfaf") 
root.geometry("640x480")


def info():
    msgbox.showinfo("알림","정상 예매 완료")


def warn():
    msgbox.showwarning("경고","해당 좌석 매진")

def error():
    msgbox.showerror("에러","오류")

def okcancle():
    msgbox.askokcancel("확인/취소","선택")

def retrycancle():
    msgbox.askretrycancel("재시도/취소","선택")

def yesno():
    msgbox.askyesno("예/아니오","선택")

def yesnocancle():
    reponse = msgbox.askyesnocancel(title=None,message="예/아니오/취소 \n 어떻게?")
    print("응답:",reponse)

    if reponse == 1:
        print("예")
    elif reponse ==0:
        print("아니오")
    else:
        print("취소")


Button(root,command=info,text="알림").pack()
Button(root,command=warn,text="경고").pack()
Button(root,command=error,text="에러").pack()


Button(root,command=okcancle,text="확인 취소").pack()
Button(root,command=retrycancle,text="재시도/취소").pack()
Button(root,command=yesno,text="예 아니오").pack()
Button(root,command=yesnocancle,text="예 아니오 취소").pack()


root.mainloop()
