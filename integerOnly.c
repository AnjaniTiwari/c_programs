int IntegerOnly()
{   char c;
    int n=0;
  do
  {
     c=getch();
     if(c>=48&&c<=57)
     {
         n=n*10+(c-48);
           printf("%c",c);
     }
     if(c==13)
        break;
  }while(1);
  return(n);
}
main()
{
    printf("\nEnter your number:%d ",IntegerOnly());
}
