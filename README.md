# 303_Assignment_2A
Added try and catch blocks in Source.cpp (and one throw inside the Modify function in Implementation.cpp) for error handling user input on the Modify and Append functions.

Examples of user error and catch block feedback:

Inputing a string instead of an int for index/value (iostream errors):

![Output1](https://user-images.githubusercontent.com/90845996/196589883-2cfad49c-01fa-4e17-98b8-ff6a4bdcf9a2.png)

![Output2](https://user-images.githubusercontent.com/90845996/196590052-079a717b-7b47-40ef-a110-782d31ef3b1d.png)

![Output5](https://user-images.githubusercontent.com/90845996/196590079-ed2f7c1e-fbb8-4586-8bc0-0cf79aeb613d.png)

Index out of range errors:

![Output3](https://user-images.githubusercontent.com/90845996/196590148-b07a280a-465d-49df-a13a-478cf77915e6.png)

![Output4](https://user-images.githubusercontent.com/90845996/196590170-e8571c46-908f-4746-8f9c-bd65659bc0df.png)

The catch blocks simply describe the error to the user and call abort() to end the program
