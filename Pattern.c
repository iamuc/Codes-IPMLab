#include<stdio.h>
void main(){
int rows=5, curr_row, spaces,num,print;
for(curr_row=1;curr_row<=rows; curr_row++){
    spaces= (rows- curr_row);
    print=1;
    for(;print<= spaces; print++) printf(" ");
    for(num=curr_row; num<=(1+((curr_row-1)*3)); num++) printf("%d", num);
    printf("\n");
}
}
