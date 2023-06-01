#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

// gets the data from the user and scans the number of occurences a letter has in word1 and word2
void scan_word(int *occurences[26]){ // the value was pointed to occurences from *arr1 and *arr2
	char c;
	while((c = getchar()) != '\n'){
		if (isalpha(c)){
			occurences[toupper(c) - 'A']++; // if the letter exists in a certain word, increment the value corresponding to it. ex: if a exists, then: occurences[0] = 1

		}
}
}

// checks if the two inputted words are equal or anagrams
bool is_anagram(int *occurences1[26], int *occurences2[26]){ //(*) the value was pointed to occurrence1 and occurrence2 from arr1 and arr2, respectively. 
	for(int i = 0; i < 26; i++){
		// checks if the letters in each index are not equal. If all of them are not equal
		if(*occurences1++ != *occurences2++){ // [(*occurences1 and *occurences2) gets the value from the assigned address everytime they are incremented]
			return false; // then return them as false

	}

	}
	return true; // otherwise, return them as true (they are all identical)

}	
int main(void){

// assigning the values of the arrays as 0 first,
	int *arr1[26] = {0}, // (*) gets the address of each array
		*arr2[26] = {0};
	printf("Enter first word: \n");
// calling the function scan_word to change the values of arr1 that was done in occurences
	scan_word(arr1);

	printf("Enter second word: \n");
// calling the function scan_word again to change the values of arr2 that was done in occurences
	scan_word(arr2);


	if(is_anagram(arr1, arr2)){ // if the returned statement is true
		printf("The words are anagrams. \n");
		return 0;
			
	}
	else{

		printf("The words are not anagrams. \n");

	
return 0;
}
}
