#include <stdlib.h>
#include "mystring.h"

// Type "man string" to see what every function expects.

int mystrlen(char * s) {
	int count = 0;
	while(s[count] != '\0') {
		count ++;
	}
	return count;
}

char * mystrcpy(char * dest, char * src) {
	int i = 0;
	while ((dest[i] = src[i]) != '\0') {
		i ++;
	}
	return dest;
}

char * mystrcat(char * dest, char * src) {
	int i,j;
	i = j = 0;

	while(dest[i] != '\0') {
		i ++;
	}

	while((dest[i++] = src[j++]) != '\0')
		;
	return dest;
}

int mystrcmp(char * s1, char * s2) {
	int index = 0;
	while (s1[index] != '\0') {
		if (s2[index] == '\0') {
			return 1;
		}
		else if (s1[index] > s2[index]) {
			return 1;
		}
		else if (s1[index] < s2[index]) {
			return -1;
		}
		index ++;
	}
	if (s1[0] == '\0') {
		return -1;
	}
	if (s2[index] != '\0')
	{
		return -1;
	}
	return 0;
}

char * mystrstr(char * hay, char * needle) {
	int hayindex = 0;
	int needleindex = 0;
	while (hay[hayindex] != '\0') {
		if (hay[hayindex] == needle[needleindex]) {
			int true = 1;
			int i = 0;
			needleindex = 0;
			while (needle[needleindex + i] != '\0') {
				if (hay[hayindex + i] != needle[needleindex + i]) {
					true = 0;
					break;
				}
				i ++;
			}
			if (true == 1) {
				return &hay[hayindex];
			}
		}
		hayindex ++;
	}
	return NULL;
}

char * mystrdup(char * s) {
	int l = 0;
	while (s[l] != '\0') {
		l ++;
	}	
	char *newstr = malloc (l + 1);
	int index = 0;
	while (s[index] != '\0') {
		newstr[index] = s[index];
		index ++;
	}
	newstr[index] = '\0';
	return newstr;
}

char * mymemcpy(char * dest, char * src, int n)
{
	int i = 0;
	while (i < n) {
		dest[i] = src[i];
		i ++;
	}
}

