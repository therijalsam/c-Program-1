// This was as an assignement fo rmy CS-1428 class. 

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Drive-in Movie Theater Simulation
Fillmore, a local resident of Radiator Springs, is opening a drive-in theater for town. The mayor, Doc Hudson, has put you in charge of writing the software for this theater.


Part 1: Creating a Theater Data Structure (10 points)

To begin developing the drive-in movie theater software, the first step is to create a structure capable of storing information about the theater. Define a structure named "Theater" that can store the following information:

Theater name
The number of theater screens
The number of parking spots for each screen (*Note: We are going to assume screen have the exact same number of parking spots).
Ensure that the structure uses an appropriate data type for each piece of information. Once the structure is defined, create a variable using this structure, which will be utilized in Part 2.



Part 2: Asking the User for Theater Information (5 points)

Now that the structure is in place, the next step is to gather information about the theater from the user. The user will input the theater name, the number of screens, and the available parking spots for each theater screen.
Your task is to prompt the user for this specified information and process it for a clear display. Make sure you load the acquired information into the structure variable created in Part 1 to recieve credit!  



Note: You can assume that the user will always enter valid input here and that each theater screen has the same amount of parking spots.

Code Block 7.2.1: Part 1 Output
Enter theater name: Radiator Springs
Enter the number of screens: 3
Enter the parking spots per screen: 30

Theater Information
*****************************
Name: Radiator Springs
Screens: 3
Total parking spots: 90
*****************************
Part 3: Helping Fillmore Debug (5 points)

Fillmore attempted to create the "Now Showing" section of the code, which is intended to display the movies shown at the theater. Unfortunately, Fillmore lacks experience in coding, resulting in a few bugs.
Help Fillmore in debugging this section of the code to ensure that the program output matches the example provided below.

Code Block 7.2.2: Part 2 Output
Now Showing
*****************************
Hatchback to the Future
2001 A Honda Odyssey
Guardians of the Ford Galaxy
*****************************
Part 4: Creating and Running Simulations (20 points)

Now that we got the theater and movie information, it's time to sell tickets to the town. Currently, the ticket prices for the theater are set as follows:

Adult Tickets	$10.99
Senior Tickets	$8.99
Child Tickets	$6.99
Member Tickets	$5.99 + a one-time $6.00 Membership Fee


We need to run simulations to understand the potential cost of a movie trip for different scenarios.
The theater offers regular-priced tickets as well as member tickets, which require a one-time membership fee. Since the theater is new, we do not have to worry about existing members.
If a user chooses to become a member, all tickets they purchase will be at the membership price, but they must also pay the one-time membership fee.



Your job is to write simulations which calculates the ticket prices for each of 3 scenario below. 

Comparing prices for 1 adult ticket and 1 child ticket vs 2 member tickets.
Comparing prices for 2 adult tickets vs 2 member tickets.
Comparing pricing for 1 adult ticket, 1 senior ticket, and 1 child ticket vs 3 member tickets.
The program should run simulations for both regular and member ticket scenarios, finding the absolute price difference between them. For each of these scenarios, there is only one person buying everyone's tickets.
Make sure that your simulations incorporate the 8% sales tax for Radiator Springs. You must use variables and expressions and should match the style of the sample simulation below in order to get full credit for this part. 

Code Block 7.2.3: Price Scenario Examples
Calculating Price Scenario
*****************************
1 Senior ticket before tax: $8.99
1 Senior ticket after tax: $9.71

1 Member ticket before tax: $11.99
1 Member ticket after tax: $12.95

Price difference: $3.24
*****************************

Calculating Price Scenario
*****************************
2 Senior, 2 Child tickets before tax: $31.96
2 Senior, 2 Child tickets after tax: $34.52

4 Member tickets before tax: $29.96
4 Member tickets after tax: $32.36

Price difference: $2.16
*****************************
Part 5: Documenting the Code and following Programming Standards (10 points)

Finally, it's crucial to document how the program works and adhere to programming standards. Add the program header below, replacing its information with details relevant to the program.
Additionally, make sure that you follow the style guidelines for the course (Modules -> Module 0 -> C++ Programming Standards and Practices).

Code Block 7.2.4: Program Header Template
/*********************************************************************
File name: example.cpp
Author: <Your Name Here>(<netID>)
Date: XX/XX/XXXX

Purpose:
    Description of the purpose of the program.
Command Parameters:
    Description of the parameters to main().
Input:
    Description of the input to the program.
Results:
    Description of what the program produces.
Notes:
    Description of any special information regarding this program.
*********************************************************************/
Program Requirements and Tips:

* Your program MUST follow the C++ Standards Document provided on CANVAS.

* Your program MUST compile for you to get credit.

* Your program MUST use a structure for Parts 1 and 2.

* Your program MUST use variables and expressions for Part 4 in order to get credit.

* Your program should match the style of the provided partial program output. 

* Your program should use the appropriate datatypes for each variable. 

* Any output which uses money should have a $ and  should be properly rounded to the nearest hundredth place (or cent).

* Use the provided szBreakMessage variable to print out the stars shown in the program.
