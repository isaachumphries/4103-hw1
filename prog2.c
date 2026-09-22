#include <stdio.h>
typedef struct funcs {
  int (*openit) (char *name, int prot);
  void (*closeit)(void);
}
funcs;
int my_openit(char *name, int prot);
void my_closeit(void);
int my_openit(char *name, int prot){
  printf("some name %s and prot %d\n", name, prot);
  return 0;
}
void my_closeit(void){
  printf("my_closeit works");
}
funcs var1 = {my_openit, my_closeit};
void f(funcs *name1){
  name1->openit=my_openit;
  name1->closeit=my_closeit;
  printf("function f works");
}
int main() { 
  funcs var2; 
  f(&var2); 
  var1.openit("t",5);
  var1.closeit();
  var2.openit("s",4);
  var2.closeit();
  printf("var1 and var2 works");
  return 0;
}
