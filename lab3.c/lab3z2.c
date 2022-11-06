#include <stdio.h>
int main(int argc, char** argv) {
short N = 4;
int result = 1;
// write your code here
while(N>0){
    
    result = N*result;
    N--;
}
printf("%d", result);
}