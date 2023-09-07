int main() 
{
    // Write C code here
    int num,i,j,dividend,remainder;
    char hexa[20];
    printf("Enter number to convert: ");
    scanf("%d" , &num);
    dividend = num;
    while(dividend != 0)
    {
        remainder = dividend % 16;
        if(remainder < 10)
        {
            hexa[i] = 48 + remainder;
            i++;
        }
        else
        { 
            hexa[i++] = 55 + remainder;
            i++;
        }
        dividend = dividend/16;
    }
    for(j=i-1; j>=0 ; j--)
    {
        printf("%c", hexa[j]);
    }
    return 0;
}
