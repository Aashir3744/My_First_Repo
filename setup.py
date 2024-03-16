import tkinter as tk

def greet():
    print("Hello, Tkinter!")

# Create the main window
root = tk.Tk()
root.title("Simple GUI")

# Create a label widget
label = tk.Label(root, text="Hello, Tkinter!")
label.pack()

# Create a button widget
button = tk.Button(root, text="Greet", command=greet)
button.pack()

# Run the Tkinter event loop
root.mainloop()

