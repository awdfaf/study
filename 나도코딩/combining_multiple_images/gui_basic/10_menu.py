from tkinter import *
from venv import create

root = Tk()
root.title("awdfaf") 
root.geometry("640x480")



def create_new_file():
    print("새 파일은 만듭니다.")



menu = Menu(root)

# file 메뉴
menu_file = Menu(menu,tearoff=0)
menu_file.add_command(label="aa",command=create_new_file)
menu_file.add_command(label="bb")
menu_file.add_separator()
menu_file.add_command(label="cc")
menu_file.add_separator()
menu_file.add_command(label="Save all",state="disable") #비활성화
menu_file.add_separator()
menu_file.add_command(label="Exit",command=root.quit)

menu.add_cascade(label="File",menu=menu_file)


# edit 메뉴
menu.add_cascade(label="Edit")


# Languge 메뉴 추가(라디오 버튼 통해서 선택)
menu_lang = Menu(menu,tearoff=0)
menu_lang.add_radiobutton(label="py")
menu_lang.add_radiobutton(label="java")
menu_lang.add_radiobutton(label="c")
menu.add_cascade(label="Language",menu=menu_lang)


#체크박스
menu_view = Menu(menu,tearoff=0)
menu_view.add_checkbutton(label="show minimap")
menu.add_cascade(label="View",menu=menu_view)












root.config(menu=menu)
root.mainloop()
