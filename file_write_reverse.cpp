#include <stdio.h>
main(){
    FILE *myFile;
    myFile = fopen("sample.txt", "a");

    //read file into array
    int i, num1;
    int numberArray[5];
    
	if(myFile)
    for (i = 0; i < 5; i++)
	{
        printf("Input Number:", numberArray[i]);
        scanf("%d",&numberArray[i]);
        fputc(i,myFile);
        fclose(myFile);
    }
    
	
}
