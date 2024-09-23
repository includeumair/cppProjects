

#include <iostream>


using namespace std;

int arraySize(char arr[]) {
    int length = 0;
    while (arr[length] != '\0') {
        length++;
    }
    return length;
}
void convertChar(char array[]) 
{

    int size = arraySize(array);

    for (int i = 0; i < size; i++)
    {
        if (array[i] >= 97 && array[i] <= 122)
        {
            array[i] = array[i] - 32;
        }
        else if (array[i] >= 65 && array[i] <= 90)
        {
            array[i] = array[i] + 32; 
        }
    }
    
}

int main()
{
     char arr[] = "hELLO";
     convertChar(arr);
     cout << arr;
     
     return 0;

}
