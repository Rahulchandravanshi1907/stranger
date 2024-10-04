//5. //
#include<stdio.h>
main()
{
	char str1[100], str2[100];
	printf("Enter the first string : ");
	fgets(str1, sizeof(str1), stdin);
	
	printf("Enter the second string : ");
	fgets(str2, sizeof(str2), stdin);
	
	int len1 =0, len2=0;
	while (str1[len1] !='\0'){
		if(str1[len1]  =='\n'){
			str1[len1] =='\0';
			break;
		}
		len1++;
	}
	while (str2[len2] !='\0'){
		if(str2[len2]  =='\n'){
			str2[len2] =='\0';
			break;
		}
		len2++;
	}
	int result = stringCompare(str1,str2);
	if (result ==0){
		printf("The strings are equal\n");
	}else if (result<0){
		printf("The first string is less than the second string.\n");
	}else{
		printf("The first string is greater than the second string.\n");
	}
}
