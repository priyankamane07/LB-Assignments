//Accept character from user and check whether that character is vowel or not
#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>

bool CheckVowel(char ch)
{
    if(ch=='a'|| ch=='A'|| ch=='e'|| ch=='E' ||ch=='i' ||ch=='I' ||ch=='o' ||ch=='O' ||ch=='u' ||ch=='U')
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    char cValue;
    bool bRet = false;

    printf("Enter character: \n");
    scanf("%c", &cValue);

    bRet = CheckVowel(cValue);

    if(bRet == true)
    {
        printf("it is vowel");
    }
    else
    {
        printf("it is not vowel");
    }

    return 0;
}