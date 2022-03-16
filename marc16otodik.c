#include <stdio.h>

#define SIZE 26

void feltolt(char tomb[]){

for(int i = 0; i<SIZE;i++){
    tomb[i]='a'+i;
}
}

int main(){

char tomb[SIZE];
feltolt(tomb);
for(int i = 0; i<SIZE; i++){
    printf("%c ",tomb[i]);
}
puts("");

return 0;

}