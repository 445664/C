#include<stdio.h>

int main(){
  
    char str[100];
    char word[100];

    printf("Enter a string: \n");
    scanf("%[^\n]",str);

    printf("Enter a Word to reverse: \n");
    scanf("%s",word);

    int get_length(char str[]){
        int i=0,length=0;
        while(str[i]!= '\0'){
         length++;
         i++;
        }
     return length;
    }
   
    
    int isMatch(char word[], char temp[]){
       if(get_length(word)!=get_length(temp))
         return 0;
       else
         for(int i=0; word[i]!='\0'; i++){
           if(word[i]!=temp[i])
             return 0;
        }
     return 1;
    }


    char temp[100];
    for(int i=0; str[i]!='\0'; i++){

      int k = 0;

      while(str[i]!=' ' && str[i]!='\0'){
        temp[k] = str[i];
        k++;
        i++;
      }
      temp[k] = '\0';

      if(isMatch(word, temp)){
        for(int j = k-1; j>=0; j--){
            printf("%c",temp[j]);
        }
      }
      else{
        printf("%s", temp);
      }

     if(str[i] == ' ')
      printf(" ");
     else if(str[i] == '\0')
      break;
    }

    return 0;
}