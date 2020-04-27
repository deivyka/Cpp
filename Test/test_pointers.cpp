#include <iostream>
using namespace std;

void Show(
   const char *pszStr1 = "Du",
   const char *pszStr2 = "er",
   const char *pszStr3 = "dum" 
   )
   {
      cout << pszStr1 << " " << pszStr2 << " " << pszStr3 << endl;
   }
   
int main( void ){   
   Show();
   Show( "Jeg" );
   Show( "Jeg", "er ikke" );
   Show( "Jeg", "er", "flink!" );
   return 0;
   }
   
/*OUTPUT
Du er dum
Jeg er dum
Jeg er ikke dum
Jeg er flink!
*/