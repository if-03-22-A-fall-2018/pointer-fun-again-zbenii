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

struct PlayStruct
{
  int int_value;
  double double_value;
  char a_string[64];
};
void print_struct(struct PlayStruct ps,struct PlayStruct *pps);
void change_struct(struct PlayStruct ps,struct PlayStruct *pps);
void print_string(char string_to_print[]);
void change_string(char string1[],char*p_string);

int main(int argc, char const *argv[]) {

  struct PlayStruct play_struct;
  play_struct.int_value=1;
  play_struct.double_value=2.5;
  play_struct.a_string="hello";
  struct PlayStruct *play_struct_pointer=&play_struct;
  print_struct(play_struct,play_struct_pointer);
  change_struct(play_struct,play_struct_pointer);
  print_struct(play_struct,play_struct_pointer);
  //ps is not changed because pps has the same adress like ps, so the pps change affects both
  print_string(play_struct.a_string);
  char another_string[16]="hellohello";
  change_string(play_struct.a_string,another_string);
  print_string(play_struct.a_string);
  return 0;
}

void print_struct(struct PlayStruct ps,struct PlayStruct *pps)
{
  printf("Values of struct ps: <%d> <%lf> <%s> \n",ps.int_value,ps.double_value,ps.a_string);
  printf("Values of struct pps: <%d> <%lf> <%s> \n",pps->int_value,pps->double_value,pps->a_string);
  printf("\n");
}

void change_struct(struct PlayStruct ps,struct PlayStruct *pps)
{
  ps.int_value=2;
  ps.double_value=4.5;
  ps.a_string="bye";
  pps->int_value=5;
  pps->double_value=6.5;
  pps->a_string="byebye";
}

void print_string(char string_to_print[])
{
  printf("%s\n",string_to_print);
}

void change_string(char string1[],char*p_string)
{
  string1[3]="\0";
  p_string[2]="\0";
}
