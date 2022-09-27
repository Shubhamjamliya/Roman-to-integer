//program to convert given roman number to integer value.
// by-shubham jamliya

#include<stdio.h>
#include<stdlib.h>

//In this function:one character is taken from a string as argument and converted to its integer value. 
static int roman_to_integer(char c) {
    switch(c) {
    case 'I':
         return 1;
    case 'V':  
        return 5;  
    case 'X':  
        return 10;  
    case 'L':  
        return 50;  
    case 'C':  
        return 100;  
    case 'D':  
        return 500;  
    case 'M':  
        return 1000;  
    default:
        return 0;
    }
}
//In this function the single integer values return by above function is evaluated..
int roman(char *s) {
    int num=roman_to_integer(s[0]);

    for(int i=1;s[i]!='\0';i++) {
           int prevnum=roman_to_integer(s[i-1]);   //prevnum= previous number
           int cur_num=roman_to_integer(s[i]);     //cur_num= current number
           if(prevnum<cur_num) {
                 num= num-prevnum+(cur_num-prevnum);
           } else {
            num+=cur_num;
           }
    }
    return num;
}
int main() {
               char str[20];
               printf("Enter a roman number:");
               scanf("%s",str);

               printf("original number is:%s\n",str);
               printf("Roman to integer is:%d\n",roman(str));



    return 0;
}