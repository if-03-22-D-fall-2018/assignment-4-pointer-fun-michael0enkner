/*----------------------------------------------------------
 *				HTBLA-Leonding / Class: <2Dhif>
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			pointerfun
 * Author:			<Micahel Enkner>
 * ----------------------------------------------------------
 * Description:
 *pointerfun
 * ----------------------------------------------------------
 */
#include <stdio.h>

void print_integers(int int_value,int *int_pointer)
{
  printf("Got an integer value <%d> and an address to an integer with value <%d>\n",int_value,*int_pointer);
}
void change_integers(int int_value,int *int_pointer)
{
  int_value = 100;
  *int_pointer = int_value;
}
int main(int argc, char const *argv[])
{
  int int_value = 50;
  int *int_pointer;
  int_pointer = &int_value;

  print_integers(int_value,int_pointer);
  change_integers(int_value,int_pointer);
  print_integers(int_value,int_pointer);
  return 0;
}
