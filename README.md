# BillSpliterID2
BillSplitterID2 is a project 
Where the bill of different outings or other bills  calculated between the friends. But the payer has to pay the full amount of bill.
                                    ........What is In Project......  
                                   < -  - - - - DATA STRUCTURE USED------>
 the data structure used in this project is 
 # unordered maps
         The uordered mapping is one of the most suitable data structure to store the values in key value pair form.
         The unorder mapping maintains no sequence in the elements(key-value pair).
 It is an STL container that stores elements by combining the key value and a mapped value. the mapped value is associated with a key. the key value is used to identify the elements.
                                 < - - - - - ABOUT THE PROJECT- - - - ->
  splits the bill among all the friend
  the payer will bill the complete amount
  **Inputs**
        first the following inputs are taken from user that are written in calculate function.
   1.number of friends (including payer and payee)
   2.number of outings
   3.payer
   4. number of payee
   5. payee 
   6. amount to pay in resturant

   #        ....................(DSA.h)....................
its a prototype file of the project , where a class named  "bill" is formed.
the unorder_map pair is used named as p1.
vectors are created.
three functions are defined.
1. add
2.calculate
3.display

   #        ....................(DSAProj.cpp)....................
     The three functions defined in class are implemented in this file.
              ** < - -add function - ->**
 In add funtion:    
           function's parameter "name" is added in unorder map P1 with the intial balance 0 and declared by a constant 
           reference.
            -> A condition is checked where if name is not founded in container then added by calling the push_back funtion 
            of the vector(names).
            the push_back is uded to add the item in the container.


                    ** < - -Calculate function - ->**
   In calculate function:
                  the payer , amount and vector named payee are taken by reference.
                  the amount is split between all payee just by dividing the amount with payees vector size(size involved 
                  all the payee.)
                  The total amount is subtracted from the payer's balance as payer has to pay the full amount.
                  For each loop is used, 
                  where each payee's balance is subtracted by the splitAmount. 
                    
                     
                     ** < - -Display function - ->**
   the balance of all payees, other friends and payer is displayed
   " the key value points to friends name."
   " the mapped value points to the balance respectively."

   if the balance is positive,  friends need to collect respective amount.
   if balance is negative, friends need to pay respective amount.
   Else,  friends need nothing  to pay or collect.

   
  #  ....................(DSAmain.cpp)....................
           a new cpp file is made 
   > an object named "b1" is created for class "Bill". 
   first, the inputs are taken as mentioned above and stored in respective variables.
   The Friends name are taken by user until it reach to the total number of friends.
   then add function is invoked.

   after taking the payer's input, it is checked if user input a name that is not present in friends name by using if 
   codition. 
   if the"if" condition is true then the new name other than friends name is included in friends with a warning that first 
  it is not present in friends name.


   The payees are added until it reach to the total number of payee.
   same the "if" condition is checked here, and if new payee name is added other than friends name, the warning is shown and 
  new payee name is added.
   in the Payeee(vector) the payee are added by calling push_back function.


   The calculate funtion is invoked that is taking the parameters of(payer, amount , payeee)as mentioned above.

   The both functions of calculate() and display are called in main with the object b1.

             <- - - - - - That's how we created and completed our ever first project in DSA - - - - - >
                                  
                                  
       ***please ignore the negligences and other mistakes***

 if anyone wants to run the project then can run in any IDE by using the files named asDSA.h , DSAproj.cpp and DSAmain.cpp. 


(<img width="924" alt="SS1" src="https://github.com/ayesha-yousaf5/BillSpliterID2/assets/147921490/09d73226-81b3-45b6-a06f-55aa34d8dbec">
<img width="917" alt="SS2" src="https://github.com/ayesha-yousaf5/BillSpliterID2/assets/147921490/f131a4cd-d90a-4c76-b87a-7f081d910711">
<img width="914" alt="SS3" src="https://github.com/ayesha-yousaf5/BillSpliterID2/assets/147921490/53d94a46-20f3-4745-9be2-97aefdade263">


This screenshot is real output of the project. please ignore other uploaded outputs.)
 
