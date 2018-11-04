/*----------------------------------------------------------
 *				HTBLA-Leonding / Class: <2AHIF>
 * ---------------------------------------------------------
 * Exercise Number: 5
 * Title:			<PointerFun again>
 * Author:		<Benjamin Besic>
 * ----------------------------------------------------------
 * Description:
 * < It's pointer fun, just with arrays. (more complicated)>
 * ----------------------------------------------------------
 */

#include <stdio.h>
#include <string.h>

struct PlayStruct
{
  int int_value;
  double double_value;
  char a_string[64];
};
void print_struct(struct PlayStruct ps,struct PlayStruct *pps);
void change_struct(struct PlayStruct ps,struct PlayStruct *pps);
void print_string(char string_to_print[]);
void change_string(char string1[],char* p_string);

int main(int argc, char const *argv[]) {

  struct PlayStruct play_struct={1,2.5,"hello"};
  struct PlayStruct *play_struct_pointer=&play_struct;
  print_struct(play_struct,play_struct_pointer);
  change_struct(play_struct,play_struct_pointer);
  print_struct(play_struct,play_struct_pointer);
  //ps is not changed because pps has the same adress like ps, so the pps change affects both

  print_string(play_struct.a_string);
  printf("\n");
  char another_string[16]="hellohello";
  char *p_another_string = another_string;
  change_string(play_struct.a_string,p_another_string);
  print_string(play_struct.a_string);
  print_string(another_string);
  //both strings got cut because I added '\0'
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
  ps.double_value=3.5;
  ps.a_string[0]='b';
  ps.a_string[1]='y';
  ps.a_string[2]='e';
  ps.a_string[3]='\0';
  pps-> int_value=6;
  pps->double_value=7.5;
  pps->a_string[0]='b';
  pps->a_string[1]='y';
  pps->a_string[2]='e';
  pps->a_string[3]='b';
  pps->a_string[4]='y';
  pps->a_string[5]='e';
  pps->a_string[6]='\0';

}

void print_string(char string_to_print[])
{
  printf("%s\n",string_to_print);
}

void change_string(char string1[],char* p_string)
{
  string1[2]='\0';
  p_string[1]='\0';
}
