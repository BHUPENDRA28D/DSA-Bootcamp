#include<stdio.h>

int main(){
    char str[20];
    int i;
    printf("Enter the String\n");
    gets(str);
    // fgets(str,20,stdin);
    for(i=0;str[i];i++);

    printf("Length = %d",i);
    return 0;
}



// #include<stdio.h>
// #include<string.h>
// // upperCase
// void upperCase(char s[]){
//     int i;
//     for(i=0;s[i];i++){
//         if(s[i]>=97 && s[i]<=123)
//           s[i]= s[i]-32;
//     }
//     printf("%s",s);
// }

// // lower case
// void lowerCase(char s[]){
//     int i;
//     for(i=0;s[i];i++){
//         if(s[i]>='A' && s[i]<='Z');
//          s[i]= s[i]+32;
//     }
//     printf("%s",s);
// }
// // Reverse a string
// void Reverse(char s[]){
// int i,temp;
//  int len= strlen(s);
//  for(i=0;i<len/2;i++)
//    {
//         temp= s[i];
//         s[i]= s[len-i-1];
//         s[len-i-1]= temp;
        
//     }
//     printf("\n%s",s);
// }
// // count
// int count(char s[],char w){
//     int i,count=0;
//     for(i=0;s[i];i++){
//         if(w==s[i])
//         count++;
//     }
//     return count;
// }
// // vowels
// int vowels(char s[]){
//     int i,count=0;
//     for(i=0;s[i];i++){
//         if(('a'&&'A'==s[i] ) || ('e'&&'E'==s[i] ) || ('i'&&'I'==s[i] ) || ('O'&&'o'==s[i] )|| ('u'&&'U'==s[i] ))
//          count++;
//     }
//     return count;
// }
// void alphaNumeric(char s[]){
//     int i,count=0;
//     for(i=0;s[i];i++){
//         if ((s[i] >= '0' & s[i] <= '9') || ((s[i] >= 'a' && s[i]<= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))){
//             count=1;
//     }}
//     if(count==1)
//       printf("IS AL");

//       else
//         printf("Not AL");}

// int main(){
//     char str[20];
//     printf("Enter your Name\n");
//     gets(str);
//     char word = 'l';
//     // upperCase(str);
//     // lowerCase(str);
//     // Reverse(str);
//     // printf("%c in string is %d times",word,count(str,word));
//     // printf("%d",vowels(str));
//     alphaNumeric(str);
//     return 0;
// }