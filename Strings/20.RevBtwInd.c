    #include<stdio.h>
    #include<string.h>
    void main()
    {
        char a[100],temp,copy1=-1,copy2;
        int i,l,r;
        printf("enter string");
        gets(a);
        for(i=0;a[i]!='\0';i++)
        {
            if((a[i]=='a')||(a[i]=='e')||(a[i]=='i')||(a[i]=='o')||(a[i]=='u')||(a[i]=='A')||(a[i]=='E')||(a[i]=='I')||(a[i]=='O')||(a[i]=='U'))
            {
                if(copy1==-1)
                copy1=i;
                copy2=i;
            } 
        }
        temp=a[copy1];
        a[copy1]=a[copy2];
        a[copy2]=temp;
        puts(a);
    }