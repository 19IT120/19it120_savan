//create a user defined function that will convert lower case into upper case without using inbuilt function

#include<stdio.h>

void upper();

int main()
{
    upper();
}

void upper()
{
    char str[30];
    int i=0;
    printf("Enter your String(Lower case):");
    scanf("%[^\n]",str);

    while(str[i]!='\0')
    {
        if(str[i]>96 && str[i]<123 )
        str[i]-=32;
        i++;
    }
    printf("\n\nUpper case String is :%s",str);
    return 0;
}
