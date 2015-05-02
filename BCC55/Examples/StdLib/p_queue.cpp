#include "stlexam.h"
#pragma hdrstop
/**************************************************************************
 *
 * p_queue.cpp - Example program of a priority queue.
 *               See Class Reference Section
 *
 ***************************************************************************
 *
 * (c) Copyright 1994, 1998 Rogue Wave Software, Inc.
 * ALL RIGHTS RESERVED
 *
 * The software and information contained herein are proprietary to, and
 * comprise valuable trade secrets of, Rogue Wave Software, Inc., which
 * intends to preserve as trade secrets such software and information.
 * This software is furnished pursuant to a written license agreement and
 * may be used, copied, transmitted, and stored only in accordance with
 * the terms of such license and with the inclusion of the above copyright
 * notice.  This software and information or any other copies thereof may
 * not be provided or otherwise made available to any other person.
 *
 * Notwithstanding any other lease or license that may pertain to, or
 * accompany the delivery of, this computer software and information, the
 * rights of the Government regarding its use, reproduction and disclosure
 * are as set forth in Section 52.227-19 of the FARS Computer
 * Software-Restricted Rights clause.
 * 
 * Use, duplication, or disclosure by the Government is subject to
 * restrictions as set forth in subparagraph (c)(1)(ii) of the Rights in
 * Technical Data and Computer Software clause at DFARS 252.227-7013.
 * Contractor/Manufacturer is Rogue Wave Software, Inc.,
 * P.O. Box 2328, Corvallis, Oregon 97339.
 *
 * This computer software and information is distributed with "restricted
 * rights."  Use, duplication or disclosure is subject to restrictions as
 * set forth in NASA FAR SUP 18-52.227-79 (April 1985) "Commercial
 * Computer Software-Restricted Rights (April 1985)."  If the Clause at
 * 18-52.227-74 "Rights in Data General" is specified in the contract,
 * then the "Alternate III" clause applies.
 *
 **************************************************************************/
 
 #include <queue>
 #include <deque>
 #include <vector>
 #include <string>
 
 #ifdef _RW_STD_IOSTREAM
 #include <iostream>
 #else
 #include <iostream.h>
 #endif     

 int main ()
 {
#ifndef _RWSTD_NO_NAMESPACE
  using namespace std;
#endif
   //
   // Make a priority queue of int  using a vector container.
   //
   priority_queue<int, vector<int,allocator<int> >, less<int> > pq;
   // 
   // Push a couple of values.
   //
   pq.push(1);
   pq.push(2);
   //
   // Pop a couple of values and examine the ends.
   //
   cout << pq.top() << endl;
   pq.pop();
   cout << pq.top() << endl;
   pq.pop();
   //
   // Make a priority queue of strings.
   //
   priority_queue<string,deque<string,allocator<string> >, less<string> > pqs;
   //
   // Push on a few strings then pop them back off.
   //
   int i;
   for (i = 0; i < 10; i++)
   {
     pqs.push(string(i+1,'a'));
     cout << pqs.top() << endl;
   }
   for (i = 0; i < 10; i++)
   {
     cout << pqs.top() << endl;
     pqs.pop();
   }
   //
   // Make a priority queue of strings using greater.
   //
   priority_queue<string,deque<string,allocator<string> >, 
                 greater<string> > pgqs;
   //
   // Push on a few strings then pop them back off.
   //
   for (i = 0; i < 10; i++)
   {
     pgqs.push(string(i+1,'a'));
     cout << pgqs.top() << endl;
   }
   for (i = 0; i < 10; i++)
   {
     cout << pgqs.top() << endl;
     pgqs.pop();
   }

   return 0;
}



