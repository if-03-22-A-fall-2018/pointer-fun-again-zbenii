/*----------------------------------------------------------
 *				HTBLA-Leonding / Class: <2AHIF>
 * ---------------------------------------------------------
 * Exercise Number: 5
 * Title:			<PointerFun again>
 * Author:			<Benjamin Besic>
 * ----------------------------------------------------------
 * Description:
 * <
 *  >
 * ----------------------------------------------------------
 */

#include <stdio.h>
#include "pointer_fun_again.h"

struct PlayStruct
{
  int int_value;
  double double_value;
  char a_string[64];
};

int main(int argc, char const *argv[]) {

  struct PlayStruct play_struct;
  play_struct.int_value=1;
  play_struct.double_value=2.5;
  play_struct.a_string="hello";
  struct PlayStruct *play_struct_pointer=&play_struct;
  print_struct(play_struct,play_struct_pointer);
  return 0;
}

int print_struct(struct PlayStruct ps,struct PlayStruct pps)
{
  printf("Values of struct ps: <%d> <%lf> <%s> \n",ps.int_value,ps.double_value,ps.a_string);
  printf("Values of struct pps: <%d> <%lf> <%s> \n",pps.int_value,pps.double_value,pps.a_string );

  return 0;
}
