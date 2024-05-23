# BillSpliterID2
BillSplitterID2 is a project
                                    ........What is In Project......  
                                   < -  - - - - DATA STRUCTURE USED------>
 the data structure used in this project is 
 # unordered maps
         The uordered mapping is one of the most suitable data structure to store the values in key value pair form.
         The unorder mapping maintains no sequence in the elements(key-value pair).
# it is an STL container that stores elements by combining the key value and a mapped value. the mapped value is associated with a key. yhe key value is used to identify the elements.
                                 < - - - - - ABOUT THE PROJECT- - - - ->
 # splits the bill among all the friend
 # the payer will bill the complete amount
 # Inputs
        first the following inputs are taken from user that are written in calculate function.
  # number of friends (including payer)
  # payer
   # payee 
   # amount to pay in resturant
   
           ....................(ProjectID2.cpp)....................
   # there is a class named Bill in a file ProjectID2.cpp
   class contain two functions
   # unordered map
   # calculate function
   # display funtion
   ** < - -Calculate function - ->**
   In calculate function, inputs are taken from users as mentioned above.
   The total amount taken from user is divided with total friends except the payer
   Split amount is added into the payer, payee and friends balance respectively.
   The payer pays the full amount of the bill.
   ** < - -Display function - ->**
   the balance of all friends and payer is displayed
   # the key value points to friends name.
   # the mapped value points to the balance respectively.

   if the balance is positive,  friends need to collect respective amount.
   if balance is negative, friends need to pay respective amount.
   if balance is zero then friends need nothing  to pay or collect.

   
           ....................(Projectmain.cpp)....................
           a new cpp file is made 
   # an object named "b1" is created for class "Bill". 
   the both functions of calculate() and display are called in main with the object b1.

<- - - - - - That's how we created and completed our ever first project in DSA - - - - - >
# please ignore the negligences and other mistakes

# if anyone wants to run the project then can run in any IDE by using two files named as ProjectID2.cpp and projectmain.cpp. 
