main()
{
    char name[5][10],t[10];
    int i,d,round;
    printf("Enter 5 name:\n");
    for(i=0;i<5;i++)
        gets(&name[i]);
        for(round=1;round<=4;round++)
        {
            for(i=0;i<5-round;i++)
            {
                d=strcmp(name[i],name[i+1]);
                if(d>0)
                {
                   strcpy(t,name[i]);
                   strcpy(name[i],name[i+1]);
                   strcpy(name[i+1],t);
                }
            }
        }
    printf("\n");
    for(i=0;i<5;i++)
        puts(name[i]);
    }
