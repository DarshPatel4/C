# include <stdio.h>
int main() {
int age = 22;
int *ptr = &age;
int age1 = 25;
int *ptrr = &age1;
printf("%u\n", ptr);
ptr++;
printf("%u\n", ptr);
ptr--;
printf("%u\n", ptr);
ptr = ptr - ptrr;
printf("%u\n", ptr);
ptr = &age1;
printf("%d\n", ptr == ptrr);
return 0;
}
