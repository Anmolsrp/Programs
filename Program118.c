// Accept string from user and accept one character and find that character occurrence

int CountFrequency(char *str ,char ch)
{
	int iCnt = 0;
	
	while(*str != '\0')
	{
		if(*str == ch)
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}
int main()
{
	char Arr[20];
	int iRet = 0;
	
	printf("Enter the string : \n");
	scanf("%[^'\n']s",Arr);
	
//	printf("Enter the character to find : ");
//	scanf("%c",c);
	
	iRet = CountFrequency(Arr,'a');
	printf("Character 'a' occurence in string is  %d",iRet);
	
	return 0;
	
}
