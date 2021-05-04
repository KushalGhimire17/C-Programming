
#include <stdio.h>
  
// Declaration of union is same as structures
union test {
    int x, y; //4 bytes
    char a;	//1 byte
};
  
  struct testt {
    int x, y; //4 bytes
    char a;	//1 byte
};
  
int main()
{
    // A union variable t
    union test t;
    struct testt x;

  	printf("\n Size of union: %d\n",sizeof(t));
	printf("\n Size of structure: %d\n",sizeof(x));
    t.x = 2; // t.y also gets value 2
    printf("After making x = 2:\n x = %d, y = %d\n\n",
           t.x, t.y);
  
    t.y = 10; // t.x is also updated to 10
    printf("After making y = 10:\n x = %d, y = %d\n\n",
           t.x, t.y);
    return 0;
}


/* 1. Memory size
2. only one member can be accessed in union
*/
