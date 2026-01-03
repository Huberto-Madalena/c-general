This is a calculator application made in order to go over a few concepts that are typical of the C Programming language. More similar smaller projects are soon expected. 
In order to run this code, you should have GCC installed on your local environment. Once it's installed, you can run this application by typing in:
gcc switch.c -o switch
Where the flag -o means output, where you should specify the output file. After successfully compiling the programme, you can run it by typing it the generated executable name.
e.g.: gcc switch.c -o switch
then type in:
switch

edit: the first file - switch.c- is a calculator which for basic arithmetic operations. The second file -user_application.c - is a full-on application that integrates the calculator programme seen earlier plus a temperature conversor, which takes the user's input in Fahrenheit and converts it to the celsius scale. Upon startin the application,
the user is prompted to choose one of two options → either 1 or 2. Choosing 1 will take the user to the calculator programme, whereas option 2 will take the user to the conversor
programme, where he will be prompted to enter a value in Fahrenheit degrees (e.g.: 90) and the output will be given in Celsius degrees. 
