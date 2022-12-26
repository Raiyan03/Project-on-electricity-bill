#include<stdio.h>
#include<windows.h>
// declaring color functions.
void red()
{
    printf("\033[1;31m");
}

void green()
{
    printf("\033[1;32m");
}

void yellow()
{
    printf("\033[1;33m");
}

void blue()
{
    printf("\033[1;34m");
}

void purple()
{
    printf("\033[1;35m");
}

void reset()
{
    printf("\033[0m");
}

void load()
{
    int i;
    while(1)
    {
        red();
        printf("loading");
        for(i = 0;i < 4; i++)
        {
            
            Beep(1500, 500);
            printf(".");
           
        }
        reset();
        system("cls");
        break;
    }
}

void load2()
{
    int i;
    while(1)
    {
        red();
        printf("Downloading");
        for(i = 0;i <= 4; i++)
        {
            
            Beep(1500, 500);
            printf(".");
        }
        reset();
        system("cls");
        break;
    }
}

void delhi()  
{  
    int id,units; 
	int i;
    char name[50], address[100];
    float total_bill;  

    load();
    system("cls");
    //Using printf(""); function to show the output on screen  
    green();
    printf("\n\n\tWELLCOME TO DELHI ELECTRTICITY BOARD DEPPARTMENT\n\n");  
  
    printf("\t ELECTRICITY TARIFF FOR HOUSEHOLDS (Rates/Unit)\n\n");  
   
    for(i=0;i<70;i++)
		printf("_");
    printf("\n\tupto 200\t\t:\t\tRs. 0/unit\n\n");  
  
    printf("\n\t201-400\t\t\t:\t\tRs. 4.5/unit\n\n");   
  
    printf("\n\t401-800\t\t\t:\t\tRs. 6.5/unit\n\n");   
    
    printf("\n\t801-1200\t\t:\t\tRs. 7.0/unit\n\n");

    printf("\n\tabove 1200\t\t:\t\tRs. 8.0/unit\n\n");    
    
	for(i=0;i<70;i++)
		printf("_");  
  
    printf("\n\tEnter your details to access your bill\n");
    printf("\nConsumer id : ");  
  
    //here we are using scanf(""); function to get input from end user  
    scanf("%d",&id);

    printf("\n\nName    : ");

    scanf("%s",&name);

    printf("\n\nAddress : ");

    scanf("%s",&address);

    printf("\n\nTotal Units Consumed : ");

    scanf("%d",&units);

    load2();
    
    system("cls");
    //after getting input from user, we will check the conditions to calculate actual bill charges   
    if (units <= 200)  
  
    total_bill = units * 0;  
  
    else if (units <= 400)  
  
    total_bill = units * 4.5;  
  
    else if (units <= 800)  
  
    total_bill = units * 6.5;  
  
    else if (units <= 1200)  
  
    total_bill = units * 7;  
  
    else if (units > 1200)  
  
    total_bill = units * 8;

    green();  

    for (i = 0; i < 70; i++)
        printf("_");
    printf("\n\n\t\t DELHI ELECTRTICITY BOARD DEPPARTMENT\n\n");

    printf("\n\nNAME           \t\t:\t\t%s\n\n",name);

    printf("\n\nADDRESS       \t\t:\t\t%s\n\n",address);


    printf("\n\nCONCUMER ID\t\t:\t\t%d\n\n", id);

    printf("\n\nunits      \t\t:\t\t%d\n\n", units);
  
    //and finally, we will show result with bill charges    
    printf("\n\nTOTAL      \t\t:\t\tRs.%f\n\n", total_bill);
    for (i = 0; i < 70; i++)
        printf("_");
}

void wb()    
{ 
    int id,units; 
	int i;
    char name[50], address[100];
  
    float total_bill;

    load();

    system("cls");

    blue(); 
  
    //Using printf(""); function to show the output on screen  
  
    printf("\n\n\tWELLCOME TO WEST BENGAL ELECTRTICITY BOARD DEPPARTMENT\n\n");  
  
    printf("\t   ELECTRICITY TARIFF FOR HOUSEHOLDS (Rates/Unit)\n\n");  
   
  for(i=0;i<70;i++)
		printf("_");
    printf("\n\tUpto 102\t\t:\t\tRs. 5.3/unit\n\n");  
  
    printf("\n\t103-180\t\t\t:\t\tRs. 5.97/unit\n\n");   
  
    printf("\n\t181-300\t\t\t:\t\tRs. 6.97/unit\n\n");   
    
    printf("\n\t301-600\t\t\t:\t\tRs. 7.31/unit\n\n");

    printf("\n\t601-900\t\t\t:\t\tRs. 7.58/unit\n\n");

    printf("\n\tAbove 900\t\t:\t\tRs. 8.99/unit\n\n");

	for(i=0;i<70;i++)
		printf("_");  
  
    printf("\n\n\tEnter your details to access your bill\n");
    printf("\nConsumer id : ");  
  
    //here we are using scanf(""); function to get input from end user  
    scanf("%d", & id);

    printf("\n\nName    : ");

    scanf("%s",&name);

    printf("\n\nAddress : ");

    scanf("%s",&address);

    printf("\n\nTotal Units Consumed : ");

    scanf("%d", & units);

    load2();

    system("cls");
    //after getting input from user, we will check the conditions to calculate actual bill charges   
    if (units <= 102)  
  
    total_bill = units * 5.3;  
  
    else if (units <= 180)  
  
    total_bill = units * 5.97;  
  
    else if (units <= 300)  
  
    total_bill = units * 6.97;  
  
    else if (units <= 600)  
  
    total_bill = units * 7.31;  
  
    else if (units <= 900)  
  
    total_bill = units * 7.58;

    else if (units > 900 )

    total_bill = units * 8.99;  

    blue();

    for (i = 0; i < 70; i++)
        printf("_");
    printf("\n\n\t\tWEST BENGAL ELECTRTICITY BOARD DEPPARTMENT\n\n");

    printf("\n\nNAME           \t\t:\t\t%s\n\n",name);

    printf("\n\nADDRESS       \t\t:\t\t%s\n\n",address);


    printf("\n\nCONCUMER ID\t\t:\t\t%d\n\n", id);

    printf("\n\nunits      \t\t:\t\t%d\n\n", units);
  
    //and finally, we will show result with bill charges    
    printf("\n\nTOTAL      \t\t:\t\tRs.%f\n\n", total_bill);
    for (i = 0; i < 70; i++)
        printf("_");  
  
} 
void karnataka()   
{  
  
    int id,units; 
	int i;
    char name[50], address[100];
    float total_bill;  
    
    load();

    purple();
  
    //Using printf(""); function to show the output on screen  
  
    printf("\n\n\tWELLCOME TO KARNATAKA ELECTRTICITY BOARD DEPPARTMENT\n\n");  
  
    printf("\t   ELECTRICITY TARIFF FOR HOUSEHOLDS (Rates/Unit)\n\n");  
   
    for(i=0;i<70;i++)
		printf("_");
    printf("\n\tUpto 50\t\t\t:\t\tRs. 4.1/unit\n\n");  
  
    printf("\n\t51-100\t\t\t:\t\tRs. 5.55/unit\n\n");   
  
    printf("\n\t101-200\t\t\t:\t\tRs. 7.1/unit\n\n");   
    
    printf("\n\tAbove 200\t\t:\t\tRs. 8.15/unit\n\n");


	for(i=0;i<70;i++)
		printf("_");  
  
    printf("\n\n\tEnter your details to access your bill\n");
    printf("\nConsumer id : ");  
  
    //here we are using scanf(""); function to get input from end user  
    scanf("%d", & id);

    printf("\n\nName    : ");

    scanf("%s",&name);

    printf("\nAddress : ");

    scanf("%s",&address);

    printf("\n\nTotal Units Consumed : ");

    scanf("%d", & units);

    load2();

    system("cls");

    //after getting input from user, we will check the conditions to calculate actual bill charges   
    if (units <= 50)  
  
    total_bill = units * 4.1;  
  
    else if (units <= 100)  
  
    total_bill = units * 5.55;  
  
    else if (units <= 200)  
  
    total_bill = units * 7.1;  
  
    else if (units > 200)  
  
    total_bill = units * 8.15;  
    purple();
    for (i = 0; i < 70; i++)
        printf("_");
    printf("\n\n\t\tKARNATAKA ELECTRTICITY BOARD DEPPARTMENT\n\n");

    printf("\n\nNAME           \t\t:\t\t%s\n\n",name);

     printf("\n\nADDRESS       \t\t:\t\t%s\n\n",address);


    printf("\n\nCONSUMER ID\t\t:\t\t%d\n\n", id);

    printf("\n\nunits      \t\t:\t\t%d\n\n", units);
  
    //and finally, we will show result with bill charges    
    printf("\n\nTOTAL      \t\t:\t\tRs.%f\n\n", total_bill);
    for (i = 0; i < 70; i++)
        printf("_");

    //here we are using getch(""); function to stop result on screen until we press any key  
  
} 
void maharashtra()  
{  
  
    int id,units; 
	int i;
    char name[50], address[100];
    float total_bill;  
    
    load();

    system("cls");
    yellow();
    //Using printf(""); function to show the output on screen  
  
    printf("\n\n\tWELLCOME TO MAHARASHTRA ELECTRTICITY BOARD DEPPARTMENT\n\n");  
  
    printf("\t   ELECTRICITY TARIFF FOR HOUSEHOLDS (Rates/Unit)\n\n");  
   
  for(i=0;i<70;i++)
		printf("_");
    printf("\n\tUpto 100\t\t:\t\tRs. 2.00/unit\n\n");  
  
    printf("\n\t101-300\t\t\t:\t\tRs. 3.70/unit\n\n");   
  
    printf("\n\t301-500\t\t\t:\t\tRs. 5.00/unit\n\n");   
    
    printf("\n\tAbove 500\t\t:\t\tRs. 5.75/unit\n\n");


	for(i=0;i<70;i++)
		printf("_");  
  
    printf("\n\n\tEnter your details to access your bill\n");
    printf("\nConsumer id : ");  
  
    //here we are using scanf(""); function to get input from end user  
    scanf("%d", & id);

    printf("\n\nName    : ");

    scanf("%s",&name);

    printf("\n\nAddress : ");

    scanf("%s",&address);

    printf("\n\nTotal Units Consumed : ");

    scanf("%d", & units);

    load2();

    system("cls");

    //after getting input from user, we will check the conditions to calculate actual bill charges   
    if (units <= 100)  
  
    total_bill = units * 2.0;  
  
    else if (units <= 300)  
  
    total_bill = units * 3.70;  
  
    else if (units <= 500)  
  
    total_bill = units * 5.0;  
  
    else if (units > 500)  
  
    total_bill = units * 5.75;  
    purple();
    for (i = 0; i < 70; i++)
        printf("_");
    printf("\n\n\t\tMAHARASHTRA ELECTRTICITY BOARD DEPPARTMENT\n\n");

    printf("\n\nNAME           \t\t:\t\t%s\n\n",name);

     printf("\n\nADDRESS       \t\t:\t\t%s\n\n",address);

    printf("\n\nCONSUMER ID\t\t:\t\t%d\n\n", id);

    printf("\n\nunits      \t\t:\t\t%d\n\n", units);
  
    //and finally, we will show result with bill charges    
    printf("\n\nTOTAL      \t\t:\t\tRs.%f\n\n", total_bill);
    for (i = 0; i < 70; i++)
        printf("_");

    //here we are using getch(""); function to stop result on screen until we press any key  

  
} 

void main()
{
    int ch;
    while(1)
    {
        red();

        printf("\n\n\t\tWELCOME TO ELECTRICITY BOARD DEPARTMENT \n\n");

        reset();

        green();

        printf("1}\tDELHI\n\n");

         reset();

         blue();

        printf("2}\tWEST BENGAL\n\n");

         reset();

        purple();

        printf("3}\tKARNATAKA\n\n");

        reset();

        yellow();

        printf("4}\tMAHARASHTRA\n\n");

        reset();

        printf("Select your state\n");

        scanf("%d",&ch);
    
        switch(ch)
        {
            case 1: delhi();
                break;
            case 2: wb();
                break;
            case 3: karnataka();
                break;
            case 4: maharashtra();
                break;
            case 0: exit(0);
        }
    }
        
    
}