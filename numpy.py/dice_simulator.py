import tkinter as tk
from PIL import Image, ImageTk
import random
window=tk.Tk()
window.geometry("800x500")
window.title("Dice Roll")



dice=["C:/python/numpy.py/d1.png","C:/python/numpy.py/d2.png","C:/python/numpy.py/d3.png","C:/python/numpy.py/d4.png","C:/python/numpy.py/d5.png","C:/python/numpy.py/d6.png"]
image1=ImageTk.PhotoImage(Image.open(random.choice(dice)))
image2=ImageTk.PhotoImage(Image.open(random.choice(dice)))

label1=tk.Label(window,image=image1)
label2=tk.Label(window,image=image2)


label1.image=image1
label2.image=image2

label1.place(x=300,y=100)
label2.place(x=30,y=100)

def roll_dice():
    image1=ImageTk.PhotoImage(Image.open(random.choice(dice)))
    label1.configure(image = image1)
    label1.image=image1
    
    image2=ImageTk.PhotoImage(Image.open(random.choice(dice)))
    label2.configure(image = image2)
    label2.image=image2
    


button=tk.Button(window,text="Roll",bg="green",fg="black",command=roll_dice)
button.place(x=230,y=0)

window.mainloop()