
//Accept one character from user and convert case of that character
#include<stdio.h>
#include<ctype.h>

int DisplayConvert(char vr)
{
    if(islower(vr))
    {
        vr = toupper(vr);
    }
    else if(isupper(vr))
    {
        vr = tolower(vr);
    }
    return vr;
}

int main()
{
    char ch;
    char cRet;

    printf("Enter character: \n");
    scanf("%c", &ch);

    cRet = DisplayConvert(ch);
    printf("%c", cRet);
    
    return 0;
}