
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
int a;
struct List * l;
a = 2;
l = &temp_list;
initList(&temp_list);
addBack(&temp_list,createStrNode("a",fdl_str));
addBack(&temp_list,createStrNode("b",fdl_str));
addBack(&temp_list,createIntNode(1,fdl_int));
addBack(&temp_list,createIntNode(2,fdl_int));
addBack(&temp_list,createIntNode(3,fdl_int));
;
if(findNode(l,createStrNode("a",fdl_str)) == 0)
printf("%s","yes");
else
{
}
return 0;
}
