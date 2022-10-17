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
#ifndef _QUEUE_H 
#define _QUEUE_H

//exportable declarations and definitions
typedef double QElement;

class Queue {
	public: 
		/********************************************************************
    	*** FUNCTION : Queue(const short Q_size = 3);                     ***
    	*********************************************************************
    	*** DESCRIPTION : This function will set the defaults for the     ***
		***                queue. If the user can set a size or it will be***
		***               set to 3 by default                             ***
    	*** INPUT ARGS : const short Q_size=3		                      ***
    	*** OUTPUT ARGS : n/a                                             ***
    	*** IN/OUT ARGS : n/a                                             ***
    	*** RETURN : n/a                                                  ***
    	********************************************************************/
		Queue( const short Q_size=3 ); 

		/********************************************************************
    	*** FUNCTION : Queue( Queue & );			                      ***
    	*********************************************************************
    	*** DESCRIPTION : This function will allow a queue to be copied   ***
		***               to another queue.                               ***
    	*** INPUT ARGS : Queue & 					                      ***
    	*** OUTPUT ARGS : n/a                                             ***
    	*** IN/OUT ARGS : n/a                                             ***
    	*** RETURN : n/a                                                  ***
    	********************************************************************/
		Queue( Queue & ); 

		/********************************************************************
    	*** FUNCTION : ~Queue();			                      ***
    	*********************************************************************
    	*** DESCRIPTION : This function will delete every item from queue ***
    	*** INPUT ARGS : n/a   						                      ***
    	*** OUTPUT ARGS : n/a                                             ***
    	*** IN/OUT ARGS : n/a                                             ***
    	*** RETURN : n/a                                                  ***
    	********************************************************************/
		~Queue(); 

		/********************************************************************
    	*** FUNCTION void enQueue(const QElement)                         ***
    	*********************************************************************
    	*** DESCRIPTION : enQueue will add an element to the back of the  ***
    	***               queue                                           ***
    	*** INPUT ARGS : const QElement                                   ***
    	*** OUTPUT ARGS : n/a                                             ***
    	*** IN/OUT ARGS : n/a                                             ***
    	*** RETURN : n/a                                                  ***
    	********************************************************************/
		void enQueue( const QElement );

		/********************************************************************
    	*** FUNCTION void enDeqeue ( QElement &)                          ***
    	*********************************************************************
    	*** DESCRIPTION : deQueue will remove the front item in the queue ***
    	*** INPUT ARGS : QElement &                                       ***
    	*** OUTPUT ARGS : n/a                                             ***
    	*** IN/OUT ARGS : n/a                                             ***
    	*** RETURN : n/a                                                  ***
    	********************************************************************/
		void deQueue( QElement & );

		/********************************************************************
    	*** FUNCTION void view()                                             ***
    	*********************************************************************
    	*** DESCRIPTION : display the queue from front to back            ***
    	*** INPUT ARGS : n/a                                              ***
    	*** OUTPUT ARGS : n/a                                             ***
    	*** IN/OUT ARGS : n/a                                             ***
   		 *** RETURN : n/a                                                  ***
   		 ********************************************************************/
		void view(); 
	private: 
		const short Q_SIZE; 
		typedef QElement * QPointer;
		QPointer queue;
		short front, back;
		bool isEmpty() const;
		bool isFull() const;
};
#endif 