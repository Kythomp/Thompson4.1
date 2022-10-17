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
#include <iomanip>
#include "Queue.h"
using namespace std;


/********************************************************************
 *** FUNCTION : Queue::Queue(const short Q_size):Q_SIZE(Q_size)   ***
 *********************************************************************
 *** DESCRIPTION : This function will set the defaults for the    ***
***                queue. If the user can set a size or it will be***
***               set to 3 by default                             ***
*** INPUT ARGS : const short Q_size=3		                      ***
*** OUTPUT ARGS : n/a                                             ***
*** IN/OUT ARGS : n/a                                             ***
*** RETURN : n/a                                                  ***
********************************************************************/
Queue::Queue(const short Q_size):Q_SIZE(Q_size)
{
    front = -1;
    back = -1;
    queue = new QElement[Q_SIZE];
}


/********************************************************************
*** FUNCTION void Queue::enQueue(const QElement e)                ***
*********************************************************************
*** DESCRIPTION : enQueue will add an element to the back of the  ***
***               queue                                           ***
*** INPUT ARGS : const QElement e                                 ***
*** OUTPUT ARGS : n/a                                             ***
*** IN/OUT ARGS : n/a                                             ***
*** RETURN : n/a                                                  ***
********************************************************************/
void Queue::enQueue(const QElement e)
{
    if(isFull())
    {
        cout << "Can't add to queue. The queue is full. Overflow has occured" << endl;
        return;
    }
    else if(isEmpty())
    {
       front = back = 0;
       queue[back] = e;
    }
    else if(back == Q_SIZE-1  && front !=0)
    {
    
        back = 0;
        queue[back] = e;
    }
    else{
        back++;
        queue[back] = e;
    }
    

}


/********************************************************************
 *** FUNCTION void Queue::enDeqeue ( QElement & e)                ***
*********************************************************************
*** DESCRIPTION : deQueue will remove the front item in the queue ***
*** INPUT ARGS : QElement & e                                     ***
*** OUTPUT ARGS : n/a                                             ***
*** IN/OUT ARGS : n/a                                             ***
*** RETURN : n/a                                                  ***
********************************************************************/
void Queue::deQueue( QElement &e)
{
    if(isEmpty())
    {
        cout << "Queue is empty. Underflow has occured" << endl;
    }
    else if(front == back)
    {
        e = queue[front];
        front = -1;
        back = -1;
    }
    else if(front == Q_SIZE-1)
    {
        front = 0;
    }
    else{
        e = queue[front++];
    }
}
 
/********************************************************************
*** FUNCTION : Queue::~Queue();			                          ***
*********************************************************************
*** DESCRIPTION : This function will delete every item from queue ***
*** INPUT ARGS : n/a   						                      ***
*** OUTPUT ARGS : n/a                                             ***
*** IN/OUT ARGS : n/a                                             ***
*** RETURN : n/a                                                  ***
********************************************************************/
Queue::~Queue()
{
    QElement b;
    front = -1;
    back = -1;
    while(!isEmpty())
    {
        deQueue(b);
    }

}

/********************************************************************
*** FUNCTION : bool Queue::isFull();			                  ***
*********************************************************************
*** DESCRIPTION : This function check and return where the queue  ***
**                is full or not. return true or false depending  ***
*** INPUT ARGS : n/a   						                      ***
*** OUTPUT ARGS : n/a                                             ***
*** IN/OUT ARGS : n/a                                             ***
*** RETURN : n/a                                                  ***
********************************************************************/
bool Queue::isFull() const
{
    return ((front == 0 && back == Q_SIZE-1) || front == back + 1);
}

/********************************************************************
*** FUNCTION : bool Queue::isEmpty()			                  ***
*********************************************************************
*** DESCRIPTION : This function will check and return whether     ***
***               or not the queue is empty or not                ***
*** INPUT ARGS : n/a   						                      ***
*** OUTPUT ARGS : n/a                                             ***
*** IN/OUT ARGS : n/a                                             ***
*** RETURN : n/a                                                  ***
********************************************************************/
bool Queue::isEmpty() const
{
    if (front == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}



/********************************************************************
*** FUNCTION void view()                                          ***
*********************************************************************
*** DESCRIPTION : display the queue from front to back            ***
*** INPUT ARGS : n/a                                              ***
*** OUTPUT ARGS : n/a                                             ***
*** IN/OUT ARGS : n/a                                             ***
*** RETURN : n/a                                                  ***
********************************************************************/
void Queue::view()
{
    QElement temp;
    Queue temporary(Q_SIZE);
    

    cout << "FRONT -> ";

    while(!isEmpty())
    {
       deQueue(temp);
       cout << fixed << setprecision(2) << temp << " -> ";
       temporary.enQueue(temp);
       
    }
    cout << "BACK" << endl;
    while(!temporary.isEmpty())
    {
        temporary.deQueue(temp);
        enQueue(temp);
    }
}


/********************************************************************
*** FUNCTION : Queue::Queue( Queue &copy):Q_SIZE(copy.Q_SIZE      ***
*********************************************************************
*** DESCRIPTION : This function will allow a queue to be copied   ***
***               to another queue.                               ***
*** INPUT ARGS : Queue & 					                      ***
*** OUTPUT ARGS : n/a                                             ***
*** IN/OUT ARGS : n/a                                             ***
*** RETURN : n/a                                                  ***
********************************************************************/
Queue::Queue(Queue &copy):Q_SIZE(copy.Q_SIZE)
{
    queue = new QElement[Q_SIZE];
    QElement temp;
    Queue temporary(Q_SIZE);
    front = back = -1;


    while(!copy.isEmpty())
    {
        copy.deQueue(temp);
        temporary.enQueue(temp);
    }
    
    while (!temporary.isEmpty())
    {
        temporary.deQueue(temp);
        copy.enQueue(temp);
        enQueue(temp);
    }
    
}