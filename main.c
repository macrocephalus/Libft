#include <stdio.h>
#include <ctype.h>

#include "libft.h"

int main()
{
	printf("TEST Function\n \n");
	printf("NAME \t\t REZULTAT\n");
	printf("---------------------------------\n");
	char str01 [] = "I am ROOOOOOOBBBOOOTTT";
	char *c01;
	c01 = ft_memset(str01,'R',5);
	printf("ft_memset \t %s \n",str01);
	printf("ft_memset \t %s \n",c01);
	memset(str01,'H',5);
	printf("memset \t\t %s \n",str01);
	printf("memset \t\t %s \n",c01);
	printf("---------------------------------\n");
	char str02 [] = "I am Romot? Who are you";
	char str002 [] = "I am Romot? Who are you";
	ft_bzero(str02,7);
	bzero(str002,7);

	printf("ft_bzero \t ");
	for (int i = 0; i<15;i++)
	{
		if (str02[i] == 0)
			printf("0");
		else
			printf("%c",str02[i]);
	}
	printf("\n");
	printf("bzero \t\t ");
	for (int i = 0; i<15;i++)
	{
		if (str002[i] == 0)
			printf("0");
		else
			printf("%c",str002[i]);
	}
	printf("\n");
	printf("---------------------------------\n");
	char str03 [] = "0123456789";
	char str031 [42];
	char str032 [42];
	ft_memcpy(str031,str03,11);
	memcpy(str032,str03,10);
	printf("ft_memcpy \t %s \n",str031);
	printf("memcpy \t\t %s \n",str032);
	printf("---------------------------------\n");\
	char str04 [] = "123456789";
	char str041 [42];
	char str042[42];
	ft_memccpy(str041, str04, '4', 8);
	ft_memccpy(str042, str04, '4', 8);
	printf("ft_memccpy \t %s \n",str042);
	printf("memccpy \t %s \n",str042);
	ft_memccpy(str041, str04, 'a', 8);
	ft_memccpy(str042, str04, 'a', 8);
	printf("ft_memccpy \t %s \n",str042);
	printf("memccpy \t %s \n",str042);
	printf("---------------------------------\n");
 	char str05[] = "memmove может оказаться очень полезной функцией..............";
 	char str051[] = "memmove может оказаться очень полезной функцией..............";
 	ft_memmove (str05 + 49, str05 + 38, 47);   
 	memmove (str051 + 49, str051 + 38, 47);   
	printf("ft_memmove \t %s \n",str05);
	printf("memmove \t %s \n",str051);
	printf("---------------------------------\n");
	printf("ft_strlen \t %zu \n",ft_strlen("0123456789"));
	printf("strlen \t \t %zu \n",strlen("0123456789"));
	printf("ft_strlen \t %zu \n",strlen("0"));
	printf("strlen \t\t %zu \n",strlen("0"));
	printf("ft_strlen \t %zu \n",ft_strlen(""));
	printf("strlen \t\t %zu \n",strlen(""));
	printf("---------------------------------\n");
	char str06[] = "123456789";
	char *str061, *str062;
	str061 = ft_memchr(str06,'4',5);
	str062 = memchr(str06,'4',5);
	printf("ft_memchr \t %s \n",str061);
	printf("memchr \t\t %s \n",str062);

	printf("---------------------------------\n");
	char str07 [] = "12345678";
	char str071 [] = "12345678";
	char str072 [] = "1233456789";
	char str073 [] = "1234567";
	printf("ft_memcmp \t %i \n",ft_memcmp(str071,str07,8));
	printf("memcmp \t\t %i \n",memcmp(str071,str07,8));
	printf("ft_memcmp \t %i \n",ft_memcmp(str072,str07,8));
	printf("memcmp \t\t %i \n",memcmp(str072,str07,8));
	printf("ft_memcmp \t %i \n",ft_memcmp(str07,str073,8));
	printf("memcmp \t\t %i \n",memcmp(str07,str073,8));

	printf("---------------------------------\n");
	char *ft_str, *str;
	ft_str = ft_strdup("ffgfgfgg");
	printf("ft_strdup \t %s \n",ft_str);
	str = strdup("ffgfgfgg");
	printf("strdup \t\t %s \n",str);
	ft_str = ft_strdup("123456789");
	printf("ft_strdup \t %s \n",ft_str);
	str = strdup("123456789");
	printf("strdup \t\t %s \n",str);
	ft_str = ft_strdup("");
	printf("ft_strdup \t %s \n",ft_str);
	str = ft_strdup("");
	printf("strdup \t\t %s \n",str);
	ft_str = ft_strdup("");
	printf("ft_strdup \t %s \n",NULL);
	str = strdup("");
	printf("strdup \t\t %s \n",NULL);
	printf("---------------------------------\n");
	char temp1 [] = "Hello Kitty";
	char temp2[40];
	char *ch;
	ch = ft_strcpy(temp2,temp1);
	printf("ft_strcpy \t %s \n",temp2);
	printf("ft_strcpy \t %s \n",ch);

	char temp4 [] = "";
	char temp5[40];
	char *ch1;
	ch1 = ft_strcpy(temp5,temp4);
	printf("ft_strcpy \t %s \n",temp5);

	char f_temp1 [] = "Hello Kitty";
	char f_temp2[40];
	char *f_ch;
	f_ch = ft_strcpy(f_temp2,f_temp1);
	printf("strcpy \t\t  %s \n",f_temp2);
	printf("strcpy \t\t  %s \n",f_ch);

	char f_temp4 [] = "";
	char f_temp5[40];
	char *f_ch1;
	f_ch1 = strcpy(f_temp5,f_temp4);
	printf("strcpy \t\t  %s \n",f_temp5);

	printf("---------------------------------\n");
	char temp6 [] = "Night Wolf";
	char temp7[40];
	char *temp8;
	temp8 = ft_strncpy(temp7,temp6,4);
	printf("ft_strncpy \t %s \n",temp7);
	printf("ft_strncpy \t %s \n",temp8);
		temp8 = strncpy(temp7,temp6,4);
	printf("strncpy \t %s \n",temp7);
	printf("strncpy \t %s \n",temp8);
	printf("---------------------------------\n");
	char temp9 [] = "Antonio ";
	char temp10[40] = "Gandonio ";
	ft_strcat(temp10,temp9);
	printf("ft_strcat \t %s \n",temp10);
	strcat(temp10,temp9);
	printf("strcat \t\t %s \n",temp10);

	char temp11 [] = "Antonio ";
	char temp12[40];
	ft_strcat(temp12,temp11);
	printf("ft_strcat \t %s \n",temp12);

	char temp13 [] = "Antonio ";
	char temp14[40];
	strcat(temp14,temp13);
	printf("strcat \t\t %s \n",temp14);
	printf("---------------------------------\n");
	char temp07 [] = "Antonio ";
	char temp071[40] = "Gandonio ";
	char temp072[40] = "Gandonio ";

	ft_strncat(temp071,temp07,6);
	strncat(temp072,temp07,6);
	printf("ft_strncat \t %s \n",temp071);
	printf("strncat \t %s \n",temp072);

	printf("---------------------------------\n");
	char temp08 [] = "123456789";
	char temp081[50] = "12345";
	char temp082[50] = "12345";
	printf("strlcat %zu \t  %s \n",strlcat(temp081,temp08,7),temp081);
	printf("ft_strlcat %zu \t  %s \n",ft_strlcat(temp082,temp08,7),temp082);
	printf("---------------------------------\n");
	char temp09 [] = "123456789";
	char temp091 [] = "123456789";
	char *find, *find1;
	find = ft_strchr(temp09,'6');
	find1 = strchr(temp091,'6');
	printf("ft_strchr \t  %s \n",find);
	printf("strchr \t\t  %s \n",find1);	
	printf("---------------------------------\n");
	char str11 []= "1234567389";
	char str111 [] = "1234567389";
	char *find01;
	char *fund02;
	find01 = ft_strrchr(str11,'3');
	fund02 = strrchr(str111,'3'); 
	printf("ft_strchr \t  %s \n",find01);
	printf("strchr \t\t  %s \n",fund02);
	printf("---------------------------------\n");
	char str13 []= "125656";
	char str131 [] = "2";
	char *find03;
	char *find031;
	find03 = strnstr(str13, str131, 2);
	find031 = ft_strnstr(str13, str131, 2);
	printf("strnstr \t\t  %s \n",find03);
	printf("ft_strnstr \t\t  %s \n",find031);
	printf("---------------------------------\n");
	char str004 []= "125";
	char str0041 [] = "12h";
	printf("strcmp \t\t  %d \n",strcmp(str004,str0041));
	printf("ft_strcmp \t  %d \n",ft_strcmp(str004,str0041));
	printf("---------------------------------\n");
	char str005 []= "1232456789";
	char str0051 [] = "1234568a9";
	printf("strcmp \t\t  %d \n",strncmp(str005,str0051,2));
	printf("ft_strcmp \t  %d \n",ft_strncmp(str005,str0051,2));
	printf("---------------------------------\n");
	printf("atoi \t  %d \n",atoi("9999999999"));
	printf("ft_atoi \t  %d \n",ft_atoi("9999999999"));
	printf("---------------------------------\n");
	printf("isalpha \t  %d \n",isalpha('8'));
	printf("ft_isalpha \t  %d \n",ft_isalpha('8'));
	printf("---------------------------------\n");
	printf("isdigit \t  %d \n",isdigit('8'));
	printf("ft_isdigit \t  %d \n",ft_isdigit('8'));
	printf("---------------------------------\n");
	printf("isalnum \t  %d \n",isalnum('8'));
	printf("ft_isalnum \t  %d \n",ft_isalnum('9'));
	printf("---------------------------------\n");
	printf("isascii \t  %d \n",isascii(300));
	printf("ft_isascii \t  %d \n",ft_isascii(300));
	printf("---------------------------------\n");
	printf("isprint \t  %d \n",isprint('k'));
	printf("ft_isprint\t  %d \n",ft_isprint('k'));
	printf("---------------------------------\n");
	printf("toupper \t  %c \n",toupper('a'));
	printf("ft_toupper\t  %c \n",ft_toupper('a'));
	printf("---------------------------------\n");
	printf("tolower \t  %c \n",tolower('A'));
	printf("ft_tolower\t  %c \n",ft_tolower('A'));
	printf("---------------------------------\n");
	char *str006;
	str006 = ft_memalloc(10);
	printf("---------------------------------\n");
	ft_memdel((void *)&str006);
	printf("---------------------------------\n");
	char *str007;
	str007 = ft_strnew(10);
	printf("---------------------------------\n");
	ft_strdel(&str007);
	printf("---------------------------------\n");
	char str008[40] = "1345";
	ft_strclr(str008);
	printf("---------------------------------\n");
	char *str009;
	char str0091[] = "   th  ";
	printf("ft_strlen\t  %zu \n",ft_strlen(str0091));
	str009 = ft_strtrim(str0091);
	printf("ft_strlen\t  %zu \n",ft_strlen(str009));
	printf("stroka = \t  %s \n",str009);
	return (0);
	printf("---------------------------------\n");
}