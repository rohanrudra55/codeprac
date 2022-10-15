#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char c[10];
	for(int i=0;i<10;i++){
		scanf("%c",&c[i]);
	}
	c=tolower(c);
	puts(c);
}
// version 1

	// char** sentence;
	// sentence=(char**)calloc(10,sizeof(char*));
	// char word[80];
	// char *temp;
	// int i=0;
	// while(1){
	// 	if(i>10)
	// 	sentence=realloc(sentence,10*sizeof(char*));
	// 	scanf("%s",&word);
	// 	int l=strlen(word);
	// 	temp=malloc(l+1);
	// 	strcpy(temp,word);
	// 	sentence[i]=temp;
	// 	if(*(temp+l-1)=='.')
	// 		break;
    //     i++;
    // }
	// puts("You enterd:");
	// for(int j=0;j<=i;j++){
	// 	temp=sentence[j];
	// 	printf("\"%s\" ",temp);
	// }

//version 2

	// char** sentence;
	// sentence=(char**)calloc(10,sizeof(char*));
	// char* word;
	// word=(char*)calloc(10,sizeof(char));
	// // char word[80];
	// char *temp;
	// int i=0,j=0;
	// while(1){
	// 	if(i>10)
	// 	sentence=realloc(sentence,10*sizeof(char*));
	// 	j=0;
	// 	while(1){
	// 	if(j>10)
	// 		word=realloc(word,1*sizeof(char));
	// 	scanf("%c",&word[j]);

	// 	if(word[j]==' ')
	// 		break;
	// 	j++;
	// }
	// 	scanf("%s",&word);
	// 	int l=strlen(word);
	// 	temp=malloc(l+1);
	// 	strcpy(temp,word);
	// 	sentence[i]=temp;
	// 	if(*(temp+l-1)=='.')
	// 		break;
    //     i++;
    // }

	// Version 3

// 	char* word;
// 	word=(char*)calloc(10,sizeof(char));
// 	int j=0,start=-1;
// 	while(1){
		
// 		if(j>10)
// 			word=realloc(word,1*sizeof(char));
// 		scanf("%c",&word[j]);
// 		if(word[j]==' ' && word[j-1]==' ')
// 			continue;
// 		if(word[j]=='<')
// 			exit(0);
// 		if(word[j]==' '||word[j]=='.'){
// 			// Words extracting.
// 			// char* l=&word[start+1];
// 			// for(int i=0;i<j;i++)
// 			// 	printf("%c",*(l+i));
// 			printf("%c",word[start+1]);
// 			start=j;
// 			printf("\n");
// 		}
// 		if(word[j]=='.'){
// 			break;
// 		}
// 		j++;
// 	}
// 	// printf("%d",a);
// 	return 0;
// }


//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// #define TOTAL 194433 //Total number of words in the file

// char *words[TOTAL];
// int slno[26];
// static int turn=0;

// void load_dictionary();
// void input();
// void search(char *letter,int length);
// void display(char* word_to_display,int size_of_word);

// int main(){
//     load_dictionary();
//     printf("Enter any sentence which ends with a '.' and send '<' to exit\nNOTE: IT'S STILL UNDER MODIFICATIONS SO IT'S CAPABILITIES ARE LIMITED\n(Press enter to continue) ");
//     char temp;
//     scanf("%c",&temp);
//     while(1)
//         input();    
// 	// char* sentence=(char*)calloc(10,sizeof(char));
// 	// int position=0,start=-1;
// 	// while(1){
//     //     // start=start-1;
// 	// 	if(position>10) //Reallocating if the size exceds
// 	// 		sentence=realloc(sentence,1*sizeof(char));
// 	// 	scanf("%c",&sentence[position]);
// 	// 	if(sentence[position]==' ' && sentence[position-1]==' ') // Skipping the excess spaces
// 	// 		continue;
// 	// 	if(sentence[position]==' '||sentence[position]=='.'){ // words extracting.
//     //         // printf("Word : %c",sentence[start+1]);
//     //         // if(sentence[start+1]>64&&sentence[start+1]<91 || sentence[start+1]>96 && sentence[start+1]<123)
//     //         if(sentence[start+1]>96 && sentence[start+1]<123)
// 	// 		    search(&sentence[start+1],(position-start)); //Passing the word
//     //         // char* word=&sentence[start];
// 	// 		// for(int i=0;i<position;i++)
// 	// 		// 	printf("%c",*(word+i));
// 	// 		// printf("\n");
//     //         start=position;
// 	// 	}
// 	// 	if(sentence[position]=='.'){
// 	// 		break;
// 	// 	}
// 	// 	position++;
// 	// }
//     // printf("\nPress enter to end");
//     // scanf("%c",&temp);
//     // printf("e[1;1H\e[2J");
//     return 0;
// }
// void input(){
//     printf(">>>");
// 	char* sentence=(char*)calloc(10,sizeof(char));
// 	int position=0,start=-1;
// 	while(1){
//         // start=start-1;
// 		if(position>10) //Reallocating if the size exceds
// 			sentence=realloc(sentence,1*sizeof(char));
// 		scanf("%c",&sentence[position]);
//         if(sentence[position]=='<')
// 			exit(0);
// 		if(sentence[position]==' ' && sentence[position-1]==' ') // Skipping the excess spaces
// 			continue;
// 		if(sentence[position]==' '||sentence[position]=='.'){ // words extracting.
//             // printf("Word : %c",sentence[start+1]);
//             // if(sentence[start+1]>64&&sentence[start+1]<91 || sentence[start+1]>96 && sentence[start+1]<123)
//             if(sentence[start+1]>96 && sentence[start+1]<123)
// 			    search(&sentence[start+1],(position-start)); //Passing the word
//             // char* word=&sentence[start];
// 			// for(int i=0;i<position;i++)
// 			// 	printf("%c",*(word+i));
// 			// printf("\n");
//             start=position;
// 		}
// 		if(sentence[position]=='.'){
// 			break;
// 		}
// 		position++;
// 	}

// }
// void search(char *letter,int length){
//     int position=-1,left=0,right=26,middle=right/2;
//     // display(letter,length);
//     // char letter;
//     // for(int i=0;i<length;i++)
//     //     if(letter[i]!=' ')
//     //         printf("%c",letter[i]);
//     // printf("\n");
//     // printf("%c",letter[0]);
//     // printf("%d",slno[middle]);
//     while(left<=right){
//         position=slno[middle];
//         char l=(char)(*words[position]);
//         if(l==letter[0]){
//             // printf("%c\n",l);
//             // printf("%c",letter[0]);
//             break;
//         }
//         else if(l>letter[0])
//             right=middle-1;
//         else
//             left=middle+1;
//         middle=(right+left)/2;
//         // printf("%d\n",middle);
//     }
//     // printf("%d",position);
//     // printf("\nword: \"%c\"",*words[position]);
//     int location=position,flag=0,i=1;
//     length=length-1;
//     // printf("Length of word: %d\n",length);
//     if(position!=-1){
//         while(1){
//             // printf("%d\n",position);
//             char* word=words[position];
//             // printf("%c",letter[i]);
//             // printf("%s",word);
//             if(letter[i]==word[i]){
//                 // puts("Matched1");
//                 // printf("%d\n",i);
//                 if(i+1 ==length){
//                     // printf("%d",i);
//                     // puts("Matched2");
//                     flag=1;
//                     break;
//                 }
//                 i++;
//             }
//             position++;
//             if(position==slno[location])
//                 break;

//         }
//         // printf("%d",position);
//         if(flag==0){
//             // if(letter[0]>96 && letter[0]<91){
//                 if(turn ==0){
//                     turn++;
//                     printf("\nCheck the spelling of:\n");
//                     }
//                 printf("\t\t\t%d) ",turn++);
//                 display(letter,length);
//             }
//         // }
//         else
//             printf("No error found\n");
//     }
// }
// void load_dictionary(){
//     FILE *dictionary;
//     dictionary=fopen("english3.txt","r");
//     if(dictionary==NULL){
//         puts("File not found!\n");
//         exit(0);
//     }
//     char word[80];
//     int i=0,alpha=97;
//     while ( fgets ( word, 80, dictionary ) != NULL ) {
//         int length=strlen(word);
//         char *flag=malloc(length+1);
//         strcpy(flag,word);
//         words[i]=flag;
//         if(*flag==alpha){
//             // printf("%c",*words[i]);
//             slno[alpha-97]=i;
//             alpha++;
//         }
//         i++;
//     }
//     printf("File loaded\n");
//     fclose ( dictionary ) ;
// }
// void display(char* word_to_display,int size_of_word){
//     // printf("%d",size_of_word);
//     for(int i=0;i<=size_of_word;i++){
//         if(word_to_display[i]!='.'&& word_to_display[i]!=' ')
//             // printf("%d",i);
//             printf("%c",word_to_display[i]);
//     }
//     // printf("||\n");
// }