int StoI(char *_string)
{
    char *temp_string = _string;
    temp_string += (strlen(_string) - 1);
    unsigned int final = 0, temp_final = 0, assis = 1;
    for (char index = strlen(_string); index > 0; index--)
    {
        temp_final = (*temp_string) - '0';
        final += (assis * temp_final);
        temp_string--;
        assis *= 10;
    }
    return final;
}

int NumberDigitsCounter(int num)
{
    static int counter = 0;
    if (num == 0)
      return counter;
    else
      {
        counter++;
        return (NumberDigitsCounter(num / 10));
      }
}

char* ItoS (int num)
{
    int Num_Counuter = NumberDigitsCounter(num);
    char *_string = (char *)malloc((Num_Counuter + 1) * sizeof(char));
    _string[Num_Counuter] = '\0';
    for (int index = Num_Counuter - 1; index >= 0; index--)
    {
        _string[index] = ((num % 10) + (int)'0');
        num /= 10;
    }
    return _string;
}

char *multiply(char *num1, char *num2)
{
    if (num1 == NULL || num2 == NULL)
        return "0";
    else
     {
        int result = StoI(num1) * StoI(num2);
        return (ItoS(result));
     }

    
}
