/********************************************************************
*** NAME : Kyle Thompson                                          ***
*** CLASS : CSC 300                                               ***
*** ASSIGNMENT : Assignmen4                                       ***
*** DUE DATE : 10/17/2022                                         ***
*** INSTRUCTOR : GAMRADT                                          ***
*********************************************************************
*** DESCRIPTION :  Create a user-defined Abstract Data Type       ***
***                named Queue. Queue is implemented as an        ***
***                dynamically allocated array which is a         ***
***                circular queue.                                ***
********************************************************************/

#include <iostream>
#include "Queue.h"
using namespace std;


int main()
{

    /********************************************************************
    *** FUNCTION : Queue q(3);                                        ***
    *********************************************************************
    *** DESCRIPTION : This function will create a queue with size 3   ***
    *** INPUT ARGS : 3 is inputted into the queue                     ***
    *** OUTPUT ARGS : n/a                                             ***
    *** IN/OUT ARGS : n/a                                             ***
    *** RETURN : n/a                                                  ***
    ********************************************************************/
    Queue q(3);

    /********************************************************************
    *** FUNCTION q.view()                                             ***
    *********************************************************************
    *** DESCRIPTION : display the queue from front to back            ***
    *** INPUT ARGS : n/a                                              ***
    *** OUTPUT ARGS : n/a                                             ***
    *** IN/OUT ARGS : n/a                                             ***
    *** RETURN : n/a                                                  ***
    ********************************************************************/
    q.view();
    
    /********************************************************************
    *** FUNCTION q.enQueue(-3.00)                                     ***
    *********************************************************************
    *** DESCRIPTION : enQueue will add an element to the back of the  ***
    ***               queue                                           ***
    *** INPUT ARGS : -3.00                                            ***
    *** OUTPUT ARGS : n/a                                             ***
    *** IN/OUT ARGS : n/a                                             ***
    *** RETURN : n/a                                                  ***
    ********************************************************************/
    q.enQueue(-3.00);


    /********************************************************************
    *** FUNCTION q.enQueue(5.65)                                      ***
    *********************************************************************
    *** DESCRIPTION :nQueue will add an element to the back of the    ***
    ***               queue                                           ***
    *** INPUT ARGS : 5.65                                             ***
    *** OUTPUT ARGS : n/a                                             ***
    *** IN/OUT ARGS : n/a                                             ***
    *** RETURN : n/a                                                  ***
    ********************************************************************/
    q.enQueue(5.65);


    /********************************************************************
    *** FUNCTION q.view()                                             ***
    *********************************************************************
    *** DESCRIPTION : display the queue from front to back            ***
    *** INPUT ARGS : n/a                                              ***
    *** OUTPUT ARGS : n/a                                             ***
    *** IN/OUT ARGS : n/a                                             ***
    *** RETURN : n/a                                                  ***
    ********************************************************************/
    q.view();

    /********************************************************************
    *** FUNCTION Queue q2(q)                                          ***
    *********************************************************************
    *** DESCRIPTION :  Will copy all elements in the original         ***
    ***                queue named q into another queue named q2      ***
    *** INPUT ARGS : q                                                ***
    *** OUTPUT ARGS : n/a                                             ***
    *** IN/OUT ARGS : n/a                                             ***
    *** RETURN : n/a                                                  ***
    ********************************************************************/
    Queue q2(q);
    

     /*******************************************************************
    *** FUNCTION q.view()                                             ***
    *********************************************************************
    *** DESCRIPTION : display the queue from front to back            ***
    *** INPUT ARGS : n/a                                              ***
    *** OUTPUT ARGS : n/a                                             ***
    *** IN/OUT ARGS : n/a                                             ***
    *** RETURN : n/a                                                  ***
    ********************************************************************/
    q2.view();


    return 0;
}