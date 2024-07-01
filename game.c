#include <stdio.h>
#include <time.h>
struct game_values
{
    int d1,d2,d3,sr;
};
struct game_values drop_dices();

int main()
{
	struct game_values p1;
    struct game_values p2;
    int sum1,sum2,i,j;
    char a,b;
    do
    {
    	scanf("%c", &a);
    }while(a!=114);
    p1=drop_dices();
    do
    {
    	scanf("%c", &b);
    }while(b!=114);
    p2=drop_dices();
    if((p1.sr==1 && p2.sr==1) || (p1.sr==3 && p2.sr==3))
    {
    	sum1=p1.d1+p1.d2+p1.d3;
        sum2=p2.d1+p2.d2+p2.d3;
        if(sum1>sum2)
        	printf("\n\nThe winner is p1 with score %d\n", p1.sr+1);
        if(sum1<sum2)
        	printf("\n\nThe winner is p2 with score %d\n", p2.sr+1);
        if(sum1==sum2)
        	printf("\n\nTie");
    }
    if(p1.sr==2 && p2.sr==2)
    {
    	if(p1.d1==p1.d2)
        	i=p1.d3;
        if(p1.d1==p1.d3)
        	i=p1.d2;
        if(p1.d2==p1.d3)
        	i=p1.d1;
        if(p2.d1==p2.d2)
        	j=p2.d3;
        if(p2.d1==p2.d3)
        	j=p2.d2;
        if(p2.d2==p2.d3)
        	j=p2.d1;
        if(i>j)
        	printf("\n\nThe winner is p1 with score %d\n", p1.sr+1);
        if(i<j)
        	printf("\n\nThe winner is p2 with score %d\n", p2.sr+1);
        if(i==j)
        	printf("\n\nTie");
    }
    if(p1.sr==4 && p2.sr==4)
    	printf("\n\nTie");
    if(p1.sr>p2.sr)
    	printf("\n\nThe winner is p1 with score %d\n", p1.sr);
    if(p1.sr<p2.sr)
    	printf("\n\nThe winner is p2 with score %d\n", p2.sr);
    return 0;
}

struct game_values drop_dices()
{
	struct game_values fr_values;
    srand(time(NULL));
    fr_values.d1=rand()%6+1;
    fr_values.d2=rand()%6+1;
    fr_values.d3=rand()%6+1;
    printf("fr_values.d1=%d, fr_values.d2=%d, fr_values.d3=%d\n", fr_values.d1,fr_values.d2,fr_values.d3);
    if(fr_values.d1==4 && fr_values.d2==5 && fr_values.d3==6)
    	fr_values.sr=4;
    if(fr_values.d1==fr_values.d2 && fr_values.d1==fr_values.d3)
    	fr_values.sr=3;
    if((fr_values.d1==fr_values.d2 || fr_values.d1==fr_values.d3 || fr_values.d2==fr_values.d3) && (fr_values.sr!=3))
    	fr_values.sr=2;
    if(fr_values.d1!=fr_values.d2 && fr_values.d1!=fr_values.d3 && fr_values.d2!=fr_values.d3)
    	fr_values.sr=1;
    return fr_values;
}
