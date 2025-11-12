




# C++ Programming PA2: Write Your Own Hangman Game

---

## Setting up 


- Right now you should be reading this project in my GitHub page.

- What you will do, is download this project as a zip.

- Click on the green button and the at bottom there should be download zip. Click it!

![alt text](images/image.png)

- Once you have done that, go to downloads right click and extract the folder
- You should not see an uncompressed folder called lab4-master. This folder is folder where you will be making changes.

![alt text](images/image2.png)

- It is similar process for Macs! The only difference is that instead of right clicking the file, you double click.



- Once that is done, just like the previous Lab, you will open Visual Studio Code
- Once you are in VS Code, you will open click open folder, and open Lab1 folder. 
- If the following window comes up, you should press the ESC button.

![alt text](images/image13.png)


- Once you have done that you should see the following

![alt text](images/image4.png)
---
## Compile and Run Your Program.

- Just like in the previous Lab0, open up the Developer Command Prompt if you are using Windows or desktop computers. If you are using mac then open up the terminal program.

![alt text](images/image14.png)

- In the developer command prompt (terminal if you are on macs) run the following.

```bash
cd /
```

- There was a bit confusion with [path_to_lab4_folder]
- You need to replace that with the path to your folder for example in my computer I would replace it as
```bash
/Users/navin/source/repos/Lab4-master/Lab4-master
```

- The quickest way to do it is opening up file explorer go to where the project folder. You should see the following. (similar process for macs)

![alt text](images/image15.png)

- You will then hover the cursor anywhere that is on red line and then you will left click. You should the entire path highlighted in blue. Copy it.

![alt text](images/image16.png)

- You will then run the following in the developer command prompt (terminal if you are on a mac)

```bash
cd [paste_what_you_copied]
dir 
```
- If you did everything successful you should the see the following in the developer command prompt (terminal if you are on a mac)

![alt text](images/image17.png)

- YOu will then run the following three commands on the developer command prompt (terminal if you are a mac)

```bash
mkdir build
cd build
cmake ..
```

- If you did everything successful you should see the following output in the developer command prompt ( temrinal if you are on a mac) or something similar

![alt text](images/image18.png)

---
### Window/Desktop Users

- Still keep the developer command prompt open, LEAVE EXATLY HOW IT IS FROM THE PREVIOUS STEP.
- Next you will do the following everytime you make changes to your program and you need to rerun your program. Mac users jump to next section. You will do the same except a different way. This is the most important part of the lab! 

- Type the following in the developer command prompt everytime you need to run your code.


```bash
msbuild ALL_BUILD.vcxproj
cd Debug
pa2
cd ..
```

---
### MAC users

Make sure you are in the build directory in the terminal

Everytime you need to run your code do the following.
```bash 
make
./pa2
```

---
## Starting Programming Assignment 2

- Go the to src folder and open hangman.cpp and main.cpp file.
- There is code in main.cpp that will run hangman using the functions that you will be implementing in hanman.cpp
- Look through the main.cpp and understand how the code works and how its calling the functions that you implement.

- The following is an example output of the program
```bash
Welcome to Hangman!

_ _ _ _ _ _ _
Missed letters: 
Enter a letter: e
Good guess!

_ e _ _ _ _ _
Missed letters: 
Enter a letter: a
Sorry, 'a' is not in the word.
Missed letters: a

_ e _ _ _ _ _
Enter a letter: t
Good guess!

_ e _ t _ _ _
...
Congratulations! You guessed the word: "vector"

```

- Everytime you want to run your program after you make changes,
Go back to the section that I mentioned above that needs to be repeated everytime you run or test your program.




## Turning in your Assignment

- You will compress your folder PA2 to a zip file
- You will then submit the zip file to canvas.

